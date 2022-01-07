# StdMap

eval(cxxnewfile("StdMap.cxx", """
    #include <map>
    #include <memory>
    #include <string>
    #include <utility>
    #include <vector>

    static_assert(sizeof(bool) == 1, "");
    """))

tests = []
function generate(::Type{StdMap{K,T}}) where {K,T}
    CK = K == Bool ? "bool" : K == RefStdString ? "std::string" : K == SharedStdString ? "std::shared_ptr<std::string>" : cxxtype[K]
    NK = cxxname(CK)
    CT = T == Bool ? "bool" :
         T == RefStdString ? "std::string" :
         T == SharedStdString ? "std::shared_ptr<std::string>" :
         T == RefStdVector{RefStdString} ? "std::vector<std::string>" :
         T == RefStdVector{SharedStdString} ? "std::vector<std::shared_ptr<std::string>>" :
         T == SharedStdVector{RefStdString} ? "std::shared_ptr<std::vector<std::string>>" :
         T == SharedStdVector{SharedStdString} ? "std::shared_ptr<std::vector<std::shared_ptr<std::string>>>" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(:RefStdMap_new, "std_map_$(NK)_$(NT)_new", libSTL),
                     FnResult(Ptr{StdMap{K,T}}, "std::map<$CK, $CT> *", RefStdMap{K,T}, expr -> :(RefStdMap{$K,$T}($expr))),
                     [FnArg(:keytype, Nothing, "keytype", "void", Type{K}, identity; skip=true),
                      FnArg(:valuetype, Nothing, "valuetype", "void", Type{T}, identity; skip=true)],
                     "return new std::map<$CK, $CT>;"))

    eval(cxxfunction(FnName(:RefStdMap_delete, "std_map_$(NK)_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", RefStdMap{K,T}, identity)],
                     "delete map;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_map_$(NK)_$(NT)_copy", libSTL),
                     FnResult(Ptr{StdMap{K,T}}, "std::map<$CK, $CT> *", RefStdMap{K,T}, expr -> :(RefStdMap{$K,$T}($expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", RefStdMap{K,T}, identity)],
                     "return new std::map<$CK, $CT>(*map);"))

    # GCStdMap

    eval(cxxfunction(FnName(:GCStdMap_sizeof, "std_map_$(NK)_$(NT)_sizeof", libSTL), FnResult(Csize_t, "std::size_t"),
                     [FnArg(:keytype, Nothing, "keytype", "void", Type{K}, identity; skip=true),
                      FnArg(:valuetype, Nothing, "valuetype", "void", Type{T}, identity; skip=true)],
                     "return sizeof(std::map<$CK, $CT>);"))
    push!(tests, () -> @assert GCStdMap_sizeof(K, T) <= GCStdMap_size)

    eval(cxxfunction(FnName(:GCStdMap_construct, "std_map_$(NK)_$(NT)_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdMap{K,T}}, "ptr", "void *", GCStdMap{K,T}, identity)], "new(ptr) std::map<$CK, $CT>;"))

    eval(cxxfunction(FnName(:GCStdMap_destruct, "std_map_$(NK)_$(NT)_destruct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdMap{K,T}}, "ptr", "std::map<$CK, $CT> * restrict", GCStdMap{K,T}, identity)],
                     "ptr->~map();"))

    eval(cxxfunction(FnName(:GCStdMap_copy_construct, "std_map_$(NK)_$(NT)_copy_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdMap{K,T}}, "ptr", "std::map<$CK, $CT> * restrict", GCStdMap{K,T}, identity),
                      FnArg(:vec, Ptr{StdMap{K,T}}, "vec", "const std::map<$CK, $CT> * restrict", GCStdMap{K,T}, identity)],
                     "new(ptr) std::map<$CK, $CT>(*vec);"))
    @eval Base.copy(vec::GCStdMap{$K,$T}) = GCStdMap{$K,$T}(Base.copy, vec)

    # SharedStdMap

    eval(cxxfunction(FnName(:SharedStdMap_sizeof, "std_shared_ptr_std_map_$(NK)_$(NT)_sizeof", libSTL),
                     FnResult(Csize_t, "std::size_t"),
                     [FnArg(:keytype, Nothing, "keytype", "void", Type{K}, identity; skip=true),
                      FnArg(:valuetype, Nothing, "valuetype", "void", Type{T}, identity; skip=true)],
                     "return sizeof(std::shared_ptr<std::map<$CK, $CT>>);"))
    push!(tests, () -> @assert SharedStdMap_sizeof(K, T) <= SharedStdMap_size)

    eval(cxxfunction(FnName(:SharedStdMap_construct, "std_shared_ptr_std_map_$(NK)_$(NT)_placement_new", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdMap{K,T}, expr -> :(pointer_from_objref($expr)))],
                     """
                     auto res = new(ptr) std::shared_ptr<std::map<$CK, $CT>>;
                     *res = std::make_shared<std::map<$CK, $CT>>();
                     """))

    eval(cxxfunction(FnName(:SharedStdMap_destruct, "std_shared_ptr_std_map_$(NK)_$(NT)_placement_delete", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::map<$CK, $CT>> * restrict", SharedStdMap{K,T},
                            expr -> :(pointer_from_objref($expr)))], "ptr->~shared_ptr();"))

    eval(cxxfunction(FnName(:SharedStdMap_copy_construct, "std_shared_ptr_std_map_$(NK)_$(NT)_placement_copy", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdMap{K,T}, expr -> :(pointer_from_objref($expr))),
                      FnArg(:vec, Ptr{StdMap{K,T}}, "vec", "const std::map<$CK, $CT> * restrict", SharedStdMap{K,T}, identity)],
                     """
                     auto res = new(ptr) std::shared_ptr<std::map<$CK, $CT>>;
                     *res = std::make_shared<std::map<$CK, $CT>>(*vec);
                     """))
    @eval Base.copy(vec::SharedStdMap{$K,$T}) = SharedStdMap{$K,$T}(Base.copy, vec)

    eval(cxxfunction(FnName(:SharedStdMap_get, "std_shared_ptr_std_map_$(NK)_$(NT)_get", libSTL),
                     FnResult(Ptr{StdMap}, "std::map<$CK, $CT> *"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::map<$CK, $CT>> * restrict", SharedStdMap{K,T},
                            expr -> :(pointer_from_objref($expr)))], "return ptr->get();"))

    # StdMap

    eval(cxxfunction(FnName(:(Base.length), "std_map_$(NK)_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return map->size();"))

    eval(cxxfunction(FnName(:(Base.haskey), "std_map_$(NK)_$(NT)_haskey", libSTL),
                     FnResult(Csize_t, "std::size_t", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "return map->count(*key);"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_getindex", libSTL),
                     FnResult(Ptr{T}, "$CT *", T, expr -> :(convert_result($T, $expr))),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "std::map<$CK, $CT> * restrict", StdMap{K,T}, identity),
                      FnArg(:key, Ptr{K}, "key", "$CK const *", Any, expr -> :(convert_arg(Ptr{$K}, convert($K, $expr))))],
                     "return &map->at(*key);"))

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
                     FnResult(StdMapIterator{K,T}, "std::map<$CK, $CT>::const_iterator"),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     """
                     using MI = std::map<$CK, $CT>::const_iterator;
                     static_assert(sizeof(MI) == sizeof(void *), "");
                     return map->cbegin();
                     """))

    eval(cxxfunction(FnName(:cend, "std_map_$(NK)_$(NT)_cend", libSTL),
                     FnResult(StdMapIterator{K,T}, "std::map<$CK, $CT>::const_iterator"),
                     [FnArg(:map, Ptr{StdMap{K,T}}, "map", "const std::map<$CK, $CT> * restrict", StdMap{K,T}, identity)],
                     "return map->cend();"))

    # Iterators

    eval(cxxfunction(FnName(:StdMap_offsetof_pair_first, "std_map_$(NK)_$(NT)_offsetof_pair_first", libSTL),
                     FnResult(Csize_t, "std::size_t"),
                     [FnArg(:keytype, Nothing, "keytype", "void", Type{K}, identity; skip=true),
                      FnArg(:valuetype, Nothing, "valuetype", "void", Type{T}, identity; skip=true)],
                     """
                     using P = std::pair<$CK const *, $CT const *>;
                     return offsetof(P, first);
                     """))
    eval(cxxfunction(FnName(:StdMap_offsetof_pair_second, "std_map_$(NK)_$(NT)_offsetof_pair_second", libSTL),
                     FnResult(Csize_t, "std::size_t"),
                     [FnArg(:keytype, Nothing, "keytype", "void", Type{K}, identity; skip=true),
                      FnArg(:valuetype, Nothing, "valuetype", "void", Type{T}, identity; skip=true)],
                     """
                     using P = std::pair<$CK const *, $CT const *>;
                     return offsetof(P, second);
                     """))
    push!(tests, () -> @assert StdMap_offsetof_pair_first(K, T) == fieldoffset(Pair{Ptr{K},Ptr{T}}, 1))
    push!(tests, () -> @assert StdMap_offsetof_pair_second(K, T) == fieldoffset(Pair{Ptr{K},Ptr{T}}, 2))
    eval(cxxfunction(FnName(:(Base.getindex), "std_map_$(NK)_$(NT)_const_iterator_getindex", libSTL),
                     FnResult(Pair{Ptr{K},Ptr{T}}, "const std::pair<$CK const *, $CT const *>", Pair{K,T},
                              expr -> :(convert_result($K, $expr[1]) => convert_result($T, $expr[2]))),
                     [FnArg(:iter, StdMapIterator{K,T}, "iter", "std::map<$CK, $CT>::const_iterator")],
                     "return std::pair<$CK const *, $CT const *>(&iter->first, &iter->second);"))

    eval(cxxfunction(FnName(:inc, "std_map_$(NK)_$(NT)_const_iterator_inc", libSTL),
                     FnResult(StdMapIterator{K,T}, "std::map<$CK, $CT>::const_iterator"),
                     [FnArg(:iter, StdMapIterator{K,T}, "iter", "std::map<$CK, $CT>::const_iterator")], "return ++iter;"))

    eval(cxxfunction(FnName(:dec, "std_map_$(NK)_$(NT)_const_iterator_dec", libSTL),
                     FnResult(StdMapIterator{K,T}, "std::map<$CK, $CT>::const_iterator"),
                     [FnArg(:iter, StdMapIterator{K,T}, "iter", "std::map<$CK, $CT>::const_iterator")], "return --iter;"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_map_$(NK)_$(NT)_const_iterator_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:iter1, StdMapIterator{K,T}, "iter1", "std::map<$CK, $CT>::const_iterator"),
                      FnArg(:iter2, StdMapIterator{K,T}, "iter2", "std::map<$CK, $CT>::const_iterator")], "return iter1 == iter2;"))

    return nothing
end

const StdMap_types = filter(T -> !(T <: Complex), value_types) ∪
                     Set([RefStdString, SharedStdString, RefStdVector{RefStdString}, RefStdVector{SharedStdString},
                          SharedStdVector{RefStdString}, SharedStdVector{SharedStdString}])
const StdMap_keys = filter(T -> T <: Union{Integer,StdString}, StdMap_types)
for K in sort!(collect(StdMap_keys); by=string), T in sort!(collect(StdMap_types); by=string)
    generate(StdMap{K,T})
end
# We need to delay running the tests until `generate` has finished, so
# that the world age has increased and the result of the `eval` calls
# is available
for test in tests
    test()
end

free(map::RefStdMap) = RefStdMap_delete(map)

################################################################################

Base.convert(::Type{Dict{K,T}}, map::StdMap{K,T}) where {K,T} = Dict{K,T}(k => v for (k, v) in map)
Base.convert(::Type{Dict}, map::StdMap{K,T}) where {K,T} = convert(Dict{K,T}, map)

Base.isempty(map::StdMap) = length(map) == 0

Base.keytype(::StdMap{K}) where {K} = K
Base.eltype(::StdMap{K,T}) where {K,T} = T

function Base.iterate(map::StdMap)
    iter = cbegin(map)
    iter == cend(map) && return nothing
    return iter[], iter
end
function Base.iterate(map::StdMap, iter::StdMapIterator)
    iter = inc(iter)
    iter == cend(map) && return nothing
    return iter[], iter
end

################################################################################

# GCStdMap{K,T}() where {K,T} = GCStdMap{K,T}(StdMap{K,T}())
# 
# GCStdMapIterator{K,T}() where {K,T} = GCStdMapIterator{K,T}(StdMapIterator{K,T}())
# 
# free(map::GCStdMap) = free(map.managed)
# free(iter::GCStdMapIterator) = free(iter.managed)
# 
# Base.length(map::GCStdMap) = length(map.managed)
# Base.isempty(map::GCStdMap) = isempty(map.managed)
# Base.haskey(map::GCStdMap, key) = haskey(map.managed, key)
# Base.getindex(map::GCStdMap, key) = getindex(map.managed, key)
# Base.setindex!(map::GCStdMap, elt, key) = setindex!(map.managed, elt, key)
# Base.delete!(map::GCStdMap, key) = delete!(map.managed, key)
# Base.size(map::GCStdMap) = size(map.managed)
# Base.keytype(::GCStdMap{K}) where {K} = keytype(StdMap{K})
# Base.eltype(::GCStdMap{K,T}) where {K,T} = eltype(StdMap{K,T})

################################################################################

# cbegin(map::GCStdMap{K,T}) where {K,T} = GCStdMapIterator{K,T}(cbegin(map.managed))
# cend(map::GCStdMap{K,T}) where {K,T} = GCStdMapIterator{K,T}(cend(map.managed))
# Base.:(==)(iter1::GCStdMapIterator{K,T}, iter2::GCStdMapIterator{K,T}) where {K,T} = iter1.managed == iter2.managed
# Base.getindex(iter::GCStdMapIterator) = getindex(iter.managed)
# inc!(iter::GCStdMapIterator) = inc!(iter.managed)
# dec!(iter::GCStdMapIterator) = dec!(iter.managed)
# is_cbegin(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = is_cbegin(iter.managed, map.managed)
# is_end(iter::GCStdMapIterator{K,T}, map::GCStdMap{K,T}) where {K,T} = is_end(iter.managed, map.managed)
# 
# function Base.iterate(map::StdMap{K,T}) where {K,T}
#     iter = GCStdMapIterator{K,T}(cbegin(map))
#     is_cend(iter.managed, map) && return nothing
#     return (iter[], iter)
# end
# function Base.iterate(map::StdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
#     inc!(iter)
#     is_cend(iter.managed, map) && return nothing
#     return (iter[], iter)
# end
# 
# function Base.iterate(map::GCStdMap{K,T}) where {K,T}
#     iter = cbegin(map)
#     is_cend(iter, map) && return nothing
#     return (iter[], iter)
# end
# function Base.iterate(map::GCStdMap{K,T}, iter::GCStdMapIterator{K,T}) where {K,T}
#     inc!(iter)
#     is_cend(iter, map) && return nothing
#     return (iter[], iter)
# end
