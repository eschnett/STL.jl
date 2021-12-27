# StdMap

eval(cxxnewfile("StdMap.cxx", """
    #include <map>
    #include <string>

    static_assert(sizeof(bool) == 1, "");
    """))

Base.cconvert(::Type{Ptr{StdMap{K,T}}}, map::StdMap{K,T}) where {K,T} = map.cxx

convert_arg(::Type{Ptr{StdMap{K,T}}}, map::StdMap{K,T}) where {K,T} = map.cxx
convert_result(::Type{StdMap{K,T}}, ptr::Ptr{StdMap{K,T}}) where {K,T} = StdMap{K,T}(ptr)

StdMap{K,T}() where {K,T} = StdMap_new(K, T)

Base.cconvert(::Type{Ptr{StdMapIterator{K,T}}}, map::StdMapIterator{K,T}) where {K,T} = map.cxx

convert_arg(::Type{Ptr{StdMapIterator{K,T}}}, iter::StdMapIterator{K,T}) where {K,T} = iter.cxx
convert_result(::Type{StdMapIterator{K,T}}, ptr::Ptr{StdMapIterator{K,T}}) where {K,T} = StdMapIterator{K,T}(ptr)

StdMapIterator{K,T}() where {K,T} = StdMapIterator_new(K, T)

function generate(::Type{StdMap{K,T}}) where {K,T}
    CK = K == Bool ? "bool" : K == StdString ? "std::string" : cxxtype[K]
    NK = cxxname(CK)
    CT = T == Bool ? "bool" : T == StdString ? "std::string" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdMap_new), "std_map_$(NK)_$(NT)_new", libSTL),
                     FnResult(Ptr{StdMap{K,T}}, "std::map<$CK, $CT> *", StdMap{K,T}, expr -> :(StdMap{$K,$T}($expr))),
                     [FnArg(:key, Nothing, "key", "void", Type{K}, identity; skip=true),
                      FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::map<$CK, $CT>;"))

    eval(cxxfunction(FnName(:StdMap_delete, "std_map_$(NK)_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)], "delete map;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_map_$(NK)_$(NT)_copy", libSTL),
                     FnResult(Ptr{StdMap{K,T}}, "std::map<$CK, $CT> *", StdMap{K,T}, expr -> :(StdMap{$K,$T}($expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return new std::map<$CK, $CT>(*map);"))

    eval(cxxfunction(FnName(:(Base.length), "std_map_$(NK)_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return map->size();"))

    eval(cxxfunction(FnName(:(Base.haskey), "std_map_$(NK)_$(NT)_haskey", libSTL),
                     FnResult(Csize_t, "std::size_t", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "return map->count(*key);"))

    # if T == Bool
    #     eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_getindex", libSTL), FnResult(T, CT),
    #                      [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
    #                       FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
    #                      "return map->at(*key);"))
    # else
    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_getindex", libSTL),
                     FnResult(Ptr{T}, "$CT *", T, expr -> :(convert_result($T, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "return &map->at(*key);"))
    # end

    eval(cxxfunction(FnName(:(Base.setindex!), "std_map_$(NK)_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:elt, Ptr{T}, "elt", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr)))),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "(*map)[*key] = *elt;"))

    eval(cxxfunction(FnName(:(Base.delete!), "std_map_$(NK)_$(NT)_delete_", libSTL),
                     FnResult(Nothing, "void", StdMap{K,T}, expr -> :map),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "map->erase(*key);"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_map_$(NK)_$(NT)_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:map1, Ptr{StdMap{K,T}}, "map1", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:map2, Ptr{StdMap{K,T}}, "map2", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return *map1 == *map2;"))

    eval(cxxfunction(FnName(:cbegin, "std_map_$(NK)_$(NT)_cbegin", libSTL),
                     FnResult(Ptr{StdMapIterator{K,T}}, "std::map<$CK, $CT>::const_iterator *", StdMapIterator{K,T},
                              expr -> :(StdMapIterator{$K,$T}($expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return new std::map<$CK, $CT>::const_iterator(map->cbegin());"))

    eval(cxxfunction(FnName(:cend, "std_map_$(NK)_$(NT)_cend", libSTL),
                     FnResult(Ptr{StdMapIterator{K,T}}, "std::map<$CK, $CT>::const_iterator *", StdMapIterator{K,T},
                              expr -> :(StdMapIterator{$K,$T}($expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return new std::map<$CK, $CT>::const_iterator(map->cend());"))

    # Iterators

    eval(cxxfunction(FnName(Symbol(:StdMapIterator_new), "std_map_$(NK)_$(NT)_const_iterator_new", libSTL),
                     FnResult(Ptr{StdMap{K,T}}, "std::map<$CK, $CT>::const_iterator *", StdMapIterator{K,T},
                              expr -> :(StdMapIterator{$K,$T}($expr))),
                     [FnArg(:key, Nothing, "key", "void", Type{K}, identity; skip=true),
                      FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)],
                     "return new std::map<$CK, $CT>::const_iterator;"))

    eval(cxxfunction(FnName(:StdMapIterator_delete, "std_map_$(NK)_$(NT)_const_iterator_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity)], "delete iter;"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_map_$(NK)_$(NT)_const_iterator_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:iter1, Ptr{StdMapIterator{K,T}}, "iter1", "const std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity),
                      FnArg(:iter2, Ptr{StdMapIterator{K,T}}, "iter2", "const std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity)], "return *iter1 == *iter2;"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_const_iterator_getindex", libSTL),
                     FnResult(Pair{Ptr{K},Ptr{T}}, "const std::pair<$CK const *, $CT const *>", Pair{K,T},
                              expr -> :(convert_result($K, $expr[1]) => convert_result($T, $expr[2]))),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity)], """
                                        using P = std::pair<$CK const *, $CT const *>;
                                        static_assert(offsetof(P, first) == $(fieldoffset(Pair{Ptr{K},Ptr{T}}, 1)), "");
                                        static_assert(offsetof(P, second) == $(fieldoffset(Pair{Ptr{K},Ptr{T}}, 2)), "");
                                        return P(&(*iter)->first, &(*iter)->second);
                                        """))

    eval(cxxfunction(FnName(:inc!, "std_map_$(NK)_$(NT)_const_iterator_inc_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity)], "++*iter;"))

    eval(cxxfunction(FnName(:dec!, "std_map_$(NK)_$(NT)_const_iterator_dec_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity)], "--*iter;"))

    eval(cxxfunction(FnName(:is_cbegin, "std_map_$(NK)_$(NT)_const_iterator_is_cbegin", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "const std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity),
                      FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return *iter == map->cbegin();"))

    eval(cxxfunction(FnName(:is_cend, "std_map_$(NK)_$(NT)_const_iterator_is_cend", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:iter, Ptr{StdMapIterator{K,T}}, "iter", "const std::map<$CK, $CT>::const_iterator * restrict",
                            StdMapIterator{K,T}, identity),
                      FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return *iter == map->cend();"))

    return nothing
end

const StdMap_types = filter(T -> !(T <: Complex), value_types)
const StdMap_keys = filter(T -> T <: Integer, StdMap_types) ∪ Set([StdString])
for K in sort!(collect(StdMap_keys); by=string), T in sort!(collect(StdMap_types); by=string)
    generate(StdMap{K,T})
end

free(map::StdMap) = StdMap_delete(map)
free(iter::StdMapIterator) = StdMapIterator_delete(iter)

Base.isempty(map::StdMap) = length(map) == 0
Base.size(map::StdMap) = (length(map),)

Base.keytype(::StdMap{K}) where {K} = K
Base.eltype(::StdMap{K,T}) where {K,T} = T

################################################################################

GCStdMap{K,T}() where {K,T} = GCStdMap{K,T}(StdMap{K,T}())

GCStdMapIterator{K,T}() where {K,T} = GCStdMapIterator{K,T}(StdMapIterator{K,T}())

free(map::GCStdMap) = free(map.managed)
free(iter::GCStdMapIterator) = free(iter.managed)

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

cbegin(map::GCStdMap{K,T}) where {K,T} = GCStdMapIterator{K,T}(cbegin(map.managed))
cend(map::GCStdMap{K,T}) where {K,T} = GCStdMapIterator{K,T}(cend(map.managed))
Base.:(==)(iter1::GCStdMapIterator{K,T}, iter2::GCStdMapIterator{K,T}) where {K,T} = iter1.managed == iter2.managed
Base.getindex(iter::GCStdMapIterator) = getindex(iter.managed)
inc!(iter::GCStdMapIterator) = inc!(iter.managed)
dec!(iter::GCStdMapIterator) = dec!(iter.managed)
is_cbegin(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = is_cbegin(iter.managed, map.managed)
is_end(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = is_end(iter.managed, map.managed)

function Base.iterate(map::StdMap{K,T}) where {K,T}
    iter = GCStdMapIterator{K,T}(cbegin(map))
    is_cend(iter.managed, map) && return nothing
    return (iter[], iter)
end
function Base.iterate(map::StdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
    inc!(iter)
    is_cend(iter.managed, map) && return nothing
    return (iter[], iter)
end

function Base.iterate(map::GCStdMap{K,T}) where {K,T}
    iter = cbegin(map)
    is_cend(iter, map) && return nothing
    return (iter[], iter)
end
function Base.iterate(map::GCStdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
    inc!(iter)
    is_cend(iter, map) && return nothing
    return (iter[], iter)
end