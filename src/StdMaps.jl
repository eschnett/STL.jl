module StdMaps

using ..Stds
using CxxInterface
using STL_jll

const keys = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64])
const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble])

################################################################################

eval(cxxprelude("""
    #include <cstddef>
    #include <map>
    #include <utility>
    """))

struct StdMap{K,T} <: AbstractDict{K,T}
    cxx::Ptr{Cvoid}
    StdMap{K,T}(cxx::Ptr{Cvoid}) where {K,T} = new{K,T}(cxx)
end
export StdMap
Base.cconvert(::Type{Ptr{Cvoid}}, map::StdMap) = map.cxx

StdMap{K,T}() where {K,T} = StdMap_new(K, T)

struct StdMapIterator{K,T}
    cxx::Ptr{Cvoid}
    StdMapIterator{K,T}(cxx::Ptr{Cvoid}) where {K,T} = new{K,T}(cxx)
end
export StdMapIterator
Base.cconvert(::Type{Ptr{Cvoid}}, map::StdMapIterator) = map.cxx

StdMapIterator{K,T}() where {K,T} = StdMapIterator_new(K, T)

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

    eval(cxxfunction(FnName(:(Base.haskey), "std_map_$(NK)_$(NT)_haskey", libSTL),
                     FnResult(Csize_t, "std::size_t", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, K, "key", CK, Any, expr -> :(convert($K, $expr)))], "return map->count(key);"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, K, "key", CK, Any, expr -> :(convert($K, $expr)))], "return map->at(key);"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_map_$(NK)_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{Cvoid}, "map", "std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:elt, T, "elt", CT, Any, expr -> :(convert($T, $expr))),
                      FnArg(:key, K, "key", CK, Any, expr -> :(convert($K, $expr)))], "(*map)[key] = std::move(elt);"))

    eval(cxxfunction(FnName(:(Base.delete!), "std_map_$(NK)_$(NT)_delete_", libSTL),
                     FnResult(Nothing, "void", StdMap{K,T}, expr -> :map),
                     [FnArg(:map, Ptr{Cvoid}, "map", "std::map<$CK,$CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, K, "key", CK, Any, expr -> :(convert($K, $expr)))], "map->erase(key);"))

    eval(cxxfunction(FnName(Symbol(:StdMapIterator_new), "std_map_$(NK)_$(NT)_const_iterator_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::map<$CK,$CT>::const_iterator *", StdMapIterator{K,T},
                              expr -> :(StdMapIterator{$K,$T}($expr))),
                     [FnArg(:key, Nothing, "key", "void", Type{K}, identity; skip=true),
                      FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)],
                     "return new std::map<$CK,$CT>::const_iterator;"))

    eval(cxxfunction(FnName(:StdMapIterator_delete, "std_map_$(NK)_$(NT)_const_iterator_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{Cvoid}, "iter", "std::map<$CK,$CT>::const_iterator * restrict", StdMapIterator{K,T},
                            identity)], "delete iter;"))

    # We need to roll our own (mutable) iterator interface. We use:
    # - `iterate!(::StdMapIterator, ::StdMap)`
    # - `next!(::StdMapIterator)`
    # - `done(::StdMapIterator, ::StdMap)::Bool`
    # - `getindex(::StdMapIterator)`
    # which mimics Julia's old iterator interface

    eval(cxxfunction(FnName(:iterate!, "std_map_$(NK)_$(NT)_iterator_iterate_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:iter, Ptr{Cvoid}, "iter", "std::map<$CK,$CT>::const_iterator * restrict", StdMapIterator{K,T},
                            identity), FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity)],
                     "*iter = map->cbegin();"))

    eval(cxxfunction(FnName(:next!, "std_map_$(NK)_$(NT)_iterator_next_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:iter, Ptr{Cvoid}, "iter", "std::map<$CK,$CT>::const_iterator * restrict", StdMapIterator{K,T},
                            identity)], "++*iter;"))

    eval(cxxfunction(FnName(:done, "std_map_$(NK)_$(NT)_iterator_done", libSTL),
                     FnResult(Cint, "int", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:iter, Ptr{Cvoid}, "iter", "const std::map<$CK,$CT>::const_iterator * restrict", StdMapIterator{K,T},
                            identity), FnArg(:map, Ptr{Cvoid}, "map", "const std::map<$CK,$CT> * restrict", StdMap{K,T}, identity)],
                     "return *iter == map->cend();"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_iterator_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:iter, Ptr{Cvoid}, "iter", "const std::map<$CK,$CT>::const_iterator * restrict", StdMapIterator{K,T},
                            identity)], "return (*iter)->second;"))
end

Stds.free(map::StdMap) = StdMap_delete(map)
Stds.free(iter::StdMapIterator) = StdMapIterator_delete(iter)

Base.isempty(map::StdMap) = length(map) == 0
Base.size(map::StdMap) = (length(map),)

Base.keytype(::StdMap{K}) where {K} = K
Base.eltype(::StdMap{K,T}) where {K,T} = T

################################################################################

mutable struct GCStdMap{K,T} <: AbstractDict{K,T}
    managed::StdMap{K,T}
    function GCStdMap{K,T}() where {K,T}
        res = new{K,T}(StdMap{K,T}())
        finalizer(free, res)
        return res
    end
end
export GCStdMap
Base.cconvert(::Type{Ptr{Cvoid}}, map::GCStdMap) = cconvert(map.managed)

mutable struct GCStdMapIterator{K,T}
    managed::StdMapIterator{K,T}
    function GCStdMapIterator{K,T}() where {K,T}
        res = new{K,T}(StdMapIterator{K,T}())
        finalizer(free, res)
        return res
    end
end
export GCStdMapIterator
Base.cconvert(::Type{Ptr{Cvoid}}, map::GCStdMapIterator) = cconvert(map.managed)

Stds.free(map::GCStdMap) = free(map.managed)
Stds.free(iter::GCStdMapIterator) = free(iter.managed)

Base.length(map::GCStdMap) = length(map.managed)
Base.isempty(map::GCStdMap) = isempty(map.managed)
Base.haskey(map::GCStdMap, key) = haskey(map.managed, key)
Base.getindex(map::GCStdMap, key) = getindex(map.managed, key)
Base.setindex!(map::GCStdMap, elt, key) = setindex!(map.managed, elt, key)
Base.delete!(map::GCStdMap, key) = delete!(map.managed, key)
Base.size(map::GCStdMap) = size(map.managed)
Base.keytype(::GCStdMap{K}) where {K} = keytype(StdMap{K})
Base.eltype(::GCStdMap{K,T}) where {K,T} = eltype(StdMap{K,T})

################################################################################

iterate!(iter::GCStdMapIterator{K,T}, map::StdMap{K,T}) where {K,T} = iterate!(iter.managed, map)
done(iter::GCStdMapIterator{K,T}, map::StdMap{K,T}) where {K,T} = done(iter.managed, map)

iterate!(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = iterate!(iter.managed, map.managed)
next!(iter::GCStdMapIterator) = next!(iter.managed)
done(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = done(iter.managed, map.managed)
Base.getindex(iter::GCStdMapIterator) = getindex(iter.managed)

function Base.iterate(map::StdMap{K,T}) where {K,T}
    iter = GCStdMapIterator{K,T}()
    iterate!(iter, map)
    done(iter, map) && return nothing
    return (iter[], iter)
end

function Base.iterate(map::StdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
    next!(iter)
    done(iter, map) && return nothing
    return (iter[], iter)
end

function Base.iterate(map::GCStdMap{K,T}) where {K,T}
    iter = GCStdMapIterator{K,T}()
    iterate!(iter, map)
    done(iter, map) && return nothing
    return (iter[], iter)
end

function Base.iterate(map::GCStdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
    next!(iter)
    done(iter, map) && return nothing
    return (iter[], iter)
end

end
