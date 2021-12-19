module StdMaps

using CxxInterface
using ..STL

const keys = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64])
const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble, Complex{Cfloat}, Complex{Cdouble}])

################################################################################

eval(cxxprelude("""
    #include <complex>
    #include <cstddef>
    #include <cstdint>
    #include <map>
    #include <tuple>
    """))

struct StdMap{K,T} <: AbstractDict{K,T}
    cxx::Ptr{Cvoid}
    StdMap{K,T}() where {K,T} = new{K,T}(C_NULL)
    StdMap{K,T}(cxx::Ptr{Cvoid}) where {K,T} = new{K,T}(cxx)
end
Base.cconvert(map::StdMap) = map.cxx

for K in types, T in types
    CK = cxxtype[K]
    NK = cxxname(CK)
    CT = cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdMap_new), "std_map_$(NK)_$(NT)_new"),
                     FnResult(Ptr{Cvoid}, "std::map<$CK,$CT> *", StdMap{K,T}, expr -> :(StdMap{$K,$T}($expr))),
                     [FnArg(:key, Nothing, "key", "std::tuple<>", Type{K}, expr -> nothing),
                      FnArg(:type, Nothing, "type", "std::tuple<>", Type{T}, expr -> nothing)], "return new std::map<$CK,$CT>;"))

    #TODO eval(cxxfunction(FnName(:StdMap_delete, "std_vector_$(NT)_delete"), FnResult(Nothing, "void"),
    #TODO                  [FnArg(:map, Ptr{Cvoid}, "map", "std::vector<$CT> * restrict", StdMap{T}, identity)], "delete map;"))
    #TODO 
    #TODO eval(cxxfunction(FnName(:(Base.length), "std_vector_$(NT)_length"),
    #TODO                  FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
    #TODO                  [FnArg(:map, Ptr{Cvoid}, "map", "const std::vector<$CT> * restrict", StdMap{T}, identity)],
    #TODO                  "return map->size();"))
    #TODO 
    #TODO eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex"), FnResult(T, CT),
    #TODO                  [FnArg(:map, Ptr{Cvoid}, "map", "const std::vector<$CT> * restrict", StdMap{T}, identity),
    #TODO                   FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*map)[idx];"))
    #TODO 
    #TODO eval(cxxfunction(FnName(:(Base.setindex!), "std_vector_$(NT)_setindex_"), FnResult(Nothing, "void"),
    #TODO                  [FnArg(:map, Ptr{Cvoid}, "map", "std::vector<$CT> * restrict", StdMap{T}, identity),
    #TODO                   FnArg(:elt, T, "elt", "const $CT&"), FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)],
    #TODO                  "(*map)[idx] = elt;"))
end

STL.allocate(::StdMap{K,T}) where {K,T} = StdMap_new(K, T)
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
