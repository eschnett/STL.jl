module StdMaps

using CxxInterface
using STL_jll
using ..STL

const keys = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64])
const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble])

################################################################################

eval(cxxprelude("""
    #include <complex>
    #include <cstddef>
    #include <cstdint>
    #include <map>
    """))

struct StdMap{K,T} <: AbstractDict{K,T}
    cxx::Ptr{Cvoid}
    StdMap{K,T}() where {K,T} = new{K,T}(C_NULL)
    StdMap{K,T}(cxx::Ptr{Cvoid}) where {K,T} = new{K,T}(cxx)
end
export StdMap
Base.cconvert(::Type{Ptr{Cvoid}}, map::StdMap) = map.cxx

for K in types, T in types
    CK = cxxtype[K]
    NK = cxxname(CK)
    CT = cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdMap_new), "std_map_$(NK)_$(NT)_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::map<$CK,$CT> *", StdMap{K,T}, expr -> :(StdMap{$K,$T}($expr))),
                     [FnArg(:key, Nothing, "key", "void", Type{K}, identity; skip=true),
                      FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::map<$CK,$CT>;"))

    eval(cxxfunction(FnName(:StdMap_delete, "std_map_$(NK)_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{Cvoid}, "map", "std::map<$CK,$CT> * restrict", StdMap{K,T}, identity)], "delete map;"))

    eval(cxxfunction(FnName(:(Base.length), "std_map_$(NK)_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity)],
                     "return map->size();"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, K, "key", "const $CK&", Any, expr -> :(convert(K, $expr)))], "return map->at(key);"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_map_$(NK)_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{Cvoid}, "map", "std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:elt, T, "elt", "const $CT&"), FnArg(:key, K, "key", "const $CK&", Any, expr -> :(convert(K, $expr)))],
                     "(*map)[key] = elt;"))
end

STL.allocate(::Type{StdMap{K,T}}) where {K,T} = StdMap_new(K, T)
STL.free(map::StdMap) = StdMap_delete(map)

Base.size(map::StdMap) = (length(map),)

Base.keytype(::StdMap{K}) where {K} = K
Base.eltype(::StdMap{K,T}) where {K,T} = T

################################################################################

mutable struct GCStdMap{K,T} <: AbstractDict{K,T}
    managed::StdMap{K,T}
    function GCStdMap{K,T}() where {K,T}
        res = new{K,T}(allocate(StdMap{K,T}))
        finalizer(free, res)
        return res
    end
end
export GCStdMap
Base.cconvert(map::GCStdMap) = cconvert(map.managed)

Base.length(map::GCStdMap) = length(map.managed)
Base.getindex(map::GCStdMap, key) = getindex(map.managed, key)
Base.setindex!(map::GCStdMap, elt, key) = setindex!(map.managed, elt, key)
Base.size(map::GCStdMap) = size(map.managed)
Base.keytype(::GCStdMap{K}) where {K} = keytype(StdMap{K})
Base.eltype(::GCStdMap{K,T}) where {K,T} = eltype(StdMap{K,T})

end
