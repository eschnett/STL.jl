#include <ccomplex>
#include <cstdint>

#include <map>
#include <memory>
#include <string>
#include <utility>
#include <vector>

static_assert(sizeof(bool) == 1, "");


/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{Bool})
    res = ccall(("std_map_bool_bool_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Bool}}, ())
    return RefStdMap{Bool, Bool}(res)::STL.RefStdMap{Bool, Bool}
end
*/
extern "C" std::map<bool, bool> * std_map_bool_bool_new(
    
) {
    return new std::map<bool, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_bool_delete(
    std::map<bool, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Bool}}, (Ptr{STL.StdMap{Bool, Bool}},), map)
    return RefStdMap{Bool, Bool}(res)::STL.RefStdMap{Bool, Bool}
end
*/
extern "C" std::map<bool, bool> * std_map_bool_bool_copy(
    const std::map<bool, bool> * restrict map
) {
    return new std::map<bool, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_bool_construct(
    void * ptr
) {
    using M = std::map<bool, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_bool_destruct(
    std::map<bool, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, Bool}, vec::STL.GCStdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{STL.StdMap{Bool, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_bool_copy_construct(
    std::map<bool, bool> * restrict ptr,
    const std::map<bool, bool> * restrict vec
) {
    new(ptr) std::map<bool, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, Bool})
    res = ccall(("std_shared_ptr_std_map_bool_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, bool>>;
*res = std::make_shared<std::map<bool, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, Bool})
    res = ccall(("std_shared_ptr_std_map_bool_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_bool_placement_delete(
    std::shared_ptr<std::map<bool, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, Bool}, vec::STL.SharedStdMap{Bool, Bool})
    res = ccall(("std_shared_ptr_std_map_bool_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_bool_placement_copy(
    void * ptr,
    const std::map<bool, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, bool>>;
*res = std::make_shared<std::map<bool, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, Bool})
    res = ccall(("std_shared_ptr_std_map_bool_bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, bool> * std_shared_ptr_std_map_bool_bool_get(
    std::shared_ptr<std::map<bool, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_bool_length(
    const std::map<bool, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, Bool}, key::Any)
    res = ccall(("std_map_bool_bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_bool_haskey(
    const std::map<bool, bool> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, Bool}, key::Any)
    res = ccall(("std_map_bool_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_bool_bool_getindex(
    std::map<bool, bool> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_bool_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{Bool}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_bool_setindex_(
    std::map<bool, bool> * restrict map,
    bool const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, Bool}, key::Any)
    res = ccall(("std_map_bool_bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, Bool}
end
*/
extern "C" void std_map_bool_bool_delete_(
    std::map<bool, bool> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, Bool}, map2::STL.StdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, Bool}}, Ptr{STL.StdMap{Bool, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_bool_equals(
    const std::map<bool, bool> * restrict map1,
    const std::map<bool, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, Bool}, (Ptr{STL.StdMap{Bool, Bool}},), map)
    return res::STL.StdMapIterator{Bool, Bool}
end
*/
extern "C" std::map<bool, bool>::const_iterator std_map_bool_bool_cbegin(
    const std::map<bool, bool> * restrict map
) {
    using MI = std::map<bool, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, Bool})
    res = ccall(("std_map_bool_bool_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, Bool}, (Ptr{STL.StdMap{Bool, Bool}},), map)
    return res::STL.StdMapIterator{Bool, Bool}
end
*/
extern "C" std::map<bool, bool>::const_iterator std_map_bool_bool_cend(
    const std::map<bool, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, Bool})
    res = ccall(("std_map_bool_bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{Bool}}, (STL.StdMapIterator{Bool, Bool},), iter)
    return (convert_result(Bool, res[1]) => convert_result(Bool, res[2]))::Pair{Bool, Bool}
end
*/
extern "C" const std::pair<bool const *, bool const *> std_map_bool_bool_const_iterator_getindex(
    std::map<bool, bool>::const_iterator iter
) {
    using P = std::pair<bool const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, Bool})
    res = ccall(("std_map_bool_bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, Bool}, (STL.StdMapIterator{Bool, Bool},), iter)
    return res::STL.StdMapIterator{Bool, Bool}
end
*/
extern "C" std::map<bool, bool>::const_iterator std_map_bool_bool_const_iterator_inc(
    std::map<bool, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, Bool})
    res = ccall(("std_map_bool_bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, Bool}, (STL.StdMapIterator{Bool, Bool},), iter)
    return res::STL.StdMapIterator{Bool, Bool}
end
*/
extern "C" std::map<bool, bool>::const_iterator std_map_bool_bool_const_iterator_dec(
    std::map<bool, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, Bool}, iter2::STL.StdMapIterator{Bool, Bool})
    res = ccall(("std_map_bool_bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, Bool}, STL.StdMapIterator{Bool, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_bool_const_iterator_equals(
    std::map<bool, bool>::const_iterator iter1,
    std::map<bool, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{Float64})
    res = ccall(("std_map_bool_double_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Float64}}, ())
    return RefStdMap{Bool, Float64}(res)::STL.RefStdMap{Bool, Float64}
end
*/
extern "C" std::map<bool, double> * std_map_bool_double_new(
    
) {
    return new std::map<bool, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_double_delete(
    std::map<bool, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Float64}}, (Ptr{STL.StdMap{Bool, Float64}},), map)
    return RefStdMap{Bool, Float64}(res)::STL.RefStdMap{Bool, Float64}
end
*/
extern "C" std::map<bool, double> * std_map_bool_double_copy(
    const std::map<bool, double> * restrict map
) {
    return new std::map<bool, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_double_construct(
    void * ptr
) {
    using M = std::map<bool, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_double_destruct(
    std::map<bool, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, Float64}, vec::STL.GCStdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{STL.StdMap{Bool, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_double_copy_construct(
    std::map<bool, double> * restrict ptr,
    const std::map<bool, double> * restrict vec
) {
    new(ptr) std::map<bool, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, Float64})
    res = ccall(("std_shared_ptr_std_map_bool_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, double>>;
*res = std::make_shared<std::map<bool, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, Float64})
    res = ccall(("std_shared_ptr_std_map_bool_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_double_placement_delete(
    std::shared_ptr<std::map<bool, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, Float64}, vec::STL.SharedStdMap{Bool, Float64})
    res = ccall(("std_shared_ptr_std_map_bool_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_double_placement_copy(
    void * ptr,
    const std::map<bool, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, double>>;
*res = std::make_shared<std::map<bool, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, Float64})
    res = ccall(("std_shared_ptr_std_map_bool_double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, double> * std_shared_ptr_std_map_bool_double_get(
    std::shared_ptr<std::map<bool, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_double_length(
    const std::map<bool, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, Float64}, key::Any)
    res = ccall(("std_map_bool_double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_double_haskey(
    const std::map<bool, double> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, Float64}, key::Any)
    res = ccall(("std_map_bool_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_bool_double_getindex(
    std::map<bool, double> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_bool_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{Float64}, Ptr{Bool}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_double_setindex_(
    std::map<bool, double> * restrict map,
    double const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, Float64}, key::Any)
    res = ccall(("std_map_bool_double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, Float64}
end
*/
extern "C" void std_map_bool_double_delete_(
    std::map<bool, double> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, Float64}, map2::STL.StdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, Float64}}, Ptr{STL.StdMap{Bool, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_double_equals(
    const std::map<bool, double> * restrict map1,
    const std::map<bool, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, Float64}, (Ptr{STL.StdMap{Bool, Float64}},), map)
    return res::STL.StdMapIterator{Bool, Float64}
end
*/
extern "C" std::map<bool, double>::const_iterator std_map_bool_double_cbegin(
    const std::map<bool, double> * restrict map
) {
    using MI = std::map<bool, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, Float64})
    res = ccall(("std_map_bool_double_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, Float64}, (Ptr{STL.StdMap{Bool, Float64}},), map)
    return res::STL.StdMapIterator{Bool, Float64}
end
*/
extern "C" std::map<bool, double>::const_iterator std_map_bool_double_cend(
    const std::map<bool, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, Float64})
    res = ccall(("std_map_bool_double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{Float64}}, (STL.StdMapIterator{Bool, Float64},), iter)
    return (convert_result(Bool, res[1]) => convert_result(Float64, res[2]))::Pair{Bool, Float64}
end
*/
extern "C" const std::pair<bool const *, double const *> std_map_bool_double_const_iterator_getindex(
    std::map<bool, double>::const_iterator iter
) {
    using P = std::pair<bool const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, Float64})
    res = ccall(("std_map_bool_double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, Float64}, (STL.StdMapIterator{Bool, Float64},), iter)
    return res::STL.StdMapIterator{Bool, Float64}
end
*/
extern "C" std::map<bool, double>::const_iterator std_map_bool_double_const_iterator_inc(
    std::map<bool, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, Float64})
    res = ccall(("std_map_bool_double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, Float64}, (STL.StdMapIterator{Bool, Float64},), iter)
    return res::STL.StdMapIterator{Bool, Float64}
end
*/
extern "C" std::map<bool, double>::const_iterator std_map_bool_double_const_iterator_dec(
    std::map<bool, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, Float64}, iter2::STL.StdMapIterator{Bool, Float64})
    res = ccall(("std_map_bool_double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, Float64}, STL.StdMapIterator{Bool, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_double_const_iterator_equals(
    std::map<bool, double>::const_iterator iter1,
    std::map<bool, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{Int64})
    res = ccall(("std_map_bool_int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Int64}}, ())
    return RefStdMap{Bool, Int64}(res)::STL.RefStdMap{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t> * std_map_bool_int64_t_new(
    
) {
    return new std::map<bool, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int64_t_delete(
    std::map<bool, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Int64}}, (Ptr{STL.StdMap{Bool, Int64}},), map)
    return RefStdMap{Bool, Int64}(res)::STL.RefStdMap{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t> * std_map_bool_int64_t_copy(
    const std::map<bool, int64_t> * restrict map
) {
    return new std::map<bool, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int64_t_construct(
    void * ptr
) {
    using M = std::map<bool, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int64_t_destruct(
    std::map<bool, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, Int64}, vec::STL.GCStdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{STL.StdMap{Bool, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int64_t_copy_construct(
    std::map<bool, int64_t> * restrict ptr,
    const std::map<bool, int64_t> * restrict vec
) {
    new(ptr) std::map<bool, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, Int64})
    res = ccall(("std_shared_ptr_std_map_bool_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, int64_t>>;
*res = std::make_shared<std::map<bool, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, Int64})
    res = ccall(("std_shared_ptr_std_map_bool_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int64_t_placement_delete(
    std::shared_ptr<std::map<bool, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, Int64}, vec::STL.SharedStdMap{Bool, Int64})
    res = ccall(("std_shared_ptr_std_map_bool_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int64_t_placement_copy(
    void * ptr,
    const std::map<bool, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, int64_t>>;
*res = std::make_shared<std::map<bool, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, Int64})
    res = ccall(("std_shared_ptr_std_map_bool_int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, int64_t> * std_shared_ptr_std_map_bool_int64_t_get(
    std::shared_ptr<std::map<bool, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_int64_t_length(
    const std::map<bool, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, Int64}, key::Any)
    res = ccall(("std_map_bool_int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_int64_t_haskey(
    const std::map<bool, int64_t> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, Int64}, key::Any)
    res = ccall(("std_map_bool_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_bool_int64_t_getindex(
    std::map<bool, int64_t> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_bool_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{Int64}, Ptr{Bool}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_int64_t_setindex_(
    std::map<bool, int64_t> * restrict map,
    int64_t const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, Int64}, key::Any)
    res = ccall(("std_map_bool_int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, Int64}
end
*/
extern "C" void std_map_bool_int64_t_delete_(
    std::map<bool, int64_t> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, Int64}, map2::STL.StdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, Int64}}, Ptr{STL.StdMap{Bool, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_int64_t_equals(
    const std::map<bool, int64_t> * restrict map1,
    const std::map<bool, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, Int64}, (Ptr{STL.StdMap{Bool, Int64}},), map)
    return res::STL.StdMapIterator{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t>::const_iterator std_map_bool_int64_t_cbegin(
    const std::map<bool, int64_t> * restrict map
) {
    using MI = std::map<bool, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, Int64}, (Ptr{STL.StdMap{Bool, Int64}},), map)
    return res::STL.StdMapIterator{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t>::const_iterator std_map_bool_int64_t_cend(
    const std::map<bool, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{Int64}}, (STL.StdMapIterator{Bool, Int64},), iter)
    return (convert_result(Bool, res[1]) => convert_result(Int64, res[2]))::Pair{Bool, Int64}
end
*/
extern "C" const std::pair<bool const *, int64_t const *> std_map_bool_int64_t_const_iterator_getindex(
    std::map<bool, int64_t>::const_iterator iter
) {
    using P = std::pair<bool const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, Int64}, (STL.StdMapIterator{Bool, Int64},), iter)
    return res::STL.StdMapIterator{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t>::const_iterator std_map_bool_int64_t_const_iterator_inc(
    std::map<bool, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, Int64}, (STL.StdMapIterator{Bool, Int64},), iter)
    return res::STL.StdMapIterator{Bool, Int64}
end
*/
extern "C" std::map<bool, int64_t>::const_iterator std_map_bool_int64_t_const_iterator_dec(
    std::map<bool, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, Int64}, iter2::STL.StdMapIterator{Bool, Int64})
    res = ccall(("std_map_bool_int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, Int64}, STL.StdMapIterator{Bool, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_int64_t_const_iterator_equals(
    std::map<bool, int64_t>::const_iterator iter1,
    std::map<bool, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{Int8})
    res = ccall(("std_map_bool_int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Int8}}, ())
    return RefStdMap{Bool, Int8}(res)::STL.RefStdMap{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t> * std_map_bool_int8_t_new(
    
) {
    return new std::map<bool, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int8_t_delete(
    std::map<bool, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Int8}}, (Ptr{STL.StdMap{Bool, Int8}},), map)
    return RefStdMap{Bool, Int8}(res)::STL.RefStdMap{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t> * std_map_bool_int8_t_copy(
    const std::map<bool, int8_t> * restrict map
) {
    return new std::map<bool, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int8_t_construct(
    void * ptr
) {
    using M = std::map<bool, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int8_t_destruct(
    std::map<bool, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, Int8}, vec::STL.GCStdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{STL.StdMap{Bool, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_int8_t_copy_construct(
    std::map<bool, int8_t> * restrict ptr,
    const std::map<bool, int8_t> * restrict vec
) {
    new(ptr) std::map<bool, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, Int8})
    res = ccall(("std_shared_ptr_std_map_bool_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, int8_t>>;
*res = std::make_shared<std::map<bool, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, Int8})
    res = ccall(("std_shared_ptr_std_map_bool_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int8_t_placement_delete(
    std::shared_ptr<std::map<bool, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, Int8}, vec::STL.SharedStdMap{Bool, Int8})
    res = ccall(("std_shared_ptr_std_map_bool_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_int8_t_placement_copy(
    void * ptr,
    const std::map<bool, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, int8_t>>;
*res = std::make_shared<std::map<bool, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, Int8})
    res = ccall(("std_shared_ptr_std_map_bool_int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, int8_t> * std_shared_ptr_std_map_bool_int8_t_get(
    std::shared_ptr<std::map<bool, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_int8_t_length(
    const std::map<bool, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, Int8}, key::Any)
    res = ccall(("std_map_bool_int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_int8_t_haskey(
    const std::map<bool, int8_t> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, Int8}, key::Any)
    res = ccall(("std_map_bool_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_bool_int8_t_getindex(
    std::map<bool, int8_t> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_bool_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{Int8}, Ptr{Bool}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_int8_t_setindex_(
    std::map<bool, int8_t> * restrict map,
    int8_t const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, Int8}, key::Any)
    res = ccall(("std_map_bool_int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, Int8}
end
*/
extern "C" void std_map_bool_int8_t_delete_(
    std::map<bool, int8_t> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, Int8}, map2::STL.StdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, Int8}}, Ptr{STL.StdMap{Bool, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_int8_t_equals(
    const std::map<bool, int8_t> * restrict map1,
    const std::map<bool, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, Int8}, (Ptr{STL.StdMap{Bool, Int8}},), map)
    return res::STL.StdMapIterator{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t>::const_iterator std_map_bool_int8_t_cbegin(
    const std::map<bool, int8_t> * restrict map
) {
    using MI = std::map<bool, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, Int8}, (Ptr{STL.StdMap{Bool, Int8}},), map)
    return res::STL.StdMapIterator{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t>::const_iterator std_map_bool_int8_t_cend(
    const std::map<bool, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{Int8}}, (STL.StdMapIterator{Bool, Int8},), iter)
    return (convert_result(Bool, res[1]) => convert_result(Int8, res[2]))::Pair{Bool, Int8}
end
*/
extern "C" const std::pair<bool const *, int8_t const *> std_map_bool_int8_t_const_iterator_getindex(
    std::map<bool, int8_t>::const_iterator iter
) {
    using P = std::pair<bool const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, Int8}, (STL.StdMapIterator{Bool, Int8},), iter)
    return res::STL.StdMapIterator{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t>::const_iterator std_map_bool_int8_t_const_iterator_inc(
    std::map<bool, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, Int8}, (STL.StdMapIterator{Bool, Int8},), iter)
    return res::STL.StdMapIterator{Bool, Int8}
end
*/
extern "C" std::map<bool, int8_t>::const_iterator std_map_bool_int8_t_const_iterator_dec(
    std::map<bool, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, Int8}, iter2::STL.StdMapIterator{Bool, Int8})
    res = ccall(("std_map_bool_int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, Int8}, STL.StdMapIterator{Bool, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_int8_t_const_iterator_equals(
    std::map<bool, int8_t>::const_iterator iter1,
    std::map<bool, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_bool_void___new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, ())
    return RefStdMap{Bool, Ptr{Nothing}}(res)::STL.RefStdMap{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *> * std_map_bool_void___new(
    
) {
    return new std::map<bool, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_void___delete(
    std::map<bool, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), map)
    return RefStdMap{Bool, Ptr{Nothing}}(res)::STL.RefStdMap{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *> * std_map_bool_void___copy(
    const std::map<bool, void *> * restrict map
) {
    return new std::map<bool, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_void___construct(
    void * ptr
) {
    using M = std::map<bool, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_void___destruct(
    std::map<bool, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, Ptr{Nothing}}, vec::STL.GCStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{STL.StdMap{Bool, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_void___copy_construct(
    std::map<bool, void *> * restrict ptr,
    const std::map<bool, void *> * restrict vec
) {
    new(ptr) std::map<bool, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_bool_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, void *>>;
*res = std::make_shared<std::map<bool, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_bool_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_void___placement_delete(
    std::shared_ptr<std::map<bool, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, Ptr{Nothing}}, vec::STL.SharedStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_bool_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_void___placement_copy(
    void * ptr,
    const std::map<bool, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, void *>>;
*res = std::make_shared<std::map<bool, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_bool_void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, void *> * std_shared_ptr_std_map_bool_void___get(
    std::shared_ptr<std::map<bool, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_void___length(
    const std::map<bool, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_bool_void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_void___haskey(
    const std::map<bool, void *> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_bool_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_bool_void___getindex(
    std::map<bool, void *> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_bool_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{Bool}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_void___setindex_(
    std::map<bool, void *> * restrict map,
    void * const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_bool_void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, Ptr{Nothing}}
end
*/
extern "C" void std_map_bool_void___delete_(
    std::map<bool, void *> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, Ptr{Nothing}}, map2::STL.StdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}}, Ptr{STL.StdMap{Bool, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_void___equals(
    const std::map<bool, void *> * restrict map1,
    const std::map<bool, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, Ptr{Nothing}}, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *>::const_iterator std_map_bool_void___cbegin(
    const std::map<bool, void *> * restrict map
) {
    using MI = std::map<bool, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___cend", "libSTL.dylib"), STL.StdMapIterator{Bool, Ptr{Nothing}}, (Ptr{STL.StdMap{Bool, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *>::const_iterator std_map_bool_void___cend(
    const std::map<bool, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{Bool, Ptr{Nothing}},), iter)
    return (convert_result(Bool, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{Bool, Ptr{Nothing}}
end
*/
extern "C" const std::pair<bool const *, void * const *> std_map_bool_void___const_iterator_getindex(
    std::map<bool, void *>::const_iterator iter
) {
    using P = std::pair<bool const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, Ptr{Nothing}}, (STL.StdMapIterator{Bool, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *>::const_iterator std_map_bool_void___const_iterator_inc(
    std::map<bool, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, Ptr{Nothing}}, (STL.StdMapIterator{Bool, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Bool, Ptr{Nothing}}
end
*/
extern "C" std::map<bool, void *>::const_iterator std_map_bool_void___const_iterator_dec(
    std::map<bool, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, Ptr{Nothing}}, iter2::STL.StdMapIterator{Bool, Ptr{Nothing}})
    res = ccall(("std_map_bool_void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, Ptr{Nothing}}, STL.StdMapIterator{Bool, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_void___const_iterator_equals(
    std::map<bool, void *>::const_iterator iter1,
    std::map<bool, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_bool_std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdString}}, ())
    return RefStdMap{Bool, STL.RefStdString}(res)::STL.RefStdMap{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string> * std_map_bool_std__string_new(
    
) {
    return new std::map<bool, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__string_delete(
    std::map<bool, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), map)
    return RefStdMap{Bool, STL.RefStdString}(res)::STL.RefStdMap{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string> * std_map_bool_std__string_copy(
    const std::map<bool, std::string> * restrict map
) {
    return new std::map<bool, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__string_construct(
    void * ptr
) {
    using M = std::map<bool, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__string_destruct(
    std::map<bool, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.RefStdString}, vec::STL.GCStdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{STL.StdMap{Bool, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__string_copy_construct(
    std::map<bool, std::string> * restrict ptr,
    const std::map<bool, std::string> * restrict vec
) {
    new(ptr) std::map<bool, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::string>>;
*res = std::make_shared<std::map<bool, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__string_placement_delete(
    std::shared_ptr<std::map<bool, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdString}, vec::STL.SharedStdMap{Bool, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__string_placement_copy(
    void * ptr,
    const std::map<bool, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::string>>;
*res = std::make_shared<std::map<bool, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::string> * std_shared_ptr_std_map_bool_std__string_get(
    std::shared_ptr<std::map<bool, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__string_length(
    const std::map<bool, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.RefStdString}, key::Any)
    res = ccall(("std_map_bool_std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__string_haskey(
    const std::map<bool, std::string> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.RefStdString}, key::Any)
    res = ccall(("std_map_bool_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_bool_std__string_getindex(
    std::map<bool, std::string> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{Bool}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__string_setindex_(
    std::map<bool, std::string> * restrict map,
    std::string const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.RefStdString}, key::Any)
    res = ccall(("std_map_bool_std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.RefStdString}
end
*/
extern "C" void std_map_bool_std__string_delete_(
    std::map<bool, std::string> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.RefStdString}, map2::STL.StdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.RefStdString}}, Ptr{STL.StdMap{Bool, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__string_equals(
    const std::map<bool, std::string> * restrict map1,
    const std::map<bool, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdString}, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string>::const_iterator std_map_bool_std__string_cbegin(
    const std::map<bool, std::string> * restrict map
) {
    using MI = std::map<bool, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdString}, (Ptr{STL.StdMap{Bool, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string>::const_iterator std_map_bool_std__string_cend(
    const std::map<bool, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{Bool, STL.RefStdString},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{Bool, STL.RefStdString}
end
*/
extern "C" const std::pair<bool const *, std::string const *> std_map_bool_std__string_const_iterator_getindex(
    std::map<bool, std::string>::const_iterator iter
) {
    using P = std::pair<bool const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdString}, (STL.StdMapIterator{Bool, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string>::const_iterator std_map_bool_std__string_const_iterator_inc(
    std::map<bool, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdString}, (STL.StdMapIterator{Bool, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdString}
end
*/
extern "C" std::map<bool, std::string>::const_iterator std_map_bool_std__string_const_iterator_dec(
    std::map<bool, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.RefStdString}, iter2::STL.StdMapIterator{Bool, STL.RefStdString})
    res = ccall(("std_map_bool_std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.RefStdString}, STL.StdMapIterator{Bool, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__string_const_iterator_equals(
    std::map<bool, std::string>::const_iterator iter1,
    std::map<bool, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>> * std_map_bool_std__vector_std__string__new(
    
) {
    return new std::map<bool, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__string__delete(
    std::map<bool, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>> * std_map_bool_std__vector_std__string__copy(
    const std::map<bool, std::vector<std::string>> * restrict map
) {
    return new std::map<bool, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<bool, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__string__destruct(
    std::map<bool, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__string__copy_construct(
    std::map<bool, std::vector<std::string>> * restrict ptr,
    const std::map<bool, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<bool, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::vector<std::string>>>;
*res = std::make_shared<std::map<bool, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<bool, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<bool, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::vector<std::string>>>;
*res = std::make_shared<std::map<bool, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::vector<std::string>> * std_shared_ptr_std_map_bool_std__vector_std__string__get(
    std::shared_ptr<std::map<bool, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__vector_std__string__length(
    const std::map<bool, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__vector_std__string__haskey(
    const std::map<bool, std::vector<std::string>> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_bool_std__vector_std__string__getindex(
    std::map<bool, std::vector<std::string>> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{Bool}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__string__setindex_(
    std::map<bool, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_bool_std__vector_std__string__delete_(
    std::map<bool, std::vector<std::string>> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__vector_std__string__equals(
    const std::map<bool, std::vector<std::string>> * restrict map1,
    const std::map<bool, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>>::const_iterator std_map_bool_std__vector_std__string__cbegin(
    const std::map<bool, std::vector<std::string>> * restrict map
) {
    using MI = std::map<bool, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>>::const_iterator std_map_bool_std__vector_std__string__cend(
    const std::map<bool, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<bool const *, std::vector<std::string> const *> std_map_bool_std__vector_std__string__const_iterator_getindex(
    std::map<bool, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<bool const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>>::const_iterator std_map_bool_std__vector_std__string__const_iterator_inc(
    std::map<bool, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::string>>::const_iterator std_map_bool_std__vector_std__string__const_iterator_dec(
    std::map<bool, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{Bool, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__vector_std__string__const_iterator_equals(
    std::map<bool, std::vector<std::string>>::const_iterator iter1,
    std::map<bool, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>> * std_map_bool_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<bool, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___delete(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>> * std_map_bool_std__vector_std__shared_ptr_std__string___copy(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<bool, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<bool, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___destruct(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<bool, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<bool, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<bool, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<bool, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_bool_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<bool, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__vector_std__shared_ptr_std__string___length(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__vector_std__shared_ptr_std__string___haskey(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_bool_std__vector_std__shared_ptr_std__string___getindex(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{Bool}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___setindex_(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_bool_std__vector_std__shared_ptr_std__string___delete_(
    std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__vector_std__shared_ptr_std__string___equals(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_bool_std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_bool_std__vector_std__shared_ptr_std__string___cend(
    const std::map<bool, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<bool const *, std::vector<std::shared_ptr<std::string>> const *> std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<bool const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{Bool, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<bool, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdString}}, ())
    return RefStdMap{Bool, STL.SharedStdString}(res)::STL.RefStdMap{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>> * std_map_bool_std__shared_ptr_std__string__new(
    
) {
    return new std::map<bool, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__delete(
    std::map<bool, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), map)
    return RefStdMap{Bool, STL.SharedStdString}(res)::STL.RefStdMap{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>> * std_map_bool_std__shared_ptr_std__string__copy(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<bool, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<bool, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__destruct(
    std::map<bool, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdString}, vec::STL.GCStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{STL.StdMap{Bool, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__copy_construct(
    std::map<bool, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<bool, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<bool, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdString}, vec::STL.SharedStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<bool, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>> * std_shared_ptr_std_map_bool_std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__string__length(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__string__haskey(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_bool_std__shared_ptr_std__string__getindex(
    std::map<bool, std::shared_ptr<std::string>> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{Bool}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__setindex_(
    std::map<bool, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.SharedStdString}
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__string__delete_(
    std::map<bool, std::shared_ptr<std::string>> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.SharedStdString}, map2::STL.StdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.SharedStdString}}, Ptr{STL.StdMap{Bool, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__string__equals(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map1,
    const std::map<bool, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdString}, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>>::const_iterator std_map_bool_std__shared_ptr_std__string__cbegin(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<bool, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdString}, (Ptr{STL.StdMap{Bool, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>>::const_iterator std_map_bool_std__shared_ptr_std__string__cend(
    const std::map<bool, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{Bool, STL.SharedStdString},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{Bool, STL.SharedStdString}
end
*/
extern "C" const std::pair<bool const *, std::shared_ptr<std::string> const *> std_map_bool_std__shared_ptr_std__string__const_iterator_getindex(
    std::map<bool, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<bool const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdString}, (STL.StdMapIterator{Bool, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>>::const_iterator std_map_bool_std__shared_ptr_std__string__const_iterator_inc(
    std::map<bool, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdString}, (STL.StdMapIterator{Bool, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdString}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::string>>::const_iterator std_map_bool_std__shared_ptr_std__string__const_iterator_dec(
    std::map<bool, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.SharedStdString}, iter2::STL.StdMapIterator{Bool, STL.SharedStdString})
    res = ccall(("std_map_bool_std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.SharedStdString}, STL.StdMapIterator{Bool, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__string__const_iterator_equals(
    std::map<bool, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<bool, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>> * std_map_bool_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<bool, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___delete(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>> * std_map_bool_std__shared_ptr_std__vector_std__string___copy(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<bool, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<bool, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___destruct(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<bool, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__vector_std__string___length(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__vector_std__string___haskey(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_bool_std__shared_ptr_std__vector_std__string___getindex(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{Bool}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___setindex_(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__string___delete_(
    std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__vector_std__string___equals(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__string___cend(
    const std::map<bool, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<bool const *, std::shared_ptr<std::vector<std::string>> const *> std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<bool const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{Bool, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<bool, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{Bool}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Bool, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Bool, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<bool const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<bool const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{Bool, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<bool, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Bool}, valuetype::Type{UInt64})
    res = ccall(("std_map_bool_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Bool, UInt64}}, ())
    return RefStdMap{Bool, UInt64}(res)::STL.RefStdMap{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t> * std_map_bool_uint64_t_new(
    
) {
    return new std::map<bool, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_bool_uint64_t_delete(
    std::map<bool, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Bool, UInt64}}, (Ptr{STL.StdMap{Bool, UInt64}},), map)
    return RefStdMap{Bool, UInt64}(res)::STL.RefStdMap{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t> * std_map_bool_uint64_t_copy(
    const std::map<bool, uint64_t> * restrict map
) {
    return new std::map<bool, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_uint64_t_construct(
    void * ptr
) {
    using M = std::map<bool, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<bool, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_bool_uint64_t_destruct(
    std::map<bool, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Bool, UInt64}, vec::STL.GCStdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{STL.StdMap{Bool, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_bool_uint64_t_copy_construct(
    std::map<bool, uint64_t> * restrict ptr,
    const std::map<bool, uint64_t> * restrict vec
) {
    new(ptr) std::map<bool, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Bool, UInt64})
    res = ccall(("std_shared_ptr_std_map_bool_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<bool, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<bool, uint64_t>>;
*res = std::make_shared<std::map<bool, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Bool, UInt64})
    res = ccall(("std_shared_ptr_std_map_bool_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_uint64_t_placement_delete(
    std::shared_ptr<std::map<bool, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Bool, UInt64}, vec::STL.SharedStdMap{Bool, UInt64})
    res = ccall(("std_shared_ptr_std_map_bool_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Bool, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_bool_uint64_t_placement_copy(
    void * ptr,
    const std::map<bool, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<bool, uint64_t>>;
*res = std::make_shared<std::map<bool, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Bool, UInt64})
    res = ccall(("std_shared_ptr_std_map_bool_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<bool, uint64_t> * std_shared_ptr_std_map_bool_uint64_t_get(
    std::shared_ptr<std::map<bool, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_bool_uint64_t_length(
    const std::map<bool, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Bool, UInt64}, key::Any)
    res = ccall(("std_map_bool_uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_bool_uint64_t_haskey(
    const std::map<bool, uint64_t> * restrict map,
    bool const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Bool, UInt64}, key::Any)
    res = ccall(("std_map_bool_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_bool_uint64_t_getindex(
    std::map<bool, uint64_t> * restrict map,
    bool const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Bool, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_bool_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{UInt64}, Ptr{Bool}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{Bool}, convert(Bool, key)))
    return res::Nothing
end
*/
extern "C" void std_map_bool_uint64_t_setindex_(
    std::map<bool, uint64_t> * restrict map,
    uint64_t const * elt,
    bool const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Bool, UInt64}, key::Any)
    res = ccall(("std_map_bool_uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{Bool}), map, convert_arg(Ptr{Bool}, convert(Bool, key)))
    return map::STL.StdMap{Bool, UInt64}
end
*/
extern "C" void std_map_bool_uint64_t_delete_(
    std::map<bool, uint64_t> * restrict map,
    bool const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Bool, UInt64}, map2::STL.StdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Bool, UInt64}}, Ptr{STL.StdMap{Bool, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_uint64_t_equals(
    const std::map<bool, uint64_t> * restrict map1,
    const std::map<bool, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Bool, UInt64}, (Ptr{STL.StdMap{Bool, UInt64}},), map)
    return res::STL.StdMapIterator{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t>::const_iterator std_map_bool_uint64_t_cbegin(
    const std::map<bool, uint64_t> * restrict map
) {
    using MI = std::map<bool, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Bool, UInt64}, (Ptr{STL.StdMap{Bool, UInt64}},), map)
    return res::STL.StdMapIterator{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t>::const_iterator std_map_bool_uint64_t_cend(
    const std::map<bool, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Bool}, Ptr{UInt64}}, (STL.StdMapIterator{Bool, UInt64},), iter)
    return (convert_result(Bool, res[1]) => convert_result(UInt64, res[2]))::Pair{Bool, UInt64}
end
*/
extern "C" const std::pair<bool const *, uint64_t const *> std_map_bool_uint64_t_const_iterator_getindex(
    std::map<bool, uint64_t>::const_iterator iter
) {
    using P = std::pair<bool const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<bool const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Bool, UInt64}, (STL.StdMapIterator{Bool, UInt64},), iter)
    return res::STL.StdMapIterator{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t>::const_iterator std_map_bool_uint64_t_const_iterator_inc(
    std::map<bool, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Bool, UInt64}, (STL.StdMapIterator{Bool, UInt64},), iter)
    return res::STL.StdMapIterator{Bool, UInt64}
end
*/
extern "C" std::map<bool, uint64_t>::const_iterator std_map_bool_uint64_t_const_iterator_dec(
    std::map<bool, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Bool, UInt64}, iter2::STL.StdMapIterator{Bool, UInt64})
    res = ccall(("std_map_bool_uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Bool, UInt64}, STL.StdMapIterator{Bool, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_bool_uint64_t_const_iterator_equals(
    std::map<bool, uint64_t>::const_iterator iter1,
    std::map<bool, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{Bool})
    res = ccall(("std_map_int64_t_bool_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Bool}}, ())
    return RefStdMap{Int64, Bool}(res)::STL.RefStdMap{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool> * std_map_int64_t_bool_new(
    
) {
    return new std::map<int64_t, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_bool_delete(
    std::map<int64_t, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Bool}}, (Ptr{STL.StdMap{Int64, Bool}},), map)
    return RefStdMap{Int64, Bool}(res)::STL.RefStdMap{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool> * std_map_int64_t_bool_copy(
    const std::map<int64_t, bool> * restrict map
) {
    return new std::map<int64_t, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_bool_construct(
    void * ptr
) {
    using M = std::map<int64_t, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_bool_destruct(
    std::map<int64_t, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, Bool}, vec::STL.GCStdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{STL.StdMap{Int64, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_bool_copy_construct(
    std::map<int64_t, bool> * restrict ptr,
    const std::map<int64_t, bool> * restrict vec
) {
    new(ptr) std::map<int64_t, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, Bool})
    res = ccall(("std_shared_ptr_std_map_int64_t_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, bool>>;
*res = std::make_shared<std::map<int64_t, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, Bool})
    res = ccall(("std_shared_ptr_std_map_int64_t_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_bool_placement_delete(
    std::shared_ptr<std::map<int64_t, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, Bool}, vec::STL.SharedStdMap{Int64, Bool})
    res = ccall(("std_shared_ptr_std_map_int64_t_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_bool_placement_copy(
    void * ptr,
    const std::map<int64_t, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, bool>>;
*res = std::make_shared<std::map<int64_t, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, Bool})
    res = ccall(("std_shared_ptr_std_map_int64_t_bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, bool> * std_shared_ptr_std_map_int64_t_bool_get(
    std::shared_ptr<std::map<int64_t, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_bool_length(
    const std::map<int64_t, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, Bool}, key::Any)
    res = ccall(("std_map_int64_t_bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_bool_haskey(
    const std::map<int64_t, bool> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, Bool}, key::Any)
    res = ccall(("std_map_int64_t_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_int64_t_bool_getindex(
    std::map<int64_t, bool> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{Bool}, Ptr{Int64}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_bool_setindex_(
    std::map<int64_t, bool> * restrict map,
    bool const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, Bool}, key::Any)
    res = ccall(("std_map_int64_t_bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, Bool}
end
*/
extern "C" void std_map_int64_t_bool_delete_(
    std::map<int64_t, bool> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, Bool}, map2::STL.StdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, Bool}}, Ptr{STL.StdMap{Int64, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_bool_equals(
    const std::map<int64_t, bool> * restrict map1,
    const std::map<int64_t, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, Bool}, (Ptr{STL.StdMap{Int64, Bool}},), map)
    return res::STL.StdMapIterator{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool>::const_iterator std_map_int64_t_bool_cbegin(
    const std::map<int64_t, bool> * restrict map
) {
    using MI = std::map<int64_t, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, Bool}, (Ptr{STL.StdMap{Int64, Bool}},), map)
    return res::STL.StdMapIterator{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool>::const_iterator std_map_int64_t_bool_cend(
    const std::map<int64_t, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{Bool}}, (STL.StdMapIterator{Int64, Bool},), iter)
    return (convert_result(Int64, res[1]) => convert_result(Bool, res[2]))::Pair{Int64, Bool}
end
*/
extern "C" const std::pair<int64_t const *, bool const *> std_map_int64_t_bool_const_iterator_getindex(
    std::map<int64_t, bool>::const_iterator iter
) {
    using P = std::pair<int64_t const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, Bool}, (STL.StdMapIterator{Int64, Bool},), iter)
    return res::STL.StdMapIterator{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool>::const_iterator std_map_int64_t_bool_const_iterator_inc(
    std::map<int64_t, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, Bool}, (STL.StdMapIterator{Int64, Bool},), iter)
    return res::STL.StdMapIterator{Int64, Bool}
end
*/
extern "C" std::map<int64_t, bool>::const_iterator std_map_int64_t_bool_const_iterator_dec(
    std::map<int64_t, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, Bool}, iter2::STL.StdMapIterator{Int64, Bool})
    res = ccall(("std_map_int64_t_bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, Bool}, STL.StdMapIterator{Int64, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_bool_const_iterator_equals(
    std::map<int64_t, bool>::const_iterator iter1,
    std::map<int64_t, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{Float64})
    res = ccall(("std_map_int64_t_double_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Float64}}, ())
    return RefStdMap{Int64, Float64}(res)::STL.RefStdMap{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double> * std_map_int64_t_double_new(
    
) {
    return new std::map<int64_t, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_delete(
    std::map<int64_t, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Float64}}, (Ptr{STL.StdMap{Int64, Float64}},), map)
    return RefStdMap{Int64, Float64}(res)::STL.RefStdMap{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double> * std_map_int64_t_double_copy(
    const std::map<int64_t, double> * restrict map
) {
    return new std::map<int64_t, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_construct(
    void * ptr
) {
    using M = std::map<int64_t, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_destruct(
    std::map<int64_t, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, Float64}, vec::STL.GCStdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{STL.StdMap{Int64, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_copy_construct(
    std::map<int64_t, double> * restrict ptr,
    const std::map<int64_t, double> * restrict vec
) {
    new(ptr) std::map<int64_t, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, Float64})
    res = ccall(("std_shared_ptr_std_map_int64_t_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, double>>;
*res = std::make_shared<std::map<int64_t, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, Float64})
    res = ccall(("std_shared_ptr_std_map_int64_t_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_double_placement_delete(
    std::shared_ptr<std::map<int64_t, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, Float64}, vec::STL.SharedStdMap{Int64, Float64})
    res = ccall(("std_shared_ptr_std_map_int64_t_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_double_placement_copy(
    void * ptr,
    const std::map<int64_t, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, double>>;
*res = std::make_shared<std::map<int64_t, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, Float64})
    res = ccall(("std_shared_ptr_std_map_int64_t_double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, double> * std_shared_ptr_std_map_int64_t_double_get(
    std::shared_ptr<std::map<int64_t, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_double_length(
    const std::map<int64_t, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_double_haskey(
    const std::map<int64_t, double> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_int64_t_double_getindex(
    std::map<int64_t, double> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{Float64}, Ptr{Int64}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_setindex_(
    std::map<int64_t, double> * restrict map,
    double const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, Float64}
end
*/
extern "C" void std_map_int64_t_double_delete_(
    std::map<int64_t, double> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, Float64}, map2::STL.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, Float64}}, Ptr{STL.StdMap{Int64, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_double_equals(
    const std::map<int64_t, double> * restrict map1,
    const std::map<int64_t, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, Float64}, (Ptr{STL.StdMap{Int64, Float64}},), map)
    return res::STL.StdMapIterator{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double>::const_iterator std_map_int64_t_double_cbegin(
    const std::map<int64_t, double> * restrict map
) {
    using MI = std::map<int64_t, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, Float64}, (Ptr{STL.StdMap{Int64, Float64}},), map)
    return res::STL.StdMapIterator{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double>::const_iterator std_map_int64_t_double_cend(
    const std::map<int64_t, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{Float64}}, (STL.StdMapIterator{Int64, Float64},), iter)
    return (convert_result(Int64, res[1]) => convert_result(Float64, res[2]))::Pair{Int64, Float64}
end
*/
extern "C" const std::pair<int64_t const *, double const *> std_map_int64_t_double_const_iterator_getindex(
    std::map<int64_t, double>::const_iterator iter
) {
    using P = std::pair<int64_t const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, Float64}, (STL.StdMapIterator{Int64, Float64},), iter)
    return res::STL.StdMapIterator{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double>::const_iterator std_map_int64_t_double_const_iterator_inc(
    std::map<int64_t, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, Float64}, (STL.StdMapIterator{Int64, Float64},), iter)
    return res::STL.StdMapIterator{Int64, Float64}
end
*/
extern "C" std::map<int64_t, double>::const_iterator std_map_int64_t_double_const_iterator_dec(
    std::map<int64_t, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, Float64}, iter2::STL.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, Float64}, STL.StdMapIterator{Int64, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_double_const_iterator_equals(
    std::map<int64_t, double>::const_iterator iter1,
    std::map<int64_t, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{Int64})
    res = ccall(("std_map_int64_t_int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Int64}}, ())
    return RefStdMap{Int64, Int64}(res)::STL.RefStdMap{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t> * std_map_int64_t_int64_t_new(
    
) {
    return new std::map<int64_t, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_delete(
    std::map<int64_t, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Int64}}, (Ptr{STL.StdMap{Int64, Int64}},), map)
    return RefStdMap{Int64, Int64}(res)::STL.RefStdMap{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t> * std_map_int64_t_int64_t_copy(
    const std::map<int64_t, int64_t> * restrict map
) {
    return new std::map<int64_t, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_construct(
    void * ptr
) {
    using M = std::map<int64_t, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_destruct(
    std::map<int64_t, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, Int64}, vec::STL.GCStdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{STL.StdMap{Int64, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_copy_construct(
    std::map<int64_t, int64_t> * restrict ptr,
    const std::map<int64_t, int64_t> * restrict vec
) {
    new(ptr) std::map<int64_t, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, Int64})
    res = ccall(("std_shared_ptr_std_map_int64_t_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, int64_t>>;
*res = std::make_shared<std::map<int64_t, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, Int64})
    res = ccall(("std_shared_ptr_std_map_int64_t_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int64_t_placement_delete(
    std::shared_ptr<std::map<int64_t, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, Int64}, vec::STL.SharedStdMap{Int64, Int64})
    res = ccall(("std_shared_ptr_std_map_int64_t_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int64_t_placement_copy(
    void * ptr,
    const std::map<int64_t, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, int64_t>>;
*res = std::make_shared<std::map<int64_t, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, Int64})
    res = ccall(("std_shared_ptr_std_map_int64_t_int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, int64_t> * std_shared_ptr_std_map_int64_t_int64_t_get(
    std::shared_ptr<std::map<int64_t, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int64_t_length(
    const std::map<int64_t, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int64_t_haskey(
    const std::map<int64_t, int64_t> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_int64_t_int64_t_getindex(
    std::map<int64_t, int64_t> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{Int64}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_setindex_(
    std::map<int64_t, int64_t> * restrict map,
    int64_t const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, Int64}
end
*/
extern "C" void std_map_int64_t_int64_t_delete_(
    std::map<int64_t, int64_t> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, Int64}, map2::STL.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, Int64}}, Ptr{STL.StdMap{Int64, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_int64_t_equals(
    const std::map<int64_t, int64_t> * restrict map1,
    const std::map<int64_t, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, Int64}, (Ptr{STL.StdMap{Int64, Int64}},), map)
    return res::STL.StdMapIterator{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t>::const_iterator std_map_int64_t_int64_t_cbegin(
    const std::map<int64_t, int64_t> * restrict map
) {
    using MI = std::map<int64_t, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, Int64}, (Ptr{STL.StdMap{Int64, Int64}},), map)
    return res::STL.StdMapIterator{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t>::const_iterator std_map_int64_t_int64_t_cend(
    const std::map<int64_t, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{Int64}}, (STL.StdMapIterator{Int64, Int64},), iter)
    return (convert_result(Int64, res[1]) => convert_result(Int64, res[2]))::Pair{Int64, Int64}
end
*/
extern "C" const std::pair<int64_t const *, int64_t const *> std_map_int64_t_int64_t_const_iterator_getindex(
    std::map<int64_t, int64_t>::const_iterator iter
) {
    using P = std::pair<int64_t const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, Int64}, (STL.StdMapIterator{Int64, Int64},), iter)
    return res::STL.StdMapIterator{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t>::const_iterator std_map_int64_t_int64_t_const_iterator_inc(
    std::map<int64_t, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, Int64}, (STL.StdMapIterator{Int64, Int64},), iter)
    return res::STL.StdMapIterator{Int64, Int64}
end
*/
extern "C" std::map<int64_t, int64_t>::const_iterator std_map_int64_t_int64_t_const_iterator_dec(
    std::map<int64_t, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, Int64}, iter2::STL.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, Int64}, STL.StdMapIterator{Int64, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_int64_t_const_iterator_equals(
    std::map<int64_t, int64_t>::const_iterator iter1,
    std::map<int64_t, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{Int8})
    res = ccall(("std_map_int64_t_int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Int8}}, ())
    return RefStdMap{Int64, Int8}(res)::STL.RefStdMap{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t> * std_map_int64_t_int8_t_new(
    
) {
    return new std::map<int64_t, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_delete(
    std::map<int64_t, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Int8}}, (Ptr{STL.StdMap{Int64, Int8}},), map)
    return RefStdMap{Int64, Int8}(res)::STL.RefStdMap{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t> * std_map_int64_t_int8_t_copy(
    const std::map<int64_t, int8_t> * restrict map
) {
    return new std::map<int64_t, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_construct(
    void * ptr
) {
    using M = std::map<int64_t, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_destruct(
    std::map<int64_t, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, Int8}, vec::STL.GCStdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{STL.StdMap{Int64, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_copy_construct(
    std::map<int64_t, int8_t> * restrict ptr,
    const std::map<int64_t, int8_t> * restrict vec
) {
    new(ptr) std::map<int64_t, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, Int8})
    res = ccall(("std_shared_ptr_std_map_int64_t_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, int8_t>>;
*res = std::make_shared<std::map<int64_t, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, Int8})
    res = ccall(("std_shared_ptr_std_map_int64_t_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int8_t_placement_delete(
    std::shared_ptr<std::map<int64_t, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, Int8}, vec::STL.SharedStdMap{Int64, Int8})
    res = ccall(("std_shared_ptr_std_map_int64_t_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_int8_t_placement_copy(
    void * ptr,
    const std::map<int64_t, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, int8_t>>;
*res = std::make_shared<std::map<int64_t, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, Int8})
    res = ccall(("std_shared_ptr_std_map_int64_t_int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, int8_t> * std_shared_ptr_std_map_int64_t_int8_t_get(
    std::shared_ptr<std::map<int64_t, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int8_t_length(
    const std::map<int64_t, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int8_t_haskey(
    const std::map<int64_t, int8_t> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_int64_t_int8_t_getindex(
    std::map<int64_t, int8_t> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{Int8}, Ptr{Int64}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_setindex_(
    std::map<int64_t, int8_t> * restrict map,
    int8_t const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, Int8}
end
*/
extern "C" void std_map_int64_t_int8_t_delete_(
    std::map<int64_t, int8_t> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, Int8}, map2::STL.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, Int8}}, Ptr{STL.StdMap{Int64, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_int8_t_equals(
    const std::map<int64_t, int8_t> * restrict map1,
    const std::map<int64_t, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, Int8}, (Ptr{STL.StdMap{Int64, Int8}},), map)
    return res::STL.StdMapIterator{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t>::const_iterator std_map_int64_t_int8_t_cbegin(
    const std::map<int64_t, int8_t> * restrict map
) {
    using MI = std::map<int64_t, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, Int8}, (Ptr{STL.StdMap{Int64, Int8}},), map)
    return res::STL.StdMapIterator{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t>::const_iterator std_map_int64_t_int8_t_cend(
    const std::map<int64_t, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{Int8}}, (STL.StdMapIterator{Int64, Int8},), iter)
    return (convert_result(Int64, res[1]) => convert_result(Int8, res[2]))::Pair{Int64, Int8}
end
*/
extern "C" const std::pair<int64_t const *, int8_t const *> std_map_int64_t_int8_t_const_iterator_getindex(
    std::map<int64_t, int8_t>::const_iterator iter
) {
    using P = std::pair<int64_t const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, Int8}, (STL.StdMapIterator{Int64, Int8},), iter)
    return res::STL.StdMapIterator{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t>::const_iterator std_map_int64_t_int8_t_const_iterator_inc(
    std::map<int64_t, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, Int8}, (STL.StdMapIterator{Int64, Int8},), iter)
    return res::STL.StdMapIterator{Int64, Int8}
end
*/
extern "C" std::map<int64_t, int8_t>::const_iterator std_map_int64_t_int8_t_const_iterator_dec(
    std::map<int64_t, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, Int8}, iter2::STL.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, Int8}, STL.StdMapIterator{Int64, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_int8_t_const_iterator_equals(
    std::map<int64_t, int8_t>::const_iterator iter1,
    std::map<int64_t, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, ())
    return RefStdMap{Int64, Ptr{Nothing}}(res)::STL.RefStdMap{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *> * std_map_int64_t_void___new(
    
) {
    return new std::map<int64_t, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_void___delete(
    std::map<int64_t, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), map)
    return RefStdMap{Int64, Ptr{Nothing}}(res)::STL.RefStdMap{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *> * std_map_int64_t_void___copy(
    const std::map<int64_t, void *> * restrict map
) {
    return new std::map<int64_t, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_void___construct(
    void * ptr
) {
    using M = std::map<int64_t, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_void___destruct(
    std::map<int64_t, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, Ptr{Nothing}}, vec::STL.GCStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{STL.StdMap{Int64, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_void___copy_construct(
    std::map<int64_t, void *> * restrict ptr,
    const std::map<int64_t, void *> * restrict vec
) {
    new(ptr) std::map<int64_t, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int64_t_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, void *>>;
*res = std::make_shared<std::map<int64_t, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int64_t_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_void___placement_delete(
    std::shared_ptr<std::map<int64_t, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, Ptr{Nothing}}, vec::STL.SharedStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int64_t_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_void___placement_copy(
    void * ptr,
    const std::map<int64_t, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, void *>>;
*res = std::make_shared<std::map<int64_t, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int64_t_void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, void *> * std_shared_ptr_std_map_int64_t_void___get(
    std::shared_ptr<std::map<int64_t, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_void___length(
    const std::map<int64_t, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int64_t_void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_void___haskey(
    const std::map<int64_t, void *> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int64_t_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_int64_t_void___getindex(
    std::map<int64_t, void *> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{Int64}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_void___setindex_(
    std::map<int64_t, void *> * restrict map,
    void * const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int64_t_void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, Ptr{Nothing}}
end
*/
extern "C" void std_map_int64_t_void___delete_(
    std::map<int64_t, void *> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, Ptr{Nothing}}, map2::STL.StdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}}, Ptr{STL.StdMap{Int64, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_void___equals(
    const std::map<int64_t, void *> * restrict map1,
    const std::map<int64_t, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, Ptr{Nothing}}, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *>::const_iterator std_map_int64_t_void___cbegin(
    const std::map<int64_t, void *> * restrict map
) {
    using MI = std::map<int64_t, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___cend", "libSTL.dylib"), STL.StdMapIterator{Int64, Ptr{Nothing}}, (Ptr{STL.StdMap{Int64, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *>::const_iterator std_map_int64_t_void___cend(
    const std::map<int64_t, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{Int64, Ptr{Nothing}},), iter)
    return (convert_result(Int64, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{Int64, Ptr{Nothing}}
end
*/
extern "C" const std::pair<int64_t const *, void * const *> std_map_int64_t_void___const_iterator_getindex(
    std::map<int64_t, void *>::const_iterator iter
) {
    using P = std::pair<int64_t const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, Ptr{Nothing}}, (STL.StdMapIterator{Int64, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *>::const_iterator std_map_int64_t_void___const_iterator_inc(
    std::map<int64_t, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, Ptr{Nothing}}, (STL.StdMapIterator{Int64, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Int64, Ptr{Nothing}}
end
*/
extern "C" std::map<int64_t, void *>::const_iterator std_map_int64_t_void___const_iterator_dec(
    std::map<int64_t, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, Ptr{Nothing}}, iter2::STL.StdMapIterator{Int64, Ptr{Nothing}})
    res = ccall(("std_map_int64_t_void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, Ptr{Nothing}}, STL.StdMapIterator{Int64, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_void___const_iterator_equals(
    std::map<int64_t, void *>::const_iterator iter1,
    std::map<int64_t, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdString}}, ())
    return RefStdMap{Int64, STL.RefStdString}(res)::STL.RefStdMap{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string> * std_map_int64_t_std__string_new(
    
) {
    return new std::map<int64_t, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__string_delete(
    std::map<int64_t, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), map)
    return RefStdMap{Int64, STL.RefStdString}(res)::STL.RefStdMap{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string> * std_map_int64_t_std__string_copy(
    const std::map<int64_t, std::string> * restrict map
) {
    return new std::map<int64_t, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__string_construct(
    void * ptr
) {
    using M = std::map<int64_t, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__string_destruct(
    std::map<int64_t, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.RefStdString}, vec::STL.GCStdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{STL.StdMap{Int64, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__string_copy_construct(
    std::map<int64_t, std::string> * restrict ptr,
    const std::map<int64_t, std::string> * restrict vec
) {
    new(ptr) std::map<int64_t, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::string>>;
*res = std::make_shared<std::map<int64_t, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__string_placement_delete(
    std::shared_ptr<std::map<int64_t, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdString}, vec::STL.SharedStdMap{Int64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__string_placement_copy(
    void * ptr,
    const std::map<int64_t, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::string>>;
*res = std::make_shared<std::map<int64_t, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::string> * std_shared_ptr_std_map_int64_t_std__string_get(
    std::shared_ptr<std::map<int64_t, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__string_length(
    const std::map<int64_t, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__string_haskey(
    const std::map<int64_t, std::string> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_int64_t_std__string_getindex(
    std::map<int64_t, std::string> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{Int64}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__string_setindex_(
    std::map<int64_t, std::string> * restrict map,
    std::string const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.RefStdString}
end
*/
extern "C" void std_map_int64_t_std__string_delete_(
    std::map<int64_t, std::string> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.RefStdString}, map2::STL.StdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.RefStdString}}, Ptr{STL.StdMap{Int64, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__string_equals(
    const std::map<int64_t, std::string> * restrict map1,
    const std::map<int64_t, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdString}, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string>::const_iterator std_map_int64_t_std__string_cbegin(
    const std::map<int64_t, std::string> * restrict map
) {
    using MI = std::map<int64_t, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdString}, (Ptr{STL.StdMap{Int64, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string>::const_iterator std_map_int64_t_std__string_cend(
    const std::map<int64_t, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{Int64, STL.RefStdString},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{Int64, STL.RefStdString}
end
*/
extern "C" const std::pair<int64_t const *, std::string const *> std_map_int64_t_std__string_const_iterator_getindex(
    std::map<int64_t, std::string>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdString}, (STL.StdMapIterator{Int64, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string>::const_iterator std_map_int64_t_std__string_const_iterator_inc(
    std::map<int64_t, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdString}, (STL.StdMapIterator{Int64, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdString}
end
*/
extern "C" std::map<int64_t, std::string>::const_iterator std_map_int64_t_std__string_const_iterator_dec(
    std::map<int64_t, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.RefStdString}, iter2::STL.StdMapIterator{Int64, STL.RefStdString})
    res = ccall(("std_map_int64_t_std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.RefStdString}, STL.StdMapIterator{Int64, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__string_const_iterator_equals(
    std::map<int64_t, std::string>::const_iterator iter1,
    std::map<int64_t, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>> * std_map_int64_t_std__vector_std__string__new(
    
) {
    return new std::map<int64_t, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__delete(
    std::map<int64_t, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>> * std_map_int64_t_std__vector_std__string__copy(
    const std::map<int64_t, std::vector<std::string>> * restrict map
) {
    return new std::map<int64_t, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<int64_t, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__destruct(
    std::map<int64_t, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__copy_construct(
    std::map<int64_t, std::vector<std::string>> * restrict ptr,
    const std::map<int64_t, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<int64_t, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<int64_t, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<int64_t, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<int64_t, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<int64_t, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>> * std_shared_ptr_std_map_int64_t_std__vector_std__string__get(
    std::shared_ptr<std::map<int64_t, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__vector_std__string__length(
    const std::map<int64_t, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__vector_std__string__haskey(
    const std::map<int64_t, std::vector<std::string>> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_int64_t_std__vector_std__string__getindex(
    std::map<int64_t, std::vector<std::string>> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{Int64}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__setindex_(
    std::map<int64_t, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_int64_t_std__vector_std__string__delete_(
    std::map<int64_t, std::vector<std::string>> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__vector_std__string__equals(
    const std::map<int64_t, std::vector<std::string>> * restrict map1,
    const std::map<int64_t, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>>::const_iterator std_map_int64_t_std__vector_std__string__cbegin(
    const std::map<int64_t, std::vector<std::string>> * restrict map
) {
    using MI = std::map<int64_t, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>>::const_iterator std_map_int64_t_std__vector_std__string__cend(
    const std::map<int64_t, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<int64_t const *, std::vector<std::string> const *> std_map_int64_t_std__vector_std__string__const_iterator_getindex(
    std::map<int64_t, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>>::const_iterator std_map_int64_t_std__vector_std__string__const_iterator_inc(
    std::map<int64_t, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::string>>::const_iterator std_map_int64_t_std__vector_std__string__const_iterator_dec(
    std::map<int64_t, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{Int64, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__vector_std__string__const_iterator_equals(
    std::map<int64_t, std::vector<std::string>>::const_iterator iter1,
    std::map<int64_t, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * std_map_int64_t_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<int64_t, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___delete(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * std_map_int64_t_std__vector_std__shared_ptr_std__string___copy(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<int64_t, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<int64_t, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___destruct(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<int64_t, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_int64_t_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<int64_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__vector_std__shared_ptr_std__string___length(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__vector_std__shared_ptr_std__string___haskey(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_int64_t_std__vector_std__shared_ptr_std__string___getindex(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{Int64}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___setindex_(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_int64_t_std__vector_std__shared_ptr_std__string___delete_(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__vector_std__shared_ptr_std__string___equals(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int64_t_std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int64_t_std__vector_std__shared_ptr_std__string___cend(
    const std::map<int64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<int64_t const *, std::vector<std::shared_ptr<std::string>> const *> std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{Int64, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<int64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdString}}, ())
    return RefStdMap{Int64, STL.SharedStdString}(res)::STL.RefStdMap{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>> * std_map_int64_t_std__shared_ptr_std__string__new(
    
) {
    return new std::map<int64_t, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__delete(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), map)
    return RefStdMap{Int64, STL.SharedStdString}(res)::STL.RefStdMap{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>> * std_map_int64_t_std__shared_ptr_std__string__copy(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<int64_t, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<int64_t, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__destruct(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdString}, vec::STL.GCStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{STL.StdMap{Int64, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__copy_construct(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<int64_t, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdString}, vec::STL.SharedStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>> * std_shared_ptr_std_map_int64_t_std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__string__length(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__string__haskey(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_int64_t_std__shared_ptr_std__string__getindex(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{Int64}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__setindex_(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.SharedStdString}
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__string__delete_(
    std::map<int64_t, std::shared_ptr<std::string>> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.SharedStdString}, map2::STL.StdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.SharedStdString}}, Ptr{STL.StdMap{Int64, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__string__equals(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map1,
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdString}, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>>::const_iterator std_map_int64_t_std__shared_ptr_std__string__cbegin(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<int64_t, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdString}, (Ptr{STL.StdMap{Int64, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>>::const_iterator std_map_int64_t_std__shared_ptr_std__string__cend(
    const std::map<int64_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{Int64, STL.SharedStdString},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{Int64, STL.SharedStdString}
end
*/
extern "C" const std::pair<int64_t const *, std::shared_ptr<std::string> const *> std_map_int64_t_std__shared_ptr_std__string__const_iterator_getindex(
    std::map<int64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdString}, (STL.StdMapIterator{Int64, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>>::const_iterator std_map_int64_t_std__shared_ptr_std__string__const_iterator_inc(
    std::map<int64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdString}, (STL.StdMapIterator{Int64, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdString}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::string>>::const_iterator std_map_int64_t_std__shared_ptr_std__string__const_iterator_dec(
    std::map<int64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.SharedStdString}, iter2::STL.StdMapIterator{Int64, STL.SharedStdString})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.SharedStdString}, STL.StdMapIterator{Int64, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__string__const_iterator_equals(
    std::map<int64_t, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<int64_t, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * std_map_int64_t_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<int64_t, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___delete(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * std_map_int64_t_std__shared_ptr_std__vector_std__string___copy(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<int64_t, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<int64_t, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___destruct(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<int64_t, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__vector_std__string___length(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__vector_std__string___haskey(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_int64_t_std__shared_ptr_std__vector_std__string___getindex(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{Int64}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___setindex_(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__string___delete_(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__vector_std__string___equals(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__string___cend(
    const std::map<int64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<int64_t const *, std::shared_ptr<std::vector<std::string>> const *> std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{Int64, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<int64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{Int64}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Int64, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<int64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<int64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{Int64, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<int64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int64}, valuetype::Type{UInt64})
    res = ccall(("std_map_int64_t_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int64, UInt64}}, ())
    return RefStdMap{Int64, UInt64}(res)::STL.RefStdMap{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t> * std_map_int64_t_uint64_t_new(
    
) {
    return new std::map<int64_t, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_delete(
    std::map<int64_t, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int64, UInt64}}, (Ptr{STL.StdMap{Int64, UInt64}},), map)
    return RefStdMap{Int64, UInt64}(res)::STL.RefStdMap{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t> * std_map_int64_t_uint64_t_copy(
    const std::map<int64_t, uint64_t> * restrict map
) {
    return new std::map<int64_t, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_construct(
    void * ptr
) {
    using M = std::map<int64_t, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int64_t, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_destruct(
    std::map<int64_t, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int64, UInt64}, vec::STL.GCStdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{STL.StdMap{Int64, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_copy_construct(
    std::map<int64_t, uint64_t> * restrict ptr,
    const std::map<int64_t, uint64_t> * restrict vec
) {
    new(ptr) std::map<int64_t, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int64, UInt64})
    res = ccall(("std_shared_ptr_std_map_int64_t_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int64_t, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int64_t, uint64_t>>;
*res = std::make_shared<std::map<int64_t, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int64, UInt64})
    res = ccall(("std_shared_ptr_std_map_int64_t_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_uint64_t_placement_delete(
    std::shared_ptr<std::map<int64_t, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int64, UInt64}, vec::STL.SharedStdMap{Int64, UInt64})
    res = ccall(("std_shared_ptr_std_map_int64_t_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int64, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int64_t_uint64_t_placement_copy(
    void * ptr,
    const std::map<int64_t, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int64_t, uint64_t>>;
*res = std::make_shared<std::map<int64_t, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int64, UInt64})
    res = ccall(("std_shared_ptr_std_map_int64_t_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int64_t, uint64_t> * std_shared_ptr_std_map_int64_t_uint64_t_get(
    std::shared_ptr<std::map<int64_t, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint64_t_length(
    const std::map<int64_t, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_uint64_t_haskey(
    const std::map<int64_t, uint64_t> * restrict map,
    int64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_int64_t_uint64_t_getindex(
    std::map<int64_t, uint64_t> * restrict map,
    int64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int64, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{UInt64}, Ptr{Int64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{Int64}, convert(Int64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_setindex_(
    std::map<int64_t, uint64_t> * restrict map,
    uint64_t const * elt,
    int64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{Int64}), map, convert_arg(Ptr{Int64}, convert(Int64, key)))
    return map::STL.StdMap{Int64, UInt64}
end
*/
extern "C" void std_map_int64_t_uint64_t_delete_(
    std::map<int64_t, uint64_t> * restrict map,
    int64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int64, UInt64}, map2::STL.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int64, UInt64}}, Ptr{STL.StdMap{Int64, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_uint64_t_equals(
    const std::map<int64_t, uint64_t> * restrict map1,
    const std::map<int64_t, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int64, UInt64}, (Ptr{STL.StdMap{Int64, UInt64}},), map)
    return res::STL.StdMapIterator{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t>::const_iterator std_map_int64_t_uint64_t_cbegin(
    const std::map<int64_t, uint64_t> * restrict map
) {
    using MI = std::map<int64_t, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int64, UInt64}, (Ptr{STL.StdMap{Int64, UInt64}},), map)
    return res::STL.StdMapIterator{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t>::const_iterator std_map_int64_t_uint64_t_cend(
    const std::map<int64_t, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int64}, Ptr{UInt64}}, (STL.StdMapIterator{Int64, UInt64},), iter)
    return (convert_result(Int64, res[1]) => convert_result(UInt64, res[2]))::Pair{Int64, UInt64}
end
*/
extern "C" const std::pair<int64_t const *, uint64_t const *> std_map_int64_t_uint64_t_const_iterator_getindex(
    std::map<int64_t, uint64_t>::const_iterator iter
) {
    using P = std::pair<int64_t const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int64_t const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int64, UInt64}, (STL.StdMapIterator{Int64, UInt64},), iter)
    return res::STL.StdMapIterator{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t>::const_iterator std_map_int64_t_uint64_t_const_iterator_inc(
    std::map<int64_t, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int64, UInt64}, (STL.StdMapIterator{Int64, UInt64},), iter)
    return res::STL.StdMapIterator{Int64, UInt64}
end
*/
extern "C" std::map<int64_t, uint64_t>::const_iterator std_map_int64_t_uint64_t_const_iterator_dec(
    std::map<int64_t, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int64, UInt64}, iter2::STL.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int64, UInt64}, STL.StdMapIterator{Int64, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int64_t_uint64_t_const_iterator_equals(
    std::map<int64_t, uint64_t>::const_iterator iter1,
    std::map<int64_t, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{Bool})
    res = ccall(("std_map_int8_t_bool_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Bool}}, ())
    return RefStdMap{Int8, Bool}(res)::STL.RefStdMap{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool> * std_map_int8_t_bool_new(
    
) {
    return new std::map<int8_t, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_bool_delete(
    std::map<int8_t, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Bool}}, (Ptr{STL.StdMap{Int8, Bool}},), map)
    return RefStdMap{Int8, Bool}(res)::STL.RefStdMap{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool> * std_map_int8_t_bool_copy(
    const std::map<int8_t, bool> * restrict map
) {
    return new std::map<int8_t, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_bool_construct(
    void * ptr
) {
    using M = std::map<int8_t, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_bool_destruct(
    std::map<int8_t, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, Bool}, vec::STL.GCStdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{STL.StdMap{Int8, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_bool_copy_construct(
    std::map<int8_t, bool> * restrict ptr,
    const std::map<int8_t, bool> * restrict vec
) {
    new(ptr) std::map<int8_t, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, Bool})
    res = ccall(("std_shared_ptr_std_map_int8_t_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, bool>>;
*res = std::make_shared<std::map<int8_t, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, Bool})
    res = ccall(("std_shared_ptr_std_map_int8_t_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_bool_placement_delete(
    std::shared_ptr<std::map<int8_t, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, Bool}, vec::STL.SharedStdMap{Int8, Bool})
    res = ccall(("std_shared_ptr_std_map_int8_t_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_bool_placement_copy(
    void * ptr,
    const std::map<int8_t, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, bool>>;
*res = std::make_shared<std::map<int8_t, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, Bool})
    res = ccall(("std_shared_ptr_std_map_int8_t_bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, bool> * std_shared_ptr_std_map_int8_t_bool_get(
    std::shared_ptr<std::map<int8_t, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_bool_length(
    const std::map<int8_t, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, Bool}, key::Any)
    res = ccall(("std_map_int8_t_bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_bool_haskey(
    const std::map<int8_t, bool> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, Bool}, key::Any)
    res = ccall(("std_map_int8_t_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_int8_t_bool_getindex(
    std::map<int8_t, bool> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{Bool}, Ptr{Int8}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_bool_setindex_(
    std::map<int8_t, bool> * restrict map,
    bool const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, Bool}, key::Any)
    res = ccall(("std_map_int8_t_bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, Bool}
end
*/
extern "C" void std_map_int8_t_bool_delete_(
    std::map<int8_t, bool> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, Bool}, map2::STL.StdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, Bool}}, Ptr{STL.StdMap{Int8, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_bool_equals(
    const std::map<int8_t, bool> * restrict map1,
    const std::map<int8_t, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, Bool}, (Ptr{STL.StdMap{Int8, Bool}},), map)
    return res::STL.StdMapIterator{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool>::const_iterator std_map_int8_t_bool_cbegin(
    const std::map<int8_t, bool> * restrict map
) {
    using MI = std::map<int8_t, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, Bool}, (Ptr{STL.StdMap{Int8, Bool}},), map)
    return res::STL.StdMapIterator{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool>::const_iterator std_map_int8_t_bool_cend(
    const std::map<int8_t, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{Bool}}, (STL.StdMapIterator{Int8, Bool},), iter)
    return (convert_result(Int8, res[1]) => convert_result(Bool, res[2]))::Pair{Int8, Bool}
end
*/
extern "C" const std::pair<int8_t const *, bool const *> std_map_int8_t_bool_const_iterator_getindex(
    std::map<int8_t, bool>::const_iterator iter
) {
    using P = std::pair<int8_t const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, Bool}, (STL.StdMapIterator{Int8, Bool},), iter)
    return res::STL.StdMapIterator{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool>::const_iterator std_map_int8_t_bool_const_iterator_inc(
    std::map<int8_t, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, Bool}, (STL.StdMapIterator{Int8, Bool},), iter)
    return res::STL.StdMapIterator{Int8, Bool}
end
*/
extern "C" std::map<int8_t, bool>::const_iterator std_map_int8_t_bool_const_iterator_dec(
    std::map<int8_t, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, Bool}, iter2::STL.StdMapIterator{Int8, Bool})
    res = ccall(("std_map_int8_t_bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, Bool}, STL.StdMapIterator{Int8, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_bool_const_iterator_equals(
    std::map<int8_t, bool>::const_iterator iter1,
    std::map<int8_t, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{Float64})
    res = ccall(("std_map_int8_t_double_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Float64}}, ())
    return RefStdMap{Int8, Float64}(res)::STL.RefStdMap{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double> * std_map_int8_t_double_new(
    
) {
    return new std::map<int8_t, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_delete(
    std::map<int8_t, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Float64}}, (Ptr{STL.StdMap{Int8, Float64}},), map)
    return RefStdMap{Int8, Float64}(res)::STL.RefStdMap{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double> * std_map_int8_t_double_copy(
    const std::map<int8_t, double> * restrict map
) {
    return new std::map<int8_t, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_construct(
    void * ptr
) {
    using M = std::map<int8_t, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_destruct(
    std::map<int8_t, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, Float64}, vec::STL.GCStdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{STL.StdMap{Int8, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_copy_construct(
    std::map<int8_t, double> * restrict ptr,
    const std::map<int8_t, double> * restrict vec
) {
    new(ptr) std::map<int8_t, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, Float64})
    res = ccall(("std_shared_ptr_std_map_int8_t_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, double>>;
*res = std::make_shared<std::map<int8_t, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, Float64})
    res = ccall(("std_shared_ptr_std_map_int8_t_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_double_placement_delete(
    std::shared_ptr<std::map<int8_t, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, Float64}, vec::STL.SharedStdMap{Int8, Float64})
    res = ccall(("std_shared_ptr_std_map_int8_t_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_double_placement_copy(
    void * ptr,
    const std::map<int8_t, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, double>>;
*res = std::make_shared<std::map<int8_t, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, Float64})
    res = ccall(("std_shared_ptr_std_map_int8_t_double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, double> * std_shared_ptr_std_map_int8_t_double_get(
    std::shared_ptr<std::map<int8_t, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_double_length(
    const std::map<int8_t, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_double_haskey(
    const std::map<int8_t, double> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_int8_t_double_getindex(
    std::map<int8_t, double> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{Float64}, Ptr{Int8}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_setindex_(
    std::map<int8_t, double> * restrict map,
    double const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, Float64}
end
*/
extern "C" void std_map_int8_t_double_delete_(
    std::map<int8_t, double> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, Float64}, map2::STL.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, Float64}}, Ptr{STL.StdMap{Int8, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_double_equals(
    const std::map<int8_t, double> * restrict map1,
    const std::map<int8_t, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, Float64}, (Ptr{STL.StdMap{Int8, Float64}},), map)
    return res::STL.StdMapIterator{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double>::const_iterator std_map_int8_t_double_cbegin(
    const std::map<int8_t, double> * restrict map
) {
    using MI = std::map<int8_t, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, Float64}, (Ptr{STL.StdMap{Int8, Float64}},), map)
    return res::STL.StdMapIterator{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double>::const_iterator std_map_int8_t_double_cend(
    const std::map<int8_t, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{Float64}}, (STL.StdMapIterator{Int8, Float64},), iter)
    return (convert_result(Int8, res[1]) => convert_result(Float64, res[2]))::Pair{Int8, Float64}
end
*/
extern "C" const std::pair<int8_t const *, double const *> std_map_int8_t_double_const_iterator_getindex(
    std::map<int8_t, double>::const_iterator iter
) {
    using P = std::pair<int8_t const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, Float64}, (STL.StdMapIterator{Int8, Float64},), iter)
    return res::STL.StdMapIterator{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double>::const_iterator std_map_int8_t_double_const_iterator_inc(
    std::map<int8_t, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, Float64}, (STL.StdMapIterator{Int8, Float64},), iter)
    return res::STL.StdMapIterator{Int8, Float64}
end
*/
extern "C" std::map<int8_t, double>::const_iterator std_map_int8_t_double_const_iterator_dec(
    std::map<int8_t, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, Float64}, iter2::STL.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, Float64}, STL.StdMapIterator{Int8, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_double_const_iterator_equals(
    std::map<int8_t, double>::const_iterator iter1,
    std::map<int8_t, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{Int64})
    res = ccall(("std_map_int8_t_int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Int64}}, ())
    return RefStdMap{Int8, Int64}(res)::STL.RefStdMap{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t> * std_map_int8_t_int64_t_new(
    
) {
    return new std::map<int8_t, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_delete(
    std::map<int8_t, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Int64}}, (Ptr{STL.StdMap{Int8, Int64}},), map)
    return RefStdMap{Int8, Int64}(res)::STL.RefStdMap{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t> * std_map_int8_t_int64_t_copy(
    const std::map<int8_t, int64_t> * restrict map
) {
    return new std::map<int8_t, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_construct(
    void * ptr
) {
    using M = std::map<int8_t, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_destruct(
    std::map<int8_t, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, Int64}, vec::STL.GCStdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{STL.StdMap{Int8, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_copy_construct(
    std::map<int8_t, int64_t> * restrict ptr,
    const std::map<int8_t, int64_t> * restrict vec
) {
    new(ptr) std::map<int8_t, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, Int64})
    res = ccall(("std_shared_ptr_std_map_int8_t_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, int64_t>>;
*res = std::make_shared<std::map<int8_t, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, Int64})
    res = ccall(("std_shared_ptr_std_map_int8_t_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int64_t_placement_delete(
    std::shared_ptr<std::map<int8_t, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, Int64}, vec::STL.SharedStdMap{Int8, Int64})
    res = ccall(("std_shared_ptr_std_map_int8_t_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int64_t_placement_copy(
    void * ptr,
    const std::map<int8_t, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, int64_t>>;
*res = std::make_shared<std::map<int8_t, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, Int64})
    res = ccall(("std_shared_ptr_std_map_int8_t_int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, int64_t> * std_shared_ptr_std_map_int8_t_int64_t_get(
    std::shared_ptr<std::map<int8_t, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int64_t_length(
    const std::map<int8_t, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int64_t_haskey(
    const std::map<int8_t, int64_t> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_int8_t_int64_t_getindex(
    std::map<int8_t, int64_t> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{Int64}, Ptr{Int8}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_setindex_(
    std::map<int8_t, int64_t> * restrict map,
    int64_t const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, Int64}
end
*/
extern "C" void std_map_int8_t_int64_t_delete_(
    std::map<int8_t, int64_t> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, Int64}, map2::STL.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, Int64}}, Ptr{STL.StdMap{Int8, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_int64_t_equals(
    const std::map<int8_t, int64_t> * restrict map1,
    const std::map<int8_t, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, Int64}, (Ptr{STL.StdMap{Int8, Int64}},), map)
    return res::STL.StdMapIterator{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t>::const_iterator std_map_int8_t_int64_t_cbegin(
    const std::map<int8_t, int64_t> * restrict map
) {
    using MI = std::map<int8_t, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, Int64}, (Ptr{STL.StdMap{Int8, Int64}},), map)
    return res::STL.StdMapIterator{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t>::const_iterator std_map_int8_t_int64_t_cend(
    const std::map<int8_t, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{Int64}}, (STL.StdMapIterator{Int8, Int64},), iter)
    return (convert_result(Int8, res[1]) => convert_result(Int64, res[2]))::Pair{Int8, Int64}
end
*/
extern "C" const std::pair<int8_t const *, int64_t const *> std_map_int8_t_int64_t_const_iterator_getindex(
    std::map<int8_t, int64_t>::const_iterator iter
) {
    using P = std::pair<int8_t const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, Int64}, (STL.StdMapIterator{Int8, Int64},), iter)
    return res::STL.StdMapIterator{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t>::const_iterator std_map_int8_t_int64_t_const_iterator_inc(
    std::map<int8_t, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, Int64}, (STL.StdMapIterator{Int8, Int64},), iter)
    return res::STL.StdMapIterator{Int8, Int64}
end
*/
extern "C" std::map<int8_t, int64_t>::const_iterator std_map_int8_t_int64_t_const_iterator_dec(
    std::map<int8_t, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, Int64}, iter2::STL.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, Int64}, STL.StdMapIterator{Int8, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_int64_t_const_iterator_equals(
    std::map<int8_t, int64_t>::const_iterator iter1,
    std::map<int8_t, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{Int8})
    res = ccall(("std_map_int8_t_int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Int8}}, ())
    return RefStdMap{Int8, Int8}(res)::STL.RefStdMap{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t> * std_map_int8_t_int8_t_new(
    
) {
    return new std::map<int8_t, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_delete(
    std::map<int8_t, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Int8}}, (Ptr{STL.StdMap{Int8, Int8}},), map)
    return RefStdMap{Int8, Int8}(res)::STL.RefStdMap{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t> * std_map_int8_t_int8_t_copy(
    const std::map<int8_t, int8_t> * restrict map
) {
    return new std::map<int8_t, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_construct(
    void * ptr
) {
    using M = std::map<int8_t, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_destruct(
    std::map<int8_t, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, Int8}, vec::STL.GCStdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{STL.StdMap{Int8, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_copy_construct(
    std::map<int8_t, int8_t> * restrict ptr,
    const std::map<int8_t, int8_t> * restrict vec
) {
    new(ptr) std::map<int8_t, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, Int8})
    res = ccall(("std_shared_ptr_std_map_int8_t_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, int8_t>>;
*res = std::make_shared<std::map<int8_t, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, Int8})
    res = ccall(("std_shared_ptr_std_map_int8_t_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int8_t_placement_delete(
    std::shared_ptr<std::map<int8_t, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, Int8}, vec::STL.SharedStdMap{Int8, Int8})
    res = ccall(("std_shared_ptr_std_map_int8_t_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_int8_t_placement_copy(
    void * ptr,
    const std::map<int8_t, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, int8_t>>;
*res = std::make_shared<std::map<int8_t, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, Int8})
    res = ccall(("std_shared_ptr_std_map_int8_t_int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, int8_t> * std_shared_ptr_std_map_int8_t_int8_t_get(
    std::shared_ptr<std::map<int8_t, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int8_t_length(
    const std::map<int8_t, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int8_t_haskey(
    const std::map<int8_t, int8_t> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_int8_t_int8_t_getindex(
    std::map<int8_t, int8_t> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{Int8}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_setindex_(
    std::map<int8_t, int8_t> * restrict map,
    int8_t const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, Int8}
end
*/
extern "C" void std_map_int8_t_int8_t_delete_(
    std::map<int8_t, int8_t> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, Int8}, map2::STL.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, Int8}}, Ptr{STL.StdMap{Int8, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_int8_t_equals(
    const std::map<int8_t, int8_t> * restrict map1,
    const std::map<int8_t, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, Int8}, (Ptr{STL.StdMap{Int8, Int8}},), map)
    return res::STL.StdMapIterator{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t>::const_iterator std_map_int8_t_int8_t_cbegin(
    const std::map<int8_t, int8_t> * restrict map
) {
    using MI = std::map<int8_t, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, Int8}, (Ptr{STL.StdMap{Int8, Int8}},), map)
    return res::STL.StdMapIterator{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t>::const_iterator std_map_int8_t_int8_t_cend(
    const std::map<int8_t, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{Int8}}, (STL.StdMapIterator{Int8, Int8},), iter)
    return (convert_result(Int8, res[1]) => convert_result(Int8, res[2]))::Pair{Int8, Int8}
end
*/
extern "C" const std::pair<int8_t const *, int8_t const *> std_map_int8_t_int8_t_const_iterator_getindex(
    std::map<int8_t, int8_t>::const_iterator iter
) {
    using P = std::pair<int8_t const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, Int8}, (STL.StdMapIterator{Int8, Int8},), iter)
    return res::STL.StdMapIterator{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t>::const_iterator std_map_int8_t_int8_t_const_iterator_inc(
    std::map<int8_t, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, Int8}, (STL.StdMapIterator{Int8, Int8},), iter)
    return res::STL.StdMapIterator{Int8, Int8}
end
*/
extern "C" std::map<int8_t, int8_t>::const_iterator std_map_int8_t_int8_t_const_iterator_dec(
    std::map<int8_t, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, Int8}, iter2::STL.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, Int8}, STL.StdMapIterator{Int8, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_int8_t_const_iterator_equals(
    std::map<int8_t, int8_t>::const_iterator iter1,
    std::map<int8_t, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, ())
    return RefStdMap{Int8, Ptr{Nothing}}(res)::STL.RefStdMap{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *> * std_map_int8_t_void___new(
    
) {
    return new std::map<int8_t, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_void___delete(
    std::map<int8_t, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), map)
    return RefStdMap{Int8, Ptr{Nothing}}(res)::STL.RefStdMap{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *> * std_map_int8_t_void___copy(
    const std::map<int8_t, void *> * restrict map
) {
    return new std::map<int8_t, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_void___construct(
    void * ptr
) {
    using M = std::map<int8_t, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_void___destruct(
    std::map<int8_t, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, Ptr{Nothing}}, vec::STL.GCStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{STL.StdMap{Int8, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_void___copy_construct(
    std::map<int8_t, void *> * restrict ptr,
    const std::map<int8_t, void *> * restrict vec
) {
    new(ptr) std::map<int8_t, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int8_t_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, void *>>;
*res = std::make_shared<std::map<int8_t, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int8_t_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_void___placement_delete(
    std::shared_ptr<std::map<int8_t, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, Ptr{Nothing}}, vec::STL.SharedStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int8_t_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_void___placement_copy(
    void * ptr,
    const std::map<int8_t, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, void *>>;
*res = std::make_shared<std::map<int8_t, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_int8_t_void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, void *> * std_shared_ptr_std_map_int8_t_void___get(
    std::shared_ptr<std::map<int8_t, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_void___length(
    const std::map<int8_t, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int8_t_void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_void___haskey(
    const std::map<int8_t, void *> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int8_t_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_int8_t_void___getindex(
    std::map<int8_t, void *> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{Int8}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_void___setindex_(
    std::map<int8_t, void *> * restrict map,
    void * const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_int8_t_void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, Ptr{Nothing}}
end
*/
extern "C" void std_map_int8_t_void___delete_(
    std::map<int8_t, void *> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, Ptr{Nothing}}, map2::STL.StdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}}, Ptr{STL.StdMap{Int8, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_void___equals(
    const std::map<int8_t, void *> * restrict map1,
    const std::map<int8_t, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, Ptr{Nothing}}, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *>::const_iterator std_map_int8_t_void___cbegin(
    const std::map<int8_t, void *> * restrict map
) {
    using MI = std::map<int8_t, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___cend", "libSTL.dylib"), STL.StdMapIterator{Int8, Ptr{Nothing}}, (Ptr{STL.StdMap{Int8, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *>::const_iterator std_map_int8_t_void___cend(
    const std::map<int8_t, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{Int8, Ptr{Nothing}},), iter)
    return (convert_result(Int8, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{Int8, Ptr{Nothing}}
end
*/
extern "C" const std::pair<int8_t const *, void * const *> std_map_int8_t_void___const_iterator_getindex(
    std::map<int8_t, void *>::const_iterator iter
) {
    using P = std::pair<int8_t const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, Ptr{Nothing}}, (STL.StdMapIterator{Int8, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *>::const_iterator std_map_int8_t_void___const_iterator_inc(
    std::map<int8_t, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, Ptr{Nothing}}, (STL.StdMapIterator{Int8, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{Int8, Ptr{Nothing}}
end
*/
extern "C" std::map<int8_t, void *>::const_iterator std_map_int8_t_void___const_iterator_dec(
    std::map<int8_t, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, Ptr{Nothing}}, iter2::STL.StdMapIterator{Int8, Ptr{Nothing}})
    res = ccall(("std_map_int8_t_void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, Ptr{Nothing}}, STL.StdMapIterator{Int8, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_void___const_iterator_equals(
    std::map<int8_t, void *>::const_iterator iter1,
    std::map<int8_t, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdString}}, ())
    return RefStdMap{Int8, STL.RefStdString}(res)::STL.RefStdMap{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string> * std_map_int8_t_std__string_new(
    
) {
    return new std::map<int8_t, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__string_delete(
    std::map<int8_t, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), map)
    return RefStdMap{Int8, STL.RefStdString}(res)::STL.RefStdMap{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string> * std_map_int8_t_std__string_copy(
    const std::map<int8_t, std::string> * restrict map
) {
    return new std::map<int8_t, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__string_construct(
    void * ptr
) {
    using M = std::map<int8_t, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__string_destruct(
    std::map<int8_t, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.RefStdString}, vec::STL.GCStdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{STL.StdMap{Int8, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__string_copy_construct(
    std::map<int8_t, std::string> * restrict ptr,
    const std::map<int8_t, std::string> * restrict vec
) {
    new(ptr) std::map<int8_t, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::string>>;
*res = std::make_shared<std::map<int8_t, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__string_placement_delete(
    std::shared_ptr<std::map<int8_t, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdString}, vec::STL.SharedStdMap{Int8, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__string_placement_copy(
    void * ptr,
    const std::map<int8_t, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::string>>;
*res = std::make_shared<std::map<int8_t, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::string> * std_shared_ptr_std_map_int8_t_std__string_get(
    std::shared_ptr<std::map<int8_t, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__string_length(
    const std::map<int8_t, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__string_haskey(
    const std::map<int8_t, std::string> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_int8_t_std__string_getindex(
    std::map<int8_t, std::string> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{Int8}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__string_setindex_(
    std::map<int8_t, std::string> * restrict map,
    std::string const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.RefStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.RefStdString}
end
*/
extern "C" void std_map_int8_t_std__string_delete_(
    std::map<int8_t, std::string> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.RefStdString}, map2::STL.StdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.RefStdString}}, Ptr{STL.StdMap{Int8, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__string_equals(
    const std::map<int8_t, std::string> * restrict map1,
    const std::map<int8_t, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdString}, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string>::const_iterator std_map_int8_t_std__string_cbegin(
    const std::map<int8_t, std::string> * restrict map
) {
    using MI = std::map<int8_t, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdString}, (Ptr{STL.StdMap{Int8, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string>::const_iterator std_map_int8_t_std__string_cend(
    const std::map<int8_t, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{Int8, STL.RefStdString},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{Int8, STL.RefStdString}
end
*/
extern "C" const std::pair<int8_t const *, std::string const *> std_map_int8_t_std__string_const_iterator_getindex(
    std::map<int8_t, std::string>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdString}, (STL.StdMapIterator{Int8, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string>::const_iterator std_map_int8_t_std__string_const_iterator_inc(
    std::map<int8_t, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdString}, (STL.StdMapIterator{Int8, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdString}
end
*/
extern "C" std::map<int8_t, std::string>::const_iterator std_map_int8_t_std__string_const_iterator_dec(
    std::map<int8_t, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.RefStdString}, iter2::STL.StdMapIterator{Int8, STL.RefStdString})
    res = ccall(("std_map_int8_t_std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.RefStdString}, STL.StdMapIterator{Int8, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__string_const_iterator_equals(
    std::map<int8_t, std::string>::const_iterator iter1,
    std::map<int8_t, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>> * std_map_int8_t_std__vector_std__string__new(
    
) {
    return new std::map<int8_t, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__delete(
    std::map<int8_t, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>> * std_map_int8_t_std__vector_std__string__copy(
    const std::map<int8_t, std::vector<std::string>> * restrict map
) {
    return new std::map<int8_t, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<int8_t, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__destruct(
    std::map<int8_t, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__copy_construct(
    std::map<int8_t, std::vector<std::string>> * restrict ptr,
    const std::map<int8_t, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<int8_t, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<int8_t, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<int8_t, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<int8_t, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<int8_t, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>> * std_shared_ptr_std_map_int8_t_std__vector_std__string__get(
    std::shared_ptr<std::map<int8_t, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__vector_std__string__length(
    const std::map<int8_t, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__vector_std__string__haskey(
    const std::map<int8_t, std::vector<std::string>> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_int8_t_std__vector_std__string__getindex(
    std::map<int8_t, std::vector<std::string>> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{Int8}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__setindex_(
    std::map<int8_t, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_int8_t_std__vector_std__string__delete_(
    std::map<int8_t, std::vector<std::string>> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__vector_std__string__equals(
    const std::map<int8_t, std::vector<std::string>> * restrict map1,
    const std::map<int8_t, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>>::const_iterator std_map_int8_t_std__vector_std__string__cbegin(
    const std::map<int8_t, std::vector<std::string>> * restrict map
) {
    using MI = std::map<int8_t, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>>::const_iterator std_map_int8_t_std__vector_std__string__cend(
    const std::map<int8_t, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<int8_t const *, std::vector<std::string> const *> std_map_int8_t_std__vector_std__string__const_iterator_getindex(
    std::map<int8_t, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>>::const_iterator std_map_int8_t_std__vector_std__string__const_iterator_inc(
    std::map<int8_t, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::string>>::const_iterator std_map_int8_t_std__vector_std__string__const_iterator_dec(
    std::map<int8_t, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{Int8, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__vector_std__string__const_iterator_equals(
    std::map<int8_t, std::vector<std::string>>::const_iterator iter1,
    std::map<int8_t, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * std_map_int8_t_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<int8_t, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___delete(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * std_map_int8_t_std__vector_std__shared_ptr_std__string___copy(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<int8_t, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<int8_t, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___destruct(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<int8_t, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_int8_t_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<int8_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__vector_std__shared_ptr_std__string___length(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__vector_std__shared_ptr_std__string___haskey(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_int8_t_std__vector_std__shared_ptr_std__string___getindex(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{Int8}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___setindex_(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_int8_t_std__vector_std__shared_ptr_std__string___delete_(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__vector_std__shared_ptr_std__string___equals(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int8_t_std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int8_t_std__vector_std__shared_ptr_std__string___cend(
    const std::map<int8_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<int8_t const *, std::vector<std::shared_ptr<std::string>> const *> std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{Int8, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<int8_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdString}}, ())
    return RefStdMap{Int8, STL.SharedStdString}(res)::STL.RefStdMap{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>> * std_map_int8_t_std__shared_ptr_std__string__new(
    
) {
    return new std::map<int8_t, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__delete(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), map)
    return RefStdMap{Int8, STL.SharedStdString}(res)::STL.RefStdMap{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>> * std_map_int8_t_std__shared_ptr_std__string__copy(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<int8_t, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<int8_t, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__destruct(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdString}, vec::STL.GCStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{STL.StdMap{Int8, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__copy_construct(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<int8_t, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdString}, vec::STL.SharedStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>> * std_shared_ptr_std_map_int8_t_std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__string__length(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__string__haskey(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_int8_t_std__shared_ptr_std__string__getindex(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{Int8}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__setindex_(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.SharedStdString}
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__string__delete_(
    std::map<int8_t, std::shared_ptr<std::string>> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.SharedStdString}, map2::STL.StdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.SharedStdString}}, Ptr{STL.StdMap{Int8, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__string__equals(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map1,
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdString}, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>>::const_iterator std_map_int8_t_std__shared_ptr_std__string__cbegin(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<int8_t, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdString}, (Ptr{STL.StdMap{Int8, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>>::const_iterator std_map_int8_t_std__shared_ptr_std__string__cend(
    const std::map<int8_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{Int8, STL.SharedStdString},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{Int8, STL.SharedStdString}
end
*/
extern "C" const std::pair<int8_t const *, std::shared_ptr<std::string> const *> std_map_int8_t_std__shared_ptr_std__string__const_iterator_getindex(
    std::map<int8_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdString}, (STL.StdMapIterator{Int8, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>>::const_iterator std_map_int8_t_std__shared_ptr_std__string__const_iterator_inc(
    std::map<int8_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdString}, (STL.StdMapIterator{Int8, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdString}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::string>>::const_iterator std_map_int8_t_std__shared_ptr_std__string__const_iterator_dec(
    std::map<int8_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.SharedStdString}, iter2::STL.StdMapIterator{Int8, STL.SharedStdString})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.SharedStdString}, STL.StdMapIterator{Int8, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__string__const_iterator_equals(
    std::map<int8_t, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<int8_t, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * std_map_int8_t_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<int8_t, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___delete(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * std_map_int8_t_std__shared_ptr_std__vector_std__string___copy(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<int8_t, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<int8_t, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___destruct(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<int8_t, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__vector_std__string___length(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__vector_std__string___haskey(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_int8_t_std__shared_ptr_std__vector_std__string___getindex(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{Int8}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___setindex_(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__string___delete_(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__vector_std__string___equals(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__string___cend(
    const std::map<int8_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<int8_t const *, std::shared_ptr<std::vector<std::string>> const *> std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{Int8, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<int8_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{Int8}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{Int8, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(Int8, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<int8_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<int8_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{Int8, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<int8_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{Int8}, valuetype::Type{UInt64})
    res = ccall(("std_map_int8_t_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{Int8, UInt64}}, ())
    return RefStdMap{Int8, UInt64}(res)::STL.RefStdMap{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t> * std_map_int8_t_uint64_t_new(
    
) {
    return new std::map<int8_t, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_delete(
    std::map<int8_t, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{Int8, UInt64}}, (Ptr{STL.StdMap{Int8, UInt64}},), map)
    return RefStdMap{Int8, UInt64}(res)::STL.RefStdMap{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t> * std_map_int8_t_uint64_t_copy(
    const std::map<int8_t, uint64_t> * restrict map
) {
    return new std::map<int8_t, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_construct(
    void * ptr
) {
    using M = std::map<int8_t, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<int8_t, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_destruct(
    std::map<int8_t, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{Int8, UInt64}, vec::STL.GCStdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{STL.StdMap{Int8, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_copy_construct(
    std::map<int8_t, uint64_t> * restrict ptr,
    const std::map<int8_t, uint64_t> * restrict vec
) {
    new(ptr) std::map<int8_t, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{Int8, UInt64})
    res = ccall(("std_shared_ptr_std_map_int8_t_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<int8_t, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<int8_t, uint64_t>>;
*res = std::make_shared<std::map<int8_t, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{Int8, UInt64})
    res = ccall(("std_shared_ptr_std_map_int8_t_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_uint64_t_placement_delete(
    std::shared_ptr<std::map<int8_t, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{Int8, UInt64}, vec::STL.SharedStdMap{Int8, UInt64})
    res = ccall(("std_shared_ptr_std_map_int8_t_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{Int8, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_int8_t_uint64_t_placement_copy(
    void * ptr,
    const std::map<int8_t, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<int8_t, uint64_t>>;
*res = std::make_shared<std::map<int8_t, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{Int8, UInt64})
    res = ccall(("std_shared_ptr_std_map_int8_t_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<int8_t, uint64_t> * std_shared_ptr_std_map_int8_t_uint64_t_get(
    std::shared_ptr<std::map<int8_t, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint64_t_length(
    const std::map<int8_t, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_uint64_t_haskey(
    const std::map<int8_t, uint64_t> * restrict map,
    int8_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_int8_t_uint64_t_getindex(
    std::map<int8_t, uint64_t> * restrict map,
    int8_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{Int8, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{UInt64}, Ptr{Int8}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{Int8}, convert(Int8, key)))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_setindex_(
    std::map<int8_t, uint64_t> * restrict map,
    uint64_t const * elt,
    int8_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{Int8}), map, convert_arg(Ptr{Int8}, convert(Int8, key)))
    return map::STL.StdMap{Int8, UInt64}
end
*/
extern "C" void std_map_int8_t_uint64_t_delete_(
    std::map<int8_t, uint64_t> * restrict map,
    int8_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{Int8, UInt64}, map2::STL.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{Int8, UInt64}}, Ptr{STL.StdMap{Int8, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_uint64_t_equals(
    const std::map<int8_t, uint64_t> * restrict map1,
    const std::map<int8_t, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{Int8, UInt64}, (Ptr{STL.StdMap{Int8, UInt64}},), map)
    return res::STL.StdMapIterator{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t>::const_iterator std_map_int8_t_uint64_t_cbegin(
    const std::map<int8_t, uint64_t> * restrict map
) {
    using MI = std::map<int8_t, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{Int8, UInt64}, (Ptr{STL.StdMap{Int8, UInt64}},), map)
    return res::STL.StdMapIterator{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t>::const_iterator std_map_int8_t_uint64_t_cend(
    const std::map<int8_t, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{Int8}, Ptr{UInt64}}, (STL.StdMapIterator{Int8, UInt64},), iter)
    return (convert_result(Int8, res[1]) => convert_result(UInt64, res[2]))::Pair{Int8, UInt64}
end
*/
extern "C" const std::pair<int8_t const *, uint64_t const *> std_map_int8_t_uint64_t_const_iterator_getindex(
    std::map<int8_t, uint64_t>::const_iterator iter
) {
    using P = std::pair<int8_t const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<int8_t const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{Int8, UInt64}, (STL.StdMapIterator{Int8, UInt64},), iter)
    return res::STL.StdMapIterator{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t>::const_iterator std_map_int8_t_uint64_t_const_iterator_inc(
    std::map<int8_t, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{Int8, UInt64}, (STL.StdMapIterator{Int8, UInt64},), iter)
    return res::STL.StdMapIterator{Int8, UInt64}
end
*/
extern "C" std::map<int8_t, uint64_t>::const_iterator std_map_int8_t_uint64_t_const_iterator_dec(
    std::map<int8_t, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{Int8, UInt64}, iter2::STL.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{Int8, UInt64}, STL.StdMapIterator{Int8, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_int8_t_uint64_t_const_iterator_equals(
    std::map<int8_t, uint64_t>::const_iterator iter1,
    std::map<int8_t, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{Bool})
    res = ccall(("std_map_std__string_bool_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Bool}}, ())
    return RefStdMap{STL.RefStdString, Bool}(res)::STL.RefStdMap{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool> * std_map_std__string_bool_new(
    
) {
    return new std::map<std::string, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_bool_delete(
    std::map<std::string, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Bool}}, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), map)
    return RefStdMap{STL.RefStdString, Bool}(res)::STL.RefStdMap{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool> * std_map_std__string_bool_copy(
    const std::map<std::string, bool> * restrict map
) {
    return new std::map<std::string, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_bool_construct(
    void * ptr
) {
    using M = std::map<std::string, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_bool_destruct(
    std::map<std::string, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, Bool}, vec::STL.GCStdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{STL.StdMap{STL.RefStdString, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_bool_copy_construct(
    std::map<std::string, bool> * restrict ptr,
    const std::map<std::string, bool> * restrict vec
) {
    new(ptr) std::map<std::string, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__string_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, bool>>;
*res = std::make_shared<std::map<std::string, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__string_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_bool_placement_delete(
    std::shared_ptr<std::map<std::string, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, Bool}, vec::STL.SharedStdMap{STL.RefStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__string_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_bool_placement_copy(
    void * ptr,
    const std::map<std::string, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, bool>>;
*res = std::make_shared<std::map<std::string, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__string_bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, bool> * std_shared_ptr_std_map_std__string_bool_get(
    std::shared_ptr<std::map<std::string, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_bool_length(
    const std::map<std::string, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, Bool}, key::Any)
    res = ccall(("std_map_std__string_bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_bool_haskey(
    const std::map<std::string, bool> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, Bool}, key::Any)
    res = ccall(("std_map_std__string_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_std__string_bool_getindex(
    std::map<std::string, bool> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{Bool}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_bool_setindex_(
    std::map<std::string, bool> * restrict map,
    bool const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, Bool}, key::Any)
    res = ccall(("std_map_std__string_bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, Bool}
end
*/
extern "C" void std_map_std__string_bool_delete_(
    std::map<std::string, bool> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, Bool}, map2::STL.StdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, Bool}}, Ptr{STL.StdMap{STL.RefStdString, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_bool_equals(
    const std::map<std::string, bool> * restrict map1,
    const std::map<std::string, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Bool}, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool>::const_iterator std_map_std__string_bool_cbegin(
    const std::map<std::string, bool> * restrict map
) {
    using MI = std::map<std::string, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Bool}, (Ptr{STL.StdMap{STL.RefStdString, Bool}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool>::const_iterator std_map_std__string_bool_cend(
    const std::map<std::string, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{Bool}}, (STL.StdMapIterator{STL.RefStdString, Bool},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(Bool, res[2]))::Pair{STL.RefStdString, Bool}
end
*/
extern "C" const std::pair<std::string const *, bool const *> std_map_std__string_bool_const_iterator_getindex(
    std::map<std::string, bool>::const_iterator iter
) {
    using P = std::pair<std::string const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Bool}, (STL.StdMapIterator{STL.RefStdString, Bool},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool>::const_iterator std_map_std__string_bool_const_iterator_inc(
    std::map<std::string, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Bool}, (STL.StdMapIterator{STL.RefStdString, Bool},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Bool}
end
*/
extern "C" std::map<std::string, bool>::const_iterator std_map_std__string_bool_const_iterator_dec(
    std::map<std::string, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, Bool}, iter2::STL.StdMapIterator{STL.RefStdString, Bool})
    res = ccall(("std_map_std__string_bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, Bool}, STL.StdMapIterator{STL.RefStdString, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_bool_const_iterator_equals(
    std::map<std::string, bool>::const_iterator iter1,
    std::map<std::string, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{Float64})
    res = ccall(("std_map_std__string_double_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Float64}}, ())
    return RefStdMap{STL.RefStdString, Float64}(res)::STL.RefStdMap{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double> * std_map_std__string_double_new(
    
) {
    return new std::map<std::string, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_double_delete(
    std::map<std::string, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Float64}}, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), map)
    return RefStdMap{STL.RefStdString, Float64}(res)::STL.RefStdMap{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double> * std_map_std__string_double_copy(
    const std::map<std::string, double> * restrict map
) {
    return new std::map<std::string, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_double_construct(
    void * ptr
) {
    using M = std::map<std::string, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_double_destruct(
    std::map<std::string, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, Float64}, vec::STL.GCStdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{STL.StdMap{STL.RefStdString, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_double_copy_construct(
    std::map<std::string, double> * restrict ptr,
    const std::map<std::string, double> * restrict vec
) {
    new(ptr) std::map<std::string, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__string_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, double>>;
*res = std::make_shared<std::map<std::string, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__string_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_double_placement_delete(
    std::shared_ptr<std::map<std::string, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, Float64}, vec::STL.SharedStdMap{STL.RefStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__string_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_double_placement_copy(
    void * ptr,
    const std::map<std::string, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, double>>;
*res = std::make_shared<std::map<std::string, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__string_double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, double> * std_shared_ptr_std_map_std__string_double_get(
    std::shared_ptr<std::map<std::string, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_double_length(
    const std::map<std::string, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, Float64}, key::Any)
    res = ccall(("std_map_std__string_double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_double_haskey(
    const std::map<std::string, double> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, Float64}, key::Any)
    res = ccall(("std_map_std__string_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_std__string_double_getindex(
    std::map<std::string, double> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{Float64}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_double_setindex_(
    std::map<std::string, double> * restrict map,
    double const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, Float64}, key::Any)
    res = ccall(("std_map_std__string_double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, Float64}
end
*/
extern "C" void std_map_std__string_double_delete_(
    std::map<std::string, double> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, Float64}, map2::STL.StdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, Float64}}, Ptr{STL.StdMap{STL.RefStdString, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_double_equals(
    const std::map<std::string, double> * restrict map1,
    const std::map<std::string, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Float64}, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double>::const_iterator std_map_std__string_double_cbegin(
    const std::map<std::string, double> * restrict map
) {
    using MI = std::map<std::string, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Float64}, (Ptr{STL.StdMap{STL.RefStdString, Float64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double>::const_iterator std_map_std__string_double_cend(
    const std::map<std::string, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{Float64}}, (STL.StdMapIterator{STL.RefStdString, Float64},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(Float64, res[2]))::Pair{STL.RefStdString, Float64}
end
*/
extern "C" const std::pair<std::string const *, double const *> std_map_std__string_double_const_iterator_getindex(
    std::map<std::string, double>::const_iterator iter
) {
    using P = std::pair<std::string const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Float64}, (STL.StdMapIterator{STL.RefStdString, Float64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double>::const_iterator std_map_std__string_double_const_iterator_inc(
    std::map<std::string, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Float64}, (STL.StdMapIterator{STL.RefStdString, Float64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Float64}
end
*/
extern "C" std::map<std::string, double>::const_iterator std_map_std__string_double_const_iterator_dec(
    std::map<std::string, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, Float64}, iter2::STL.StdMapIterator{STL.RefStdString, Float64})
    res = ccall(("std_map_std__string_double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, Float64}, STL.StdMapIterator{STL.RefStdString, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_double_const_iterator_equals(
    std::map<std::string, double>::const_iterator iter1,
    std::map<std::string, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{Int64})
    res = ccall(("std_map_std__string_int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Int64}}, ())
    return RefStdMap{STL.RefStdString, Int64}(res)::STL.RefStdMap{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t> * std_map_std__string_int64_t_new(
    
) {
    return new std::map<std::string, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int64_t_delete(
    std::map<std::string, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Int64}}, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), map)
    return RefStdMap{STL.RefStdString, Int64}(res)::STL.RefStdMap{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t> * std_map_std__string_int64_t_copy(
    const std::map<std::string, int64_t> * restrict map
) {
    return new std::map<std::string, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int64_t_construct(
    void * ptr
) {
    using M = std::map<std::string, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int64_t_destruct(
    std::map<std::string, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, Int64}, vec::STL.GCStdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{STL.StdMap{STL.RefStdString, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int64_t_copy_construct(
    std::map<std::string, int64_t> * restrict ptr,
    const std::map<std::string, int64_t> * restrict vec
) {
    new(ptr) std::map<std::string, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__string_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, int64_t>>;
*res = std::make_shared<std::map<std::string, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__string_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int64_t_placement_delete(
    std::shared_ptr<std::map<std::string, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, Int64}, vec::STL.SharedStdMap{STL.RefStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__string_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int64_t_placement_copy(
    void * ptr,
    const std::map<std::string, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, int64_t>>;
*res = std::make_shared<std::map<std::string, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__string_int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, int64_t> * std_shared_ptr_std_map_std__string_int64_t_get(
    std::shared_ptr<std::map<std::string, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_int64_t_length(
    const std::map<std::string, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, Int64}, key::Any)
    res = ccall(("std_map_std__string_int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_int64_t_haskey(
    const std::map<std::string, int64_t> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, Int64}, key::Any)
    res = ccall(("std_map_std__string_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_std__string_int64_t_getindex(
    std::map<std::string, int64_t> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{Int64}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int64_t_setindex_(
    std::map<std::string, int64_t> * restrict map,
    int64_t const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, Int64}, key::Any)
    res = ccall(("std_map_std__string_int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, Int64}
end
*/
extern "C" void std_map_std__string_int64_t_delete_(
    std::map<std::string, int64_t> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, Int64}, map2::STL.StdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, Int64}}, Ptr{STL.StdMap{STL.RefStdString, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_int64_t_equals(
    const std::map<std::string, int64_t> * restrict map1,
    const std::map<std::string, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int64}, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t>::const_iterator std_map_std__string_int64_t_cbegin(
    const std::map<std::string, int64_t> * restrict map
) {
    using MI = std::map<std::string, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int64}, (Ptr{STL.StdMap{STL.RefStdString, Int64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t>::const_iterator std_map_std__string_int64_t_cend(
    const std::map<std::string, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{Int64}}, (STL.StdMapIterator{STL.RefStdString, Int64},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(Int64, res[2]))::Pair{STL.RefStdString, Int64}
end
*/
extern "C" const std::pair<std::string const *, int64_t const *> std_map_std__string_int64_t_const_iterator_getindex(
    std::map<std::string, int64_t>::const_iterator iter
) {
    using P = std::pair<std::string const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int64}, (STL.StdMapIterator{STL.RefStdString, Int64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t>::const_iterator std_map_std__string_int64_t_const_iterator_inc(
    std::map<std::string, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int64}, (STL.StdMapIterator{STL.RefStdString, Int64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Int64}
end
*/
extern "C" std::map<std::string, int64_t>::const_iterator std_map_std__string_int64_t_const_iterator_dec(
    std::map<std::string, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, Int64}, iter2::STL.StdMapIterator{STL.RefStdString, Int64})
    res = ccall(("std_map_std__string_int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, Int64}, STL.StdMapIterator{STL.RefStdString, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_int64_t_const_iterator_equals(
    std::map<std::string, int64_t>::const_iterator iter1,
    std::map<std::string, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{Int8})
    res = ccall(("std_map_std__string_int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Int8}}, ())
    return RefStdMap{STL.RefStdString, Int8}(res)::STL.RefStdMap{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t> * std_map_std__string_int8_t_new(
    
) {
    return new std::map<std::string, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int8_t_delete(
    std::map<std::string, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Int8}}, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), map)
    return RefStdMap{STL.RefStdString, Int8}(res)::STL.RefStdMap{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t> * std_map_std__string_int8_t_copy(
    const std::map<std::string, int8_t> * restrict map
) {
    return new std::map<std::string, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int8_t_construct(
    void * ptr
) {
    using M = std::map<std::string, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int8_t_destruct(
    std::map<std::string, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, Int8}, vec::STL.GCStdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{STL.StdMap{STL.RefStdString, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int8_t_copy_construct(
    std::map<std::string, int8_t> * restrict ptr,
    const std::map<std::string, int8_t> * restrict vec
) {
    new(ptr) std::map<std::string, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__string_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, int8_t>>;
*res = std::make_shared<std::map<std::string, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__string_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int8_t_placement_delete(
    std::shared_ptr<std::map<std::string, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, Int8}, vec::STL.SharedStdMap{STL.RefStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__string_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_int8_t_placement_copy(
    void * ptr,
    const std::map<std::string, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, int8_t>>;
*res = std::make_shared<std::map<std::string, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__string_int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, int8_t> * std_shared_ptr_std_map_std__string_int8_t_get(
    std::shared_ptr<std::map<std::string, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_int8_t_length(
    const std::map<std::string, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, Int8}, key::Any)
    res = ccall(("std_map_std__string_int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_int8_t_haskey(
    const std::map<std::string, int8_t> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, Int8}, key::Any)
    res = ccall(("std_map_std__string_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_std__string_int8_t_getindex(
    std::map<std::string, int8_t> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{Int8}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_int8_t_setindex_(
    std::map<std::string, int8_t> * restrict map,
    int8_t const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, Int8}, key::Any)
    res = ccall(("std_map_std__string_int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, Int8}
end
*/
extern "C" void std_map_std__string_int8_t_delete_(
    std::map<std::string, int8_t> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, Int8}, map2::STL.StdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, Int8}}, Ptr{STL.StdMap{STL.RefStdString, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_int8_t_equals(
    const std::map<std::string, int8_t> * restrict map1,
    const std::map<std::string, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int8}, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t>::const_iterator std_map_std__string_int8_t_cbegin(
    const std::map<std::string, int8_t> * restrict map
) {
    using MI = std::map<std::string, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int8}, (Ptr{STL.StdMap{STL.RefStdString, Int8}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t>::const_iterator std_map_std__string_int8_t_cend(
    const std::map<std::string, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{Int8}}, (STL.StdMapIterator{STL.RefStdString, Int8},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(Int8, res[2]))::Pair{STL.RefStdString, Int8}
end
*/
extern "C" const std::pair<std::string const *, int8_t const *> std_map_std__string_int8_t_const_iterator_getindex(
    std::map<std::string, int8_t>::const_iterator iter
) {
    using P = std::pair<std::string const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int8}, (STL.StdMapIterator{STL.RefStdString, Int8},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t>::const_iterator std_map_std__string_int8_t_const_iterator_inc(
    std::map<std::string, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Int8}, (STL.StdMapIterator{STL.RefStdString, Int8},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Int8}
end
*/
extern "C" std::map<std::string, int8_t>::const_iterator std_map_std__string_int8_t_const_iterator_dec(
    std::map<std::string, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, Int8}, iter2::STL.StdMapIterator{STL.RefStdString, Int8})
    res = ccall(("std_map_std__string_int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, Int8}, STL.StdMapIterator{STL.RefStdString, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_int8_t_const_iterator_equals(
    std::map<std::string, int8_t>::const_iterator iter1,
    std::map<std::string, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, ())
    return RefStdMap{STL.RefStdString, Ptr{Nothing}}(res)::STL.RefStdMap{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *> * std_map_std__string_void___new(
    
) {
    return new std::map<std::string, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_void___delete(
    std::map<std::string, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), map)
    return RefStdMap{STL.RefStdString, Ptr{Nothing}}(res)::STL.RefStdMap{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *> * std_map_std__string_void___copy(
    const std::map<std::string, void *> * restrict map
) {
    return new std::map<std::string, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_void___construct(
    void * ptr
) {
    using M = std::map<std::string, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_void___destruct(
    std::map<std::string, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, Ptr{Nothing}}, vec::STL.GCStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_void___copy_construct(
    std::map<std::string, void *> * restrict ptr,
    const std::map<std::string, void *> * restrict vec
) {
    new(ptr) std::map<std::string, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__string_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, void *>>;
*res = std::make_shared<std::map<std::string, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__string_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_void___placement_delete(
    std::shared_ptr<std::map<std::string, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, Ptr{Nothing}}, vec::STL.SharedStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__string_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_void___placement_copy(
    void * ptr,
    const std::map<std::string, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, void *>>;
*res = std::make_shared<std::map<std::string, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__string_void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, void *> * std_shared_ptr_std_map_std__string_void___get(
    std::shared_ptr<std::map<std::string, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_void___length(
    const std::map<std::string, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__string_void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_void___haskey(
    const std::map<std::string, void *> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__string_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_std__string_void___getindex(
    std::map<std::string, void *> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_void___setindex_(
    std::map<std::string, void *> * restrict map,
    void * const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__string_void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" void std_map_std__string_void___delete_(
    std::map<std::string, void *> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, Ptr{Nothing}}, map2::STL.StdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}, Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_void___equals(
    const std::map<std::string, void *> * restrict map1,
    const std::map<std::string, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *>::const_iterator std_map_std__string_void___cbegin(
    const std::map<std::string, void *> * restrict map
) {
    using MI = std::map<std::string, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, (Ptr{STL.StdMap{STL.RefStdString, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *>::const_iterator std_map_std__string_void___cend(
    const std::map<std::string, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" const std::pair<std::string const *, void * const *> std_map_std__string_void___const_iterator_getindex(
    std::map<std::string, void *>::const_iterator iter
) {
    using P = std::pair<std::string const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, (STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *>::const_iterator std_map_std__string_void___const_iterator_inc(
    std::map<std::string, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, (STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::string, void *>::const_iterator std_map_std__string_void___const_iterator_dec(
    std::map<std::string, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, iter2::STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__string_void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}, STL.StdMapIterator{STL.RefStdString, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_void___const_iterator_equals(
    std::map<std::string, void *>::const_iterator iter1,
    std::map<std::string, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, ())
    return RefStdMap{STL.RefStdString, STL.RefStdString}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string> * std_map_std__string_std__string_new(
    
) {
    return new std::map<std::string, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__string_delete(
    std::map<std::string, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), map)
    return RefStdMap{STL.RefStdString, STL.RefStdString}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string> * std_map_std__string_std__string_copy(
    const std::map<std::string, std::string> * restrict map
) {
    return new std::map<std::string, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__string_construct(
    void * ptr
) {
    using M = std::map<std::string, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__string_destruct(
    std::map<std::string, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdString}, vec::STL.GCStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__string_copy_construct(
    std::map<std::string, std::string> * restrict ptr,
    const std::map<std::string, std::string> * restrict vec
) {
    new(ptr) std::map<std::string, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::string>>;
*res = std::make_shared<std::map<std::string, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__string_placement_delete(
    std::shared_ptr<std::map<std::string, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdString}, vec::STL.SharedStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__string_placement_copy(
    void * ptr,
    const std::map<std::string, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::string>>;
*res = std::make_shared<std::map<std::string, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::string> * std_shared_ptr_std_map_std__string_std__string_get(
    std::shared_ptr<std::map<std::string, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__string_length(
    const std::map<std::string, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__string_std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__string_haskey(
    const std::map<std::string, std::string> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__string_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_std__string_std__string_getindex(
    std::map<std::string, std::string> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__string_setindex_(
    std::map<std::string, std::string> * restrict map,
    std::string const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__string_std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" void std_map_std__string_std__string_delete_(
    std::map<std::string, std::string> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.RefStdString}, map2::STL.StdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__string_equals(
    const std::map<std::string, std::string> * restrict map1,
    const std::map<std::string, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string>::const_iterator std_map_std__string_std__string_cbegin(
    const std::map<std::string, std::string> * restrict map
) {
    using MI = std::map<std::string, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string>::const_iterator std_map_std__string_std__string_cend(
    const std::map<std::string, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdString},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" const std::pair<std::string const *, std::string const *> std_map_std__string_std__string_const_iterator_getindex(
    std::map<std::string, std::string>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string>::const_iterator std_map_std__string_std__string_const_iterator_inc(
    std::map<std::string, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::string, std::string>::const_iterator std_map_std__string_std__string_const_iterator_dec(
    std::map<std::string, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, iter2::STL.StdMapIterator{STL.RefStdString, STL.RefStdString})
    res = ccall(("std_map_std__string_std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.RefStdString}, STL.StdMapIterator{STL.RefStdString, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__string_const_iterator_equals(
    std::map<std::string, std::string>::const_iterator iter1,
    std::map<std::string, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>> * std_map_std__string_std__vector_std__string__new(
    
) {
    return new std::map<std::string, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__string__delete(
    std::map<std::string, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>> * std_map_std__string_std__vector_std__string__copy(
    const std::map<std::string, std::vector<std::string>> * restrict map
) {
    return new std::map<std::string, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<std::string, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__string__destruct(
    std::map<std::string, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__string__copy_construct(
    std::map<std::string, std::vector<std::string>> * restrict ptr,
    const std::map<std::string, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<std::string, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::vector<std::string>>>;
*res = std::make_shared<std::map<std::string, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<std::string, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<std::string, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::vector<std::string>>>;
*res = std::make_shared<std::map<std::string, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::vector<std::string>> * std_shared_ptr_std_map_std__string_std__vector_std__string__get(
    std::shared_ptr<std::map<std::string, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__vector_std__string__length(
    const std::map<std::string, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__vector_std__string__haskey(
    const std::map<std::string, std::vector<std::string>> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_std__string_std__vector_std__string__getindex(
    std::map<std::string, std::vector<std::string>> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__string__setindex_(
    std::map<std::string, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_std__string_std__vector_std__string__delete_(
    std::map<std::string, std::vector<std::string>> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__vector_std__string__equals(
    const std::map<std::string, std::vector<std::string>> * restrict map1,
    const std::map<std::string, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>>::const_iterator std_map_std__string_std__vector_std__string__cbegin(
    const std::map<std::string, std::vector<std::string>> * restrict map
) {
    using MI = std::map<std::string, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>>::const_iterator std_map_std__string_std__vector_std__string__cend(
    const std::map<std::string, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<std::string const *, std::vector<std::string> const *> std_map_std__string_std__vector_std__string__const_iterator_getindex(
    std::map<std::string, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>>::const_iterator std_map_std__string_std__vector_std__string__const_iterator_inc(
    std::map<std::string, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::string>>::const_iterator std_map_std__string_std__vector_std__string__const_iterator_dec(
    std::map<std::string, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__vector_std__string__const_iterator_equals(
    std::map<std::string, std::vector<std::string>>::const_iterator iter1,
    std::map<std::string, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>> * std_map_std__string_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<std::string, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___delete(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>> * std_map_std__string_std__vector_std__shared_ptr_std__string___copy(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<std::string, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<std::string, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___destruct(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<std::string, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<std::string, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<std::string, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<std::string, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_std__string_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<std::string, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__vector_std__shared_ptr_std__string___length(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__vector_std__shared_ptr_std__string___haskey(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_std__string_std__vector_std__shared_ptr_std__string___getindex(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___setindex_(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_std__string_std__vector_std__shared_ptr_std__string___delete_(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__vector_std__shared_ptr_std__string___equals(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__string_std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__string_std__vector_std__shared_ptr_std__string___cend(
    const std::map<std::string, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<std::string const *, std::vector<std::shared_ptr<std::string>> const *> std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{STL.RefStdString, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<std::string, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, ())
    return RefStdMap{STL.RefStdString, STL.SharedStdString}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>> * std_map_std__string_std__shared_ptr_std__string__new(
    
) {
    return new std::map<std::string, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__delete(
    std::map<std::string, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), map)
    return RefStdMap{STL.RefStdString, STL.SharedStdString}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>> * std_map_std__string_std__shared_ptr_std__string__copy(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<std::string, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<std::string, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__destruct(
    std::map<std::string, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdString}, vec::STL.GCStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__copy_construct(
    std::map<std::string, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<std::string, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<std::string, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdString}, vec::STL.SharedStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<std::string, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>> * std_shared_ptr_std_map_std__string_std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__string__length(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__string__haskey(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_std__string_std__shared_ptr_std__string__getindex(
    std::map<std::string, std::shared_ptr<std::string>> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__setindex_(
    std::map<std::string, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__string__delete_(
    std::map<std::string, std::shared_ptr<std::string>> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.SharedStdString}, map2::STL.StdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__string__equals(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map1,
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>>::const_iterator std_map_std__string_std__shared_ptr_std__string__cbegin(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<std::string, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>>::const_iterator std_map_std__string_std__shared_ptr_std__string__cend(
    const std::map<std::string, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdString},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" const std::pair<std::string const *, std::shared_ptr<std::string> const *> std_map_std__string_std__shared_ptr_std__string__const_iterator_getindex(
    std::map<std::string, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>>::const_iterator std_map_std__string_std__shared_ptr_std__string__const_iterator_inc(
    std::map<std::string, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::string>>::const_iterator std_map_std__string_std__shared_ptr_std__string__const_iterator_dec(
    std::map<std::string, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, iter2::STL.StdMapIterator{STL.RefStdString, STL.SharedStdString})
    res = ccall(("std_map_std__string_std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}, STL.StdMapIterator{STL.RefStdString, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__string__const_iterator_equals(
    std::map<std::string, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<std::string, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>> * std_map_std__string_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<std::string, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___delete(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>> * std_map_std__string_std__shared_ptr_std__vector_std__string___copy(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<std::string, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<std::string, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___destruct(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<std::string, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__vector_std__string___length(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__vector_std__string___haskey(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_std__string_std__shared_ptr_std__vector_std__string___getindex(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___setindex_(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__string___delete_(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__vector_std__string___equals(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__string___cend(
    const std::map<std::string, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<std::string const *, std::shared_ptr<std::vector<std::string>> const *> std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<std::string, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<std::string const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<std::string const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{STL.RefStdString, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<std::string, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.RefStdString}, valuetype::Type{UInt64})
    res = ccall(("std_map_std__string_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, UInt64}}, ())
    return RefStdMap{STL.RefStdString, UInt64}(res)::STL.RefStdMap{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t> * std_map_std__string_uint64_t_new(
    
) {
    return new std::map<std::string, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_uint64_t_delete(
    std::map<std::string, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.RefStdString, UInt64}}, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), map)
    return RefStdMap{STL.RefStdString, UInt64}(res)::STL.RefStdMap{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t> * std_map_std__string_uint64_t_copy(
    const std::map<std::string, uint64_t> * restrict map
) {
    return new std::map<std::string, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_uint64_t_construct(
    void * ptr
) {
    using M = std::map<std::string, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::string, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_uint64_t_destruct(
    std::map<std::string, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.RefStdString, UInt64}, vec::STL.GCStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{STL.StdMap{STL.RefStdString, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__string_uint64_t_copy_construct(
    std::map<std::string, uint64_t> * restrict ptr,
    const std::map<std::string, uint64_t> * restrict vec
) {
    new(ptr) std::map<std::string, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__string_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::string, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::string, uint64_t>>;
*res = std::make_shared<std::map<std::string, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__string_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_uint64_t_placement_delete(
    std::shared_ptr<std::map<std::string, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.RefStdString, UInt64}, vec::STL.SharedStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__string_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.RefStdString, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__string_uint64_t_placement_copy(
    void * ptr,
    const std::map<std::string, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::string, uint64_t>>;
*res = std::make_shared<std::map<std::string, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.RefStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__string_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::string, uint64_t> * std_shared_ptr_std_map_std__string_uint64_t_get(
    std::shared_ptr<std::map<std::string, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__string_uint64_t_length(
    const std::map<std::string, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.RefStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__string_uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__string_uint64_t_haskey(
    const std::map<std::string, uint64_t> * restrict map,
    std::string const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.RefStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__string_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_std__string_uint64_t_getindex(
    std::map<std::string, uint64_t> * restrict map,
    std::string const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.RefStdString, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_std__string_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{UInt64}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__string_uint64_t_setindex_(
    std::map<std::string, uint64_t> * restrict map,
    uint64_t const * elt,
    std::string const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.RefStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__string_uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{STL.RefStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, key)))
    return map::STL.StdMap{STL.RefStdString, UInt64}
end
*/
extern "C" void std_map_std__string_uint64_t_delete_(
    std::map<std::string, uint64_t> * restrict map,
    std::string const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.RefStdString, UInt64}, map2::STL.StdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.RefStdString, UInt64}}, Ptr{STL.StdMap{STL.RefStdString, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_uint64_t_equals(
    const std::map<std::string, uint64_t> * restrict map1,
    const std::map<std::string, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, UInt64}, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t>::const_iterator std_map_std__string_uint64_t_cbegin(
    const std::map<std::string, uint64_t> * restrict map
) {
    using MI = std::map<std::string, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, UInt64}, (Ptr{STL.StdMap{STL.RefStdString, UInt64}},), map)
    return res::STL.StdMapIterator{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t>::const_iterator std_map_std__string_uint64_t_cend(
    const std::map<std::string, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.RefStdString}, Ptr{UInt64}}, (STL.StdMapIterator{STL.RefStdString, UInt64},), iter)
    return (convert_result(STL.RefStdString, res[1]) => convert_result(UInt64, res[2]))::Pair{STL.RefStdString, UInt64}
end
*/
extern "C" const std::pair<std::string const *, uint64_t const *> std_map_std__string_uint64_t_const_iterator_getindex(
    std::map<std::string, uint64_t>::const_iterator iter
) {
    using P = std::pair<std::string const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::string const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, UInt64}, (STL.StdMapIterator{STL.RefStdString, UInt64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t>::const_iterator std_map_std__string_uint64_t_const_iterator_inc(
    std::map<std::string, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.RefStdString, UInt64}, (STL.StdMapIterator{STL.RefStdString, UInt64},), iter)
    return res::STL.StdMapIterator{STL.RefStdString, UInt64}
end
*/
extern "C" std::map<std::string, uint64_t>::const_iterator std_map_std__string_uint64_t_const_iterator_dec(
    std::map<std::string, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.RefStdString, UInt64}, iter2::STL.StdMapIterator{STL.RefStdString, UInt64})
    res = ccall(("std_map_std__string_uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.RefStdString, UInt64}, STL.StdMapIterator{STL.RefStdString, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__string_uint64_t_const_iterator_equals(
    std::map<std::string, uint64_t>::const_iterator iter1,
    std::map<std::string, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Bool}}, ())
    return RefStdMap{STL.SharedStdString, Bool}(res)::STL.RefStdMap{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool> * std_map_std__shared_ptr_std__string__bool_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_delete(
    std::map<std::shared_ptr<std::string>, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Bool}}, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), map)
    return RefStdMap{STL.SharedStdString, Bool}(res)::STL.RefStdMap{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool> * std_map_std__shared_ptr_std__string__bool_copy(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_destruct(
    std::map<std::shared_ptr<std::string>, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, Bool}, vec::STL.GCStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{STL.StdMap{STL.SharedStdString, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_copy_construct(
    std::map<std::shared_ptr<std::string>, bool> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, bool> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, bool>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Bool}, vec::STL.SharedStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__bool_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, bool>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, Bool})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool> * std_shared_ptr_std_map_std__shared_ptr_std__string__bool_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__bool_length(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, Bool}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__bool_haskey(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, Bool}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_std__shared_ptr_std__string__bool_getindex(
    std::map<std::shared_ptr<std::string>, bool> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{Bool}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_setindex_(
    std::map<std::shared_ptr<std::string>, bool> * restrict map,
    bool const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, Bool}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, Bool}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__bool_delete_(
    std::map<std::shared_ptr<std::string>, bool> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, Bool}, map2::STL.StdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, Bool}}, Ptr{STL.StdMap{STL.SharedStdString, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__bool_equals(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map1,
    const std::map<std::shared_ptr<std::string>, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Bool}, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool>::const_iterator std_map_std__shared_ptr_std__string__bool_cbegin(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Bool}, (Ptr{STL.StdMap{STL.SharedStdString, Bool}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool>::const_iterator std_map_std__shared_ptr_std__string__bool_cend(
    const std::map<std::shared_ptr<std::string>, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{Bool}}, (STL.StdMapIterator{STL.SharedStdString, Bool},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(Bool, res[2]))::Pair{STL.SharedStdString, Bool}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, bool const *> std_map_std__shared_ptr_std__string__bool_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, bool>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Bool}, (STL.StdMapIterator{STL.SharedStdString, Bool},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool>::const_iterator std_map_std__shared_ptr_std__string__bool_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Bool}, (STL.StdMapIterator{STL.SharedStdString, Bool},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Bool}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, bool>::const_iterator std_map_std__shared_ptr_std__string__bool_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, Bool}, iter2::STL.StdMapIterator{STL.SharedStdString, Bool})
    res = ccall(("std_map_std__shared_ptr_std__string__bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, Bool}, STL.StdMapIterator{STL.SharedStdString, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__bool_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, bool>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Float64}}, ())
    return RefStdMap{STL.SharedStdString, Float64}(res)::STL.RefStdMap{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double> * std_map_std__shared_ptr_std__string__double_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_delete(
    std::map<std::shared_ptr<std::string>, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Float64}}, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), map)
    return RefStdMap{STL.SharedStdString, Float64}(res)::STL.RefStdMap{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double> * std_map_std__shared_ptr_std__string__double_copy(
    const std::map<std::shared_ptr<std::string>, double> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_destruct(
    std::map<std::shared_ptr<std::string>, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, Float64}, vec::STL.GCStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{STL.StdMap{STL.SharedStdString, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_copy_construct(
    std::map<std::shared_ptr<std::string>, double> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, double> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, double>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Float64}, vec::STL.SharedStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__double_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, double>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, Float64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double> * std_shared_ptr_std_map_std__shared_ptr_std__string__double_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__double_length(
    const std::map<std::shared_ptr<std::string>, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, Float64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__double_haskey(
    const std::map<std::shared_ptr<std::string>, double> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, Float64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_std__shared_ptr_std__string__double_getindex(
    std::map<std::shared_ptr<std::string>, double> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{Float64}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_setindex_(
    std::map<std::shared_ptr<std::string>, double> * restrict map,
    double const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, Float64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, Float64}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__double_delete_(
    std::map<std::shared_ptr<std::string>, double> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, Float64}, map2::STL.StdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, Float64}}, Ptr{STL.StdMap{STL.SharedStdString, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__double_equals(
    const std::map<std::shared_ptr<std::string>, double> * restrict map1,
    const std::map<std::shared_ptr<std::string>, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Float64}, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double>::const_iterator std_map_std__shared_ptr_std__string__double_cbegin(
    const std::map<std::shared_ptr<std::string>, double> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Float64}, (Ptr{STL.StdMap{STL.SharedStdString, Float64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double>::const_iterator std_map_std__shared_ptr_std__string__double_cend(
    const std::map<std::shared_ptr<std::string>, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{Float64}}, (STL.StdMapIterator{STL.SharedStdString, Float64},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(Float64, res[2]))::Pair{STL.SharedStdString, Float64}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, double const *> std_map_std__shared_ptr_std__string__double_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, double>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Float64}, (STL.StdMapIterator{STL.SharedStdString, Float64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double>::const_iterator std_map_std__shared_ptr_std__string__double_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Float64}, (STL.StdMapIterator{STL.SharedStdString, Float64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Float64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, double>::const_iterator std_map_std__shared_ptr_std__string__double_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, Float64}, iter2::STL.StdMapIterator{STL.SharedStdString, Float64})
    res = ccall(("std_map_std__shared_ptr_std__string__double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, Float64}, STL.StdMapIterator{STL.SharedStdString, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__double_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, double>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Int64}}, ())
    return RefStdMap{STL.SharedStdString, Int64}(res)::STL.RefStdMap{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t> * std_map_std__shared_ptr_std__string__int64_t_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_delete(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Int64}}, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), map)
    return RefStdMap{STL.SharedStdString, Int64}(res)::STL.RefStdMap{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t> * std_map_std__shared_ptr_std__string__int64_t_copy(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_destruct(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, Int64}, vec::STL.GCStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{STL.StdMap{STL.SharedStdString, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_copy_construct(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, int64_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Int64}, vec::STL.SharedStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, int64_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, Int64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t> * std_shared_ptr_std_map_std__shared_ptr_std__string__int64_t_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__int64_t_length(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, Int64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__int64_t_haskey(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, Int64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_std__shared_ptr_std__string__int64_t_getindex(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{Int64}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_setindex_(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict map,
    int64_t const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, Int64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, Int64}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int64_t_delete_(
    std::map<std::shared_ptr<std::string>, int64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, Int64}, map2::STL.StdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, Int64}}, Ptr{STL.StdMap{STL.SharedStdString, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__int64_t_equals(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map1,
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int64}, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t>::const_iterator std_map_std__shared_ptr_std__string__int64_t_cbegin(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int64}, (Ptr{STL.StdMap{STL.SharedStdString, Int64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t>::const_iterator std_map_std__shared_ptr_std__string__int64_t_cend(
    const std::map<std::shared_ptr<std::string>, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{Int64}}, (STL.StdMapIterator{STL.SharedStdString, Int64},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(Int64, res[2]))::Pair{STL.SharedStdString, Int64}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, int64_t const *> std_map_std__shared_ptr_std__string__int64_t_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, int64_t>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int64}, (STL.StdMapIterator{STL.SharedStdString, Int64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t>::const_iterator std_map_std__shared_ptr_std__string__int64_t_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int64}, (STL.StdMapIterator{STL.SharedStdString, Int64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Int64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int64_t>::const_iterator std_map_std__shared_ptr_std__string__int64_t_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, Int64}, iter2::STL.StdMapIterator{STL.SharedStdString, Int64})
    res = ccall(("std_map_std__shared_ptr_std__string__int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, Int64}, STL.StdMapIterator{STL.SharedStdString, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__int64_t_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, int64_t>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Int8}}, ())
    return RefStdMap{STL.SharedStdString, Int8}(res)::STL.RefStdMap{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t> * std_map_std__shared_ptr_std__string__int8_t_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_delete(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Int8}}, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), map)
    return RefStdMap{STL.SharedStdString, Int8}(res)::STL.RefStdMap{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t> * std_map_std__shared_ptr_std__string__int8_t_copy(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_destruct(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, Int8}, vec::STL.GCStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{STL.StdMap{STL.SharedStdString, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_copy_construct(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, int8_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Int8}, vec::STL.SharedStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, int8_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, Int8})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t> * std_shared_ptr_std_map_std__shared_ptr_std__string__int8_t_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__int8_t_length(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, Int8}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__int8_t_haskey(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, Int8}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_std__shared_ptr_std__string__int8_t_getindex(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{Int8}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_setindex_(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict map,
    int8_t const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, Int8}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, Int8}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__int8_t_delete_(
    std::map<std::shared_ptr<std::string>, int8_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, Int8}, map2::STL.StdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, Int8}}, Ptr{STL.StdMap{STL.SharedStdString, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__int8_t_equals(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map1,
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int8}, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t>::const_iterator std_map_std__shared_ptr_std__string__int8_t_cbegin(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int8}, (Ptr{STL.StdMap{STL.SharedStdString, Int8}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t>::const_iterator std_map_std__shared_ptr_std__string__int8_t_cend(
    const std::map<std::shared_ptr<std::string>, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{Int8}}, (STL.StdMapIterator{STL.SharedStdString, Int8},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(Int8, res[2]))::Pair{STL.SharedStdString, Int8}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, int8_t const *> std_map_std__shared_ptr_std__string__int8_t_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, int8_t>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int8}, (STL.StdMapIterator{STL.SharedStdString, Int8},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t>::const_iterator std_map_std__shared_ptr_std__string__int8_t_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Int8}, (STL.StdMapIterator{STL.SharedStdString, Int8},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Int8}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, int8_t>::const_iterator std_map_std__shared_ptr_std__string__int8_t_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, Int8}, iter2::STL.StdMapIterator{STL.SharedStdString, Int8})
    res = ccall(("std_map_std__shared_ptr_std__string__int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, Int8}, STL.StdMapIterator{STL.SharedStdString, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__int8_t_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, int8_t>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, ())
    return RefStdMap{STL.SharedStdString, Ptr{Nothing}}(res)::STL.RefStdMap{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *> * std_map_std__shared_ptr_std__string__void___new(
    
) {
    return new std::map<std::shared_ptr<std::string>, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___delete(
    std::map<std::shared_ptr<std::string>, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), map)
    return RefStdMap{STL.SharedStdString, Ptr{Nothing}}(res)::STL.RefStdMap{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *> * std_map_std__shared_ptr_std__string__void___copy(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___destruct(
    std::map<std::shared_ptr<std::string>, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, Ptr{Nothing}}, vec::STL.GCStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___copy_construct(
    std::map<std::shared_ptr<std::string>, void *> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, void *> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, void *>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, Ptr{Nothing}}, vec::STL.SharedStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__void___placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, void *>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *> * std_shared_ptr_std_map_std__shared_ptr_std__string__void___get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__void___length(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__void___haskey(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_std__shared_ptr_std__string__void___getindex(
    std::map<std::shared_ptr<std::string>, void *> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___setindex_(
    std::map<std::shared_ptr<std::string>, void *> * restrict map,
    void * const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__void___delete_(
    std::map<std::shared_ptr<std::string>, void *> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, Ptr{Nothing}}, map2::STL.StdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}, Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__void___equals(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map1,
    const std::map<std::shared_ptr<std::string>, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *>::const_iterator std_map_std__shared_ptr_std__string__void___cbegin(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, (Ptr{STL.StdMap{STL.SharedStdString, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *>::const_iterator std_map_std__shared_ptr_std__string__void___cend(
    const std::map<std::shared_ptr<std::string>, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, void * const *> std_map_std__shared_ptr_std__string__void___const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, void *>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, (STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *>::const_iterator std_map_std__shared_ptr_std__string__void___const_iterator_inc(
    std::map<std::shared_ptr<std::string>, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, (STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, void *>::const_iterator std_map_std__shared_ptr_std__string__void___const_iterator_dec(
    std::map<std::shared_ptr<std::string>, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, iter2::STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}})
    res = ccall(("std_map_std__shared_ptr_std__string__void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}, STL.StdMapIterator{STL.SharedStdString, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__void___const_iterator_equals(
    std::map<std::shared_ptr<std::string>, void *>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, ())
    return RefStdMap{STL.SharedStdString, STL.RefStdString}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string> * std_map_std__shared_ptr_std__string__std__string_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_delete(
    std::map<std::shared_ptr<std::string>, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), map)
    return RefStdMap{STL.SharedStdString, STL.RefStdString}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string> * std_map_std__shared_ptr_std__string__std__string_copy(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_destruct(
    std::map<std::shared_ptr<std::string>, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdString}, vec::STL.GCStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_copy_construct(
    std::map<std::shared_ptr<std::string>, std::string> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::string> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::string>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdString}, vec::STL.SharedStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::string>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__string_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__string_length(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__string_haskey(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_std__shared_ptr_std__string__std__string_getindex(
    std::map<std::shared_ptr<std::string>, std::string> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_setindex_(
    std::map<std::shared_ptr<std::string>, std::string> * restrict map,
    std::string const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.RefStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__string_delete_(
    std::map<std::shared_ptr<std::string>, std::string> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.RefStdString}, map2::STL.StdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__string_equals(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string>::const_iterator std_map_std__shared_ptr_std__string__std__string_cbegin(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string>::const_iterator std_map_std__shared_ptr_std__string__std__string_cend(
    const std::map<std::shared_ptr<std::string>, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdString},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::string const *> std_map_std__shared_ptr_std__string__std__string_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::string>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string>::const_iterator std_map_std__shared_ptr_std__string__std__string_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::string>::const_iterator std_map_std__shared_ptr_std__string__std__string_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.RefStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}, STL.StdMapIterator{STL.SharedStdString, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__string_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::string>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>> * std_map_std__shared_ptr_std__string__std__vector_std__string__new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__delete(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>> * std_map_std__shared_ptr_std__string__std__vector_std__string__copy(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__destruct(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__copy_construct(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::string>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::string>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__string__get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__vector_std__string__length(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__vector_std__string__haskey(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_std__shared_ptr_std__string__std__vector_std__string__getindex(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__setindex_(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__string__delete_(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__vector_std__string__equals(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__string__cbegin(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__string__cend(
    const std::map<std::shared_ptr<std::string>, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::vector<std::string> const *> std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__vector_std__string__const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___delete(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___copy(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___destruct(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___length(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___haskey(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___getindex(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___setindex_(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___delete_(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___equals(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___cend(
    const std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::vector<std::shared_ptr<std::string>> const *> std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{STL.SharedStdString, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, ())
    return RefStdMap{STL.SharedStdString, STL.SharedStdString}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__delete(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), map)
    return RefStdMap{STL.SharedStdString, STL.SharedStdString}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__copy(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__destruct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdString}, vec::STL.GCStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__copy_construct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdString}, vec::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__length(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__haskey(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__setindex_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__delete_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.SharedStdString}, map2::STL.StdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__equals(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__cbegin(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__cend(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::string> const *> std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}, STL.StdMapIterator{STL.SharedStdString, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__string__const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___delete(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___copy(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___destruct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___length(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___haskey(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___setindex_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___delete_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___equals(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___cend(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::string>> const *> std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{STL.SharedStdString, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{STL.SharedStdString}, valuetype::Type{UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, ())
    return RefStdMap{STL.SharedStdString, UInt64}(res)::STL.RefStdMap{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t> * std_map_std__shared_ptr_std__string__uint64_t_new(
    
) {
    return new std::map<std::shared_ptr<std::string>, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_delete(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), map)
    return RefStdMap{STL.SharedStdString, UInt64}(res)::STL.RefStdMap{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t> * std_map_std__shared_ptr_std__string__uint64_t_copy(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map
) {
    return new std::map<std::shared_ptr<std::string>, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_construct(
    void * ptr
) {
    using M = std::map<std::shared_ptr<std::string>, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<std::shared_ptr<std::string>, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_destruct(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{STL.SharedStdString, UInt64}, vec::STL.GCStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{STL.StdMap{STL.SharedStdString, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_copy_construct(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict ptr,
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict vec
) {
    new(ptr) std::map<std::shared_ptr<std::string>, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<std::shared_ptr<std::string>, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, uint64_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_delete(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{STL.SharedStdString, UInt64}, vec::STL.SharedStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{STL.SharedStdString, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_placement_copy(
    void * ptr,
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<std::shared_ptr<std::string>, uint64_t>>;
*res = std::make_shared<std::map<std::shared_ptr<std::string>, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t> * std_shared_ptr_std_map_std__shared_ptr_std__string__uint64_t_get(
    std::shared_ptr<std::map<std::shared_ptr<std::string>, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__uint64_t_length(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{STL.SharedStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_std__shared_ptr_std__string__uint64_t_haskey(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{STL.SharedStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_std__shared_ptr_std__string__uint64_t_getindex(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{STL.SharedStdString, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{UInt64}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return res::Nothing
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_setindex_(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict map,
    uint64_t const * elt,
    std::shared_ptr<std::string> const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{STL.SharedStdString, UInt64}, key::Any)
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{STL.SharedStdString}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, key)))
    return map::STL.StdMap{STL.SharedStdString, UInt64}
end
*/
extern "C" void std_map_std__shared_ptr_std__string__uint64_t_delete_(
    std::map<std::shared_ptr<std::string>, uint64_t> * restrict map,
    std::shared_ptr<std::string> const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{STL.SharedStdString, UInt64}, map2::STL.StdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}}, Ptr{STL.StdMap{STL.SharedStdString, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__uint64_t_equals(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map1,
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, UInt64}, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator std_map_std__shared_ptr_std__string__uint64_t_cbegin(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map
) {
    using MI = std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, UInt64}, (Ptr{STL.StdMap{STL.SharedStdString, UInt64}},), map)
    return res::STL.StdMapIterator{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator std_map_std__shared_ptr_std__string__uint64_t_cend(
    const std::map<std::shared_ptr<std::string>, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{STL.SharedStdString}, Ptr{UInt64}}, (STL.StdMapIterator{STL.SharedStdString, UInt64},), iter)
    return (convert_result(STL.SharedStdString, res[1]) => convert_result(UInt64, res[2]))::Pair{STL.SharedStdString, UInt64}
end
*/
extern "C" const std::pair<std::shared_ptr<std::string> const *, uint64_t const *> std_map_std__shared_ptr_std__string__uint64_t_const_iterator_getindex(
    std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator iter
) {
    using P = std::pair<std::shared_ptr<std::string> const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<std::shared_ptr<std::string> const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, UInt64}, (STL.StdMapIterator{STL.SharedStdString, UInt64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator std_map_std__shared_ptr_std__string__uint64_t_const_iterator_inc(
    std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{STL.SharedStdString, UInt64}, (STL.StdMapIterator{STL.SharedStdString, UInt64},), iter)
    return res::STL.StdMapIterator{STL.SharedStdString, UInt64}
end
*/
extern "C" std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator std_map_std__shared_ptr_std__string__uint64_t_const_iterator_dec(
    std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{STL.SharedStdString, UInt64}, iter2::STL.StdMapIterator{STL.SharedStdString, UInt64})
    res = ccall(("std_map_std__shared_ptr_std__string__uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{STL.SharedStdString, UInt64}, STL.StdMapIterator{STL.SharedStdString, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_std__shared_ptr_std__string__uint64_t_const_iterator_equals(
    std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator iter1,
    std::map<std::shared_ptr<std::string>, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{Bool})
    res = ccall(("std_map_uint64_t_bool_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Bool}}, ())
    return RefStdMap{UInt64, Bool}(res)::STL.RefStdMap{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool> * std_map_uint64_t_bool_new(
    
) {
    return new std::map<uint64_t, bool>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_bool_delete(
    std::map<uint64_t, bool> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Bool}}, (Ptr{STL.StdMap{UInt64, Bool}},), map)
    return RefStdMap{UInt64, Bool}(res)::STL.RefStdMap{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool> * std_map_uint64_t_bool_copy(
    const std::map<uint64_t, bool> * restrict map
) {
    return new std::map<uint64_t, bool>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_bool_construct(
    void * ptr
) {
    using M = std::map<uint64_t, bool>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, bool>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_bool_destruct(
    std::map<uint64_t, bool> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, Bool}, vec::STL.GCStdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{STL.StdMap{UInt64, Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_bool_copy_construct(
    std::map<uint64_t, bool> * restrict ptr,
    const std::map<uint64_t, bool> * restrict vec
) {
    new(ptr) std::map<uint64_t, bool>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, Bool})
    res = ccall(("std_shared_ptr_std_map_uint64_t_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_bool_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, bool>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, bool>>;
*res = std::make_shared<std::map<uint64_t, bool>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, Bool})
    res = ccall(("std_shared_ptr_std_map_uint64_t_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_bool_placement_delete(
    std::shared_ptr<std::map<uint64_t, bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, Bool}, vec::STL.SharedStdMap{UInt64, Bool})
    res = ccall(("std_shared_ptr_std_map_uint64_t_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_bool_placement_copy(
    void * ptr,
    const std::map<uint64_t, bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, bool>>;
*res = std::make_shared<std::map<uint64_t, bool>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, Bool})
    res = ccall(("std_shared_ptr_std_map_uint64_t_bool_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, bool> * std_shared_ptr_std_map_uint64_t_bool_get(
    std::shared_ptr<std::map<uint64_t, bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Bool}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_bool_length(
    const std::map<uint64_t, bool> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, Bool}, key::Any)
    res = ccall(("std_map_uint64_t_bool_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_bool_haskey(
    const std::map<uint64_t, bool> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, Bool}, key::Any)
    res = ccall(("std_map_uint64_t_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_map_uint64_t_bool_getindex(
    std::map<uint64_t, bool> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, Bool}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{Bool}, Ptr{UInt64}), map, convert_arg(Ptr{Bool}, convert(Bool, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_bool_setindex_(
    std::map<uint64_t, bool> * restrict map,
    bool const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, Bool}, key::Any)
    res = ccall(("std_map_uint64_t_bool_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, Bool}
end
*/
extern "C" void std_map_uint64_t_bool_delete_(
    std::map<uint64_t, bool> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, Bool}, map2::STL.StdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, Bool}}, Ptr{STL.StdMap{UInt64, Bool}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_bool_equals(
    const std::map<uint64_t, bool> * restrict map1,
    const std::map<uint64_t, bool> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, Bool}, (Ptr{STL.StdMap{UInt64, Bool}},), map)
    return res::STL.StdMapIterator{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool>::const_iterator std_map_uint64_t_bool_cbegin(
    const std::map<uint64_t, bool> * restrict map
) {
    using MI = std::map<uint64_t, bool>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, Bool}, (Ptr{STL.StdMap{UInt64, Bool}},), map)
    return res::STL.StdMapIterator{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool>::const_iterator std_map_uint64_t_bool_cend(
    const std::map<uint64_t, bool> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{Bool}}, (STL.StdMapIterator{UInt64, Bool},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(Bool, res[2]))::Pair{UInt64, Bool}
end
*/
extern "C" const std::pair<uint64_t const *, bool const *> std_map_uint64_t_bool_const_iterator_getindex(
    std::map<uint64_t, bool>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, bool const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, bool const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, Bool}, (STL.StdMapIterator{UInt64, Bool},), iter)
    return res::STL.StdMapIterator{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool>::const_iterator std_map_uint64_t_bool_const_iterator_inc(
    std::map<uint64_t, bool>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, Bool}, (STL.StdMapIterator{UInt64, Bool},), iter)
    return res::STL.StdMapIterator{UInt64, Bool}
end
*/
extern "C" std::map<uint64_t, bool>::const_iterator std_map_uint64_t_bool_const_iterator_dec(
    std::map<uint64_t, bool>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, Bool}, iter2::STL.StdMapIterator{UInt64, Bool})
    res = ccall(("std_map_uint64_t_bool_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, Bool}, STL.StdMapIterator{UInt64, Bool}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_bool_const_iterator_equals(
    std::map<uint64_t, bool>::const_iterator iter1,
    std::map<uint64_t, bool>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{Float64})
    res = ccall(("std_map_uint64_t_double_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Float64}}, ())
    return RefStdMap{UInt64, Float64}(res)::STL.RefStdMap{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double> * std_map_uint64_t_double_new(
    
) {
    return new std::map<uint64_t, double>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_delete(
    std::map<uint64_t, double> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Float64}}, (Ptr{STL.StdMap{UInt64, Float64}},), map)
    return RefStdMap{UInt64, Float64}(res)::STL.RefStdMap{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double> * std_map_uint64_t_double_copy(
    const std::map<uint64_t, double> * restrict map
) {
    return new std::map<uint64_t, double>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_construct(
    void * ptr
) {
    using M = std::map<uint64_t, double>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, double>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_destruct(
    std::map<uint64_t, double> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, Float64}, vec::STL.GCStdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{STL.StdMap{UInt64, Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_copy_construct(
    std::map<uint64_t, double> * restrict ptr,
    const std::map<uint64_t, double> * restrict vec
) {
    new(ptr) std::map<uint64_t, double>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, Float64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_double_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, double>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, double>>;
*res = std::make_shared<std::map<uint64_t, double>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, Float64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_double_placement_delete(
    std::shared_ptr<std::map<uint64_t, double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, Float64}, vec::STL.SharedStdMap{UInt64, Float64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_double_placement_copy(
    void * ptr,
    const std::map<uint64_t, double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, double>>;
*res = std::make_shared<std::map<uint64_t, double>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, Float64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_double_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, double> * std_shared_ptr_std_map_uint64_t_double_get(
    std::shared_ptr<std::map<uint64_t, double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Float64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_double_length(
    const std::map<uint64_t, double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_double_haskey(
    const std::map<uint64_t, double> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_map_uint64_t_double_getindex(
    std::map<uint64_t, double> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{Float64}, Ptr{UInt64}), map, convert_arg(Ptr{Float64}, convert(Float64, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_setindex_(
    std::map<uint64_t, double> * restrict map,
    double const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, Float64}
end
*/
extern "C" void std_map_uint64_t_double_delete_(
    std::map<uint64_t, double> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, Float64}, map2::STL.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, Float64}}, Ptr{STL.StdMap{UInt64, Float64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_double_equals(
    const std::map<uint64_t, double> * restrict map1,
    const std::map<uint64_t, double> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, Float64}, (Ptr{STL.StdMap{UInt64, Float64}},), map)
    return res::STL.StdMapIterator{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double>::const_iterator std_map_uint64_t_double_cbegin(
    const std::map<uint64_t, double> * restrict map
) {
    using MI = std::map<uint64_t, double>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, Float64}, (Ptr{STL.StdMap{UInt64, Float64}},), map)
    return res::STL.StdMapIterator{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double>::const_iterator std_map_uint64_t_double_cend(
    const std::map<uint64_t, double> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{Float64}}, (STL.StdMapIterator{UInt64, Float64},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(Float64, res[2]))::Pair{UInt64, Float64}
end
*/
extern "C" const std::pair<uint64_t const *, double const *> std_map_uint64_t_double_const_iterator_getindex(
    std::map<uint64_t, double>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, double const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, double const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, Float64}, (STL.StdMapIterator{UInt64, Float64},), iter)
    return res::STL.StdMapIterator{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double>::const_iterator std_map_uint64_t_double_const_iterator_inc(
    std::map<uint64_t, double>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, Float64}, (STL.StdMapIterator{UInt64, Float64},), iter)
    return res::STL.StdMapIterator{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t, double>::const_iterator std_map_uint64_t_double_const_iterator_dec(
    std::map<uint64_t, double>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, Float64}, iter2::STL.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, Float64}, STL.StdMapIterator{UInt64, Float64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_double_const_iterator_equals(
    std::map<uint64_t, double>::const_iterator iter1,
    std::map<uint64_t, double>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{Int64})
    res = ccall(("std_map_uint64_t_int64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Int64}}, ())
    return RefStdMap{UInt64, Int64}(res)::STL.RefStdMap{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t> * std_map_uint64_t_int64_t_new(
    
) {
    return new std::map<uint64_t, int64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_delete(
    std::map<uint64_t, int64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Int64}}, (Ptr{STL.StdMap{UInt64, Int64}},), map)
    return RefStdMap{UInt64, Int64}(res)::STL.RefStdMap{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t> * std_map_uint64_t_int64_t_copy(
    const std::map<uint64_t, int64_t> * restrict map
) {
    return new std::map<uint64_t, int64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_construct(
    void * ptr
) {
    using M = std::map<uint64_t, int64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, int64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_destruct(
    std::map<uint64_t, int64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, Int64}, vec::STL.GCStdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{STL.StdMap{UInt64, Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_copy_construct(
    std::map<uint64_t, int64_t> * restrict ptr,
    const std::map<uint64_t, int64_t> * restrict vec
) {
    new(ptr) std::map<uint64_t, int64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, Int64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, int64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, int64_t>>;
*res = std::make_shared<std::map<uint64_t, int64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, Int64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int64_t_placement_delete(
    std::shared_ptr<std::map<uint64_t, int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, Int64}, vec::STL.SharedStdMap{UInt64, Int64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int64_t_placement_copy(
    void * ptr,
    const std::map<uint64_t, int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, int64_t>>;
*res = std::make_shared<std::map<uint64_t, int64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, Int64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, int64_t> * std_shared_ptr_std_map_uint64_t_int64_t_get(
    std::shared_ptr<std::map<uint64_t, int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Int64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int64_t_length(
    const std::map<uint64_t, int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int64_t_haskey(
    const std::map<uint64_t, int64_t> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_map_uint64_t_int64_t_getindex(
    std::map<uint64_t, int64_t> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{Int64}, Ptr{UInt64}), map, convert_arg(Ptr{Int64}, convert(Int64, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_setindex_(
    std::map<uint64_t, int64_t> * restrict map,
    int64_t const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, Int64}
end
*/
extern "C" void std_map_uint64_t_int64_t_delete_(
    std::map<uint64_t, int64_t> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, Int64}, map2::STL.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, Int64}}, Ptr{STL.StdMap{UInt64, Int64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_int64_t_equals(
    const std::map<uint64_t, int64_t> * restrict map1,
    const std::map<uint64_t, int64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int64}, (Ptr{STL.StdMap{UInt64, Int64}},), map)
    return res::STL.StdMapIterator{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t>::const_iterator std_map_uint64_t_int64_t_cbegin(
    const std::map<uint64_t, int64_t> * restrict map
) {
    using MI = std::map<uint64_t, int64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int64}, (Ptr{STL.StdMap{UInt64, Int64}},), map)
    return res::STL.StdMapIterator{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t>::const_iterator std_map_uint64_t_int64_t_cend(
    const std::map<uint64_t, int64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{Int64}}, (STL.StdMapIterator{UInt64, Int64},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(Int64, res[2]))::Pair{UInt64, Int64}
end
*/
extern "C" const std::pair<uint64_t const *, int64_t const *> std_map_uint64_t_int64_t_const_iterator_getindex(
    std::map<uint64_t, int64_t>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, int64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, int64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int64}, (STL.StdMapIterator{UInt64, Int64},), iter)
    return res::STL.StdMapIterator{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t>::const_iterator std_map_uint64_t_int64_t_const_iterator_inc(
    std::map<uint64_t, int64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int64}, (STL.StdMapIterator{UInt64, Int64},), iter)
    return res::STL.StdMapIterator{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t, int64_t>::const_iterator std_map_uint64_t_int64_t_const_iterator_dec(
    std::map<uint64_t, int64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, Int64}, iter2::STL.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, Int64}, STL.StdMapIterator{UInt64, Int64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_int64_t_const_iterator_equals(
    std::map<uint64_t, int64_t>::const_iterator iter1,
    std::map<uint64_t, int64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{Int8})
    res = ccall(("std_map_uint64_t_int8_t_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Int8}}, ())
    return RefStdMap{UInt64, Int8}(res)::STL.RefStdMap{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t> * std_map_uint64_t_int8_t_new(
    
) {
    return new std::map<uint64_t, int8_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_delete(
    std::map<uint64_t, int8_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Int8}}, (Ptr{STL.StdMap{UInt64, Int8}},), map)
    return RefStdMap{UInt64, Int8}(res)::STL.RefStdMap{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t> * std_map_uint64_t_int8_t_copy(
    const std::map<uint64_t, int8_t> * restrict map
) {
    return new std::map<uint64_t, int8_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_construct(
    void * ptr
) {
    using M = std::map<uint64_t, int8_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, int8_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_destruct(
    std::map<uint64_t, int8_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, Int8}, vec::STL.GCStdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{STL.StdMap{UInt64, Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_copy_construct(
    std::map<uint64_t, int8_t> * restrict ptr,
    const std::map<uint64_t, int8_t> * restrict vec
) {
    new(ptr) std::map<uint64_t, int8_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, Int8})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int8_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, int8_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, int8_t>>;
*res = std::make_shared<std::map<uint64_t, int8_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, Int8})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int8_t_placement_delete(
    std::shared_ptr<std::map<uint64_t, int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, Int8}, vec::STL.SharedStdMap{UInt64, Int8})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_int8_t_placement_copy(
    void * ptr,
    const std::map<uint64_t, int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, int8_t>>;
*res = std::make_shared<std::map<uint64_t, int8_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, Int8})
    res = ccall(("std_shared_ptr_std_map_uint64_t_int8_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, int8_t> * std_shared_ptr_std_map_uint64_t_int8_t_get(
    std::shared_ptr<std::map<uint64_t, int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Int8}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int8_t_length(
    const std::map<uint64_t, int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int8_t_haskey(
    const std::map<uint64_t, int8_t> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_map_uint64_t_int8_t_getindex(
    std::map<uint64_t, int8_t> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{Int8}, Ptr{UInt64}), map, convert_arg(Ptr{Int8}, convert(Int8, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_setindex_(
    std::map<uint64_t, int8_t> * restrict map,
    int8_t const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, Int8}
end
*/
extern "C" void std_map_uint64_t_int8_t_delete_(
    std::map<uint64_t, int8_t> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, Int8}, map2::STL.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, Int8}}, Ptr{STL.StdMap{UInt64, Int8}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_int8_t_equals(
    const std::map<uint64_t, int8_t> * restrict map1,
    const std::map<uint64_t, int8_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int8}, (Ptr{STL.StdMap{UInt64, Int8}},), map)
    return res::STL.StdMapIterator{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t>::const_iterator std_map_uint64_t_int8_t_cbegin(
    const std::map<uint64_t, int8_t> * restrict map
) {
    using MI = std::map<uint64_t, int8_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int8}, (Ptr{STL.StdMap{UInt64, Int8}},), map)
    return res::STL.StdMapIterator{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t>::const_iterator std_map_uint64_t_int8_t_cend(
    const std::map<uint64_t, int8_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{Int8}}, (STL.StdMapIterator{UInt64, Int8},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(Int8, res[2]))::Pair{UInt64, Int8}
end
*/
extern "C" const std::pair<uint64_t const *, int8_t const *> std_map_uint64_t_int8_t_const_iterator_getindex(
    std::map<uint64_t, int8_t>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, int8_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, int8_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int8}, (STL.StdMapIterator{UInt64, Int8},), iter)
    return res::STL.StdMapIterator{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t>::const_iterator std_map_uint64_t_int8_t_const_iterator_inc(
    std::map<uint64_t, int8_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, Int8}, (STL.StdMapIterator{UInt64, Int8},), iter)
    return res::STL.StdMapIterator{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t, int8_t>::const_iterator std_map_uint64_t_int8_t_const_iterator_dec(
    std::map<uint64_t, int8_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, Int8}, iter2::STL.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, Int8}, STL.StdMapIterator{UInt64, Int8}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_int8_t_const_iterator_equals(
    std::map<uint64_t, int8_t>::const_iterator iter1,
    std::map<uint64_t, int8_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, ())
    return RefStdMap{UInt64, Ptr{Nothing}}(res)::STL.RefStdMap{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *> * std_map_uint64_t_void___new(
    
) {
    return new std::map<uint64_t, void *>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_void___delete(
    std::map<uint64_t, void *> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), map)
    return RefStdMap{UInt64, Ptr{Nothing}}(res)::STL.RefStdMap{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *> * std_map_uint64_t_void___copy(
    const std::map<uint64_t, void *> * restrict map
) {
    return new std::map<uint64_t, void *>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_void___construct(
    void * ptr
) {
    using M = std::map<uint64_t, void *>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, void *>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_void___destruct(
    std::map<uint64_t, void *> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, Ptr{Nothing}}, vec::STL.GCStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_void___copy_construct(
    std::map<uint64_t, void *> * restrict ptr,
    const std::map<uint64_t, void *> * restrict vec
) {
    new(ptr) std::map<uint64_t, void *>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_void___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, void *>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, void *>>;
*res = std::make_shared<std::map<uint64_t, void *>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_void___placement_delete(
    std::shared_ptr<std::map<uint64_t, void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, Ptr{Nothing}}, vec::STL.SharedStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_void___placement_copy(
    void * ptr,
    const std::map<uint64_t, void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, void *>>;
*res = std::make_shared<std::map<uint64_t, void *>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_void___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, void *> * std_shared_ptr_std_map_uint64_t_void___get(
    std::shared_ptr<std::map<uint64_t, void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_void___length(
    const std::map<uint64_t, void *> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_uint64_t_void___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_void___haskey(
    const std::map<uint64_t, void *> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_uint64_t_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_map_uint64_t_void___getindex(
    std::map<uint64_t, void *> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, Ptr{Nothing}}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, Ptr{UInt64}), map, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_void___setindex_(
    std::map<uint64_t, void *> * restrict map,
    void * const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, Ptr{Nothing}}, key::Any)
    res = ccall(("std_map_uint64_t_void___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, Ptr{Nothing}}
end
*/
extern "C" void std_map_uint64_t_void___delete_(
    std::map<uint64_t, void *> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, Ptr{Nothing}}, map2::STL.StdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}, Ptr{STL.StdMap{UInt64, Ptr{Nothing}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_void___equals(
    const std::map<uint64_t, void *> * restrict map1,
    const std::map<uint64_t, void *> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, Ptr{Nothing}}, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *>::const_iterator std_map_uint64_t_void___cbegin(
    const std::map<uint64_t, void *> * restrict map
) {
    using MI = std::map<uint64_t, void *>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, Ptr{Nothing}}, (Ptr{STL.StdMap{UInt64, Ptr{Nothing}}},), map)
    return res::STL.StdMapIterator{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *>::const_iterator std_map_uint64_t_void___cend(
    const std::map<uint64_t, void *> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{Ptr{Nothing}}}, (STL.StdMapIterator{UInt64, Ptr{Nothing}},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(Ptr{Nothing}, res[2]))::Pair{UInt64, Ptr{Nothing}}
end
*/
extern "C" const std::pair<uint64_t const *, void * const *> std_map_uint64_t_void___const_iterator_getindex(
    std::map<uint64_t, void *>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, void * const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, void * const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, Ptr{Nothing}}, (STL.StdMapIterator{UInt64, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *>::const_iterator std_map_uint64_t_void___const_iterator_inc(
    std::map<uint64_t, void *>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, Ptr{Nothing}}, (STL.StdMapIterator{UInt64, Ptr{Nothing}},), iter)
    return res::STL.StdMapIterator{UInt64, Ptr{Nothing}}
end
*/
extern "C" std::map<uint64_t, void *>::const_iterator std_map_uint64_t_void___const_iterator_dec(
    std::map<uint64_t, void *>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, Ptr{Nothing}}, iter2::STL.StdMapIterator{UInt64, Ptr{Nothing}})
    res = ccall(("std_map_uint64_t_void___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, Ptr{Nothing}}, STL.StdMapIterator{UInt64, Ptr{Nothing}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_void___const_iterator_equals(
    std::map<uint64_t, void *>::const_iterator iter1,
    std::map<uint64_t, void *>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdString}}, ())
    return RefStdMap{UInt64, STL.RefStdString}(res)::STL.RefStdMap{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string> * std_map_uint64_t_std__string_new(
    
) {
    return new std::map<uint64_t, std::string>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__string_delete(
    std::map<uint64_t, std::string> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), map)
    return RefStdMap{UInt64, STL.RefStdString}(res)::STL.RefStdMap{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string> * std_map_uint64_t_std__string_copy(
    const std::map<uint64_t, std::string> * restrict map
) {
    return new std::map<uint64_t, std::string>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__string_construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::string>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::string>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__string_destruct(
    std::map<uint64_t, std::string> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdString}, vec::STL.GCStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{STL.StdMap{UInt64, STL.RefStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__string_copy_construct(
    std::map<uint64_t, std::string> * restrict ptr,
    const std::map<uint64_t, std::string> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::string>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__string_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::string>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::string>>;
*res = std::make_shared<std::map<uint64_t, std::string>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__string_placement_delete(
    std::shared_ptr<std::map<uint64_t, std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdString}, vec::STL.SharedStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.RefStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__string_placement_copy(
    void * ptr,
    const std::map<uint64_t, std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::string>>;
*res = std::make_shared<std::map<uint64_t, std::string>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.RefStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__string_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::string> * std_shared_ptr_std_map_uint64_t_std__string_get(
    std::shared_ptr<std::map<uint64_t, std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__string_length(
    const std::map<uint64_t, std::string> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__string_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__string_haskey(
    const std::map<uint64_t, std::string> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_map_uint64_t_std__string_getindex(
    std::map<uint64_t, std::string> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.RefStdString}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{STL.RefStdString}, Ptr{UInt64}), map, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__string_setindex_(
    std::map<uint64_t, std::string> * restrict map,
    std::string const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.RefStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__string_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.RefStdString}
end
*/
extern "C" void std_map_uint64_t_std__string_delete_(
    std::map<uint64_t, std::string> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.RefStdString}, map2::STL.StdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.RefStdString}}, Ptr{STL.StdMap{UInt64, STL.RefStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__string_equals(
    const std::map<uint64_t, std::string> * restrict map1,
    const std::map<uint64_t, std::string> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdString}, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string>::const_iterator std_map_uint64_t_std__string_cbegin(
    const std::map<uint64_t, std::string> * restrict map
) {
    using MI = std::map<uint64_t, std::string>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdString}, (Ptr{STL.StdMap{UInt64, STL.RefStdString}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string>::const_iterator std_map_uint64_t_std__string_cend(
    const std::map<uint64_t, std::string> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.RefStdString}}, (STL.StdMapIterator{UInt64, STL.RefStdString},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.RefStdString, res[2]))::Pair{UInt64, STL.RefStdString}
end
*/
extern "C" const std::pair<uint64_t const *, std::string const *> std_map_uint64_t_std__string_const_iterator_getindex(
    std::map<uint64_t, std::string>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::string const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::string const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdString}, (STL.StdMapIterator{UInt64, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string>::const_iterator std_map_uint64_t_std__string_const_iterator_inc(
    std::map<uint64_t, std::string>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdString}, (STL.StdMapIterator{UInt64, STL.RefStdString},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdString}
end
*/
extern "C" std::map<uint64_t, std::string>::const_iterator std_map_uint64_t_std__string_const_iterator_dec(
    std::map<uint64_t, std::string>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.RefStdString}, iter2::STL.StdMapIterator{UInt64, STL.RefStdString})
    res = ccall(("std_map_uint64_t_std__string_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.RefStdString}, STL.StdMapIterator{UInt64, STL.RefStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__string_const_iterator_equals(
    std::map<uint64_t, std::string>::const_iterator iter1,
    std::map<uint64_t, std::string>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>> * std_map_uint64_t_std__vector_std__string__new(
    
) {
    return new std::map<uint64_t, std::vector<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__delete(
    std::map<uint64_t, std::vector<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), map)
    return RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>> * std_map_uint64_t_std__vector_std__string__copy(
    const std::map<uint64_t, std::vector<std::string>> * restrict map
) {
    return new std::map<uint64_t, std::vector<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::vector<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::vector<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__destruct(
    std::map<uint64_t, std::vector<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__copy_construct(
    std::map<uint64_t, std::vector<std::string>> * restrict ptr,
    const std::map<uint64_t, std::vector<std::string>> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::vector<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::vector<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<uint64_t, std::vector<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_delete(
    std::shared_ptr<std::map<uint64_t, std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__string__placement_copy(
    void * ptr,
    const std::map<uint64_t, std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::vector<std::string>>>;
*res = std::make_shared<std::map<uint64_t, std::vector<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>> * std_shared_ptr_std_map_uint64_t_std__vector_std__string__get(
    std::shared_ptr<std::map<uint64_t, std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__vector_std__string__length(
    const std::map<uint64_t, std::vector<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__vector_std__string__haskey(
    const std::map<uint64_t, std::vector<std::string>> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_map_uint64_t_std__vector_std__string__getindex(
    std::map<uint64_t, std::vector<std::string>> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__setindex_(
    std::map<uint64_t, std::vector<std::string>> * restrict map,
    std::vector<std::string> const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_uint64_t_std__vector_std__string__delete_(
    std::map<uint64_t, std::vector<std::string>> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}, map2::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__vector_std__string__equals(
    const std::map<uint64_t, std::vector<std::string>> * restrict map1,
    const std::map<uint64_t, std::vector<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>>::const_iterator std_map_uint64_t_std__vector_std__string__cbegin(
    const std::map<uint64_t, std::vector<std::string>> * restrict map
) {
    using MI = std::map<uint64_t, std::vector<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>>::const_iterator std_map_uint64_t_std__vector_std__string__cend(
    const std::map<uint64_t, std::vector<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.RefStdVector{STL.RefStdString}}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.RefStdVector{STL.RefStdString}, res[2]))::Pair{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<uint64_t const *, std::vector<std::string> const *> std_map_uint64_t_std__vector_std__string__const_iterator_getindex(
    std::map<uint64_t, std::vector<std::string>>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::vector<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::vector<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>>::const_iterator std_map_uint64_t_std__vector_std__string__const_iterator_inc(
    std::map<uint64_t, std::vector<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::string>>::const_iterator std_map_uint64_t_std__vector_std__string__const_iterator_dec(
    std::map<uint64_t, std::vector<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}, STL.StdMapIterator{UInt64, STL.RefStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__vector_std__string__const_iterator_equals(
    std::map<uint64_t, std::vector<std::string>>::const_iterator iter1,
    std::map<uint64_t, std::vector<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * std_map_uint64_t_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___delete(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * std_map_uint64_t_std__vector_std__shared_ptr_std__string___copy(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return new std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___destruct(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___copy_construct(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_map_uint64_t_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__vector_std__shared_ptr_std__string___length(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__vector_std__shared_ptr_std__string___haskey(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_map_uint64_t_std__vector_std__shared_ptr_std__string___getindex(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___setindex_(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    std::vector<std::shared_ptr<std::string>> const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_uint64_t_std__vector_std__shared_ptr_std__string___delete_(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}, map2::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__vector_std__shared_ptr_std__string___equals(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map1,
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_uint64_t_std__vector_std__shared_ptr_std__string___cbegin(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    using MI = std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.RefStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_uint64_t_std__vector_std__shared_ptr_std__string___cend(
    const std::map<uint64_t, std::vector<std::shared_ptr<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.RefStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.RefStdVector{STL.SharedStdString}, res[2]))::Pair{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<uint64_t const *, std::vector<std::shared_ptr<std::string>> const *> std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_getindex(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::vector<std::shared_ptr<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::vector<std::shared_ptr<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_inc(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_dec(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}, STL.StdMapIterator{UInt64, STL.RefStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__vector_std__shared_ptr_std__string___const_iterator_equals(
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter1,
    std::map<uint64_t, std::vector<std::shared_ptr<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, ())
    return RefStdMap{UInt64, STL.SharedStdString}(res)::STL.RefStdMap{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>> * std_map_uint64_t_std__shared_ptr_std__string__new(
    
) {
    return new std::map<uint64_t, std::shared_ptr<std::string>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__delete(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), map)
    return RefStdMap{UInt64, STL.SharedStdString}(res)::STL.RefStdMap{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>> * std_map_uint64_t_std__shared_ptr_std__string__copy(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map
) {
    return new std::map<uint64_t, std::shared_ptr<std::string>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::shared_ptr<std::string>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::shared_ptr<std::string>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__destruct(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdString}, vec::STL.GCStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{STL.StdMap{UInt64, STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__copy_construct(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict ptr,
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::shared_ptr<std::string>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::string>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::string>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdString}, vec::STL.SharedStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::string>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>> * std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__string__get(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__string__length(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__string__haskey(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_map_uint64_t_std__shared_ptr_std__string__getindex(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.SharedStdString}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{STL.SharedStdString}, Ptr{UInt64}), map, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__setindex_(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict map,
    std::shared_ptr<std::string> const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.SharedStdString}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.SharedStdString}
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__string__delete_(
    std::map<uint64_t, std::shared_ptr<std::string>> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.SharedStdString}, map2::STL.StdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}}, Ptr{STL.StdMap{UInt64, STL.SharedStdString}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__string__equals(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map1,
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdString}, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator std_map_uint64_t_std__shared_ptr_std__string__cbegin(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map
) {
    using MI = std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdString}, (Ptr{STL.StdMap{UInt64, STL.SharedStdString}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator std_map_uint64_t_std__shared_ptr_std__string__cend(
    const std::map<uint64_t, std::shared_ptr<std::string>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.SharedStdString}}, (STL.StdMapIterator{UInt64, STL.SharedStdString},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.SharedStdString, res[2]))::Pair{UInt64, STL.SharedStdString}
end
*/
extern "C" const std::pair<uint64_t const *, std::shared_ptr<std::string> const *> std_map_uint64_t_std__shared_ptr_std__string__const_iterator_getindex(
    std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::shared_ptr<std::string> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::shared_ptr<std::string> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdString}, (STL.StdMapIterator{UInt64, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator std_map_uint64_t_std__shared_ptr_std__string__const_iterator_inc(
    std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdString}, (STL.StdMapIterator{UInt64, STL.SharedStdString},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdString}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator std_map_uint64_t_std__shared_ptr_std__string__const_iterator_dec(
    std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.SharedStdString}, iter2::STL.StdMapIterator{UInt64, STL.SharedStdString})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__string__const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.SharedStdString}, STL.StdMapIterator{UInt64, STL.SharedStdString}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__string__const_iterator_equals(
    std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator iter1,
    std::map<uint64_t, std::shared_ptr<std::string>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * std_map_uint64_t_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___delete(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * std_map_uint64_t_std__shared_ptr_std__vector_std__string___copy(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return new std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___destruct(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___copy_construct(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__vector_std__string___length(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__vector_std__string___haskey(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_map_uint64_t_std__shared_ptr_std__vector_std__string___getindex(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___setindex_(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    std::shared_ptr<std::vector<std::string>> const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__string___delete_(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}, map2::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__vector_std__string___equals(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map1,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__string___cbegin(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    using MI = std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.RefStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__string___cend(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::string>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.SharedStdVector{STL.RefStdString}}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.SharedStdVector{STL.RefStdString}, res[2]))::Pair{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" const std::pair<uint64_t const *, std::shared_ptr<std::vector<std::string>> const *> std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_getindex(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::shared_ptr<std::vector<std::string>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::shared_ptr<std::vector<std::string>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_inc(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_dec(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, iter2::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}, STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.RefStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__vector_std__string___const_iterator_equals(
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter1,
    std::map<uint64_t, std::shared_ptr<std::vector<std::string>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return new std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    using M = std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____haskey(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, Ptr{UInt64}), map, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, key::Any)
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" void std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete_(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}, map2::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map1,
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cbegin(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    using MI = std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdMap{UInt64, STL.SharedStdVector{STL.SharedStdString}}},), map)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____cend(
    const std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{STL.SharedStdVector{STL.SharedStdString}}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(STL.SharedStdVector{STL.SharedStdString}, res[2]))::Pair{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" const std::pair<uint64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *> std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_getindex(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_inc(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}},), iter)
    return res::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_dec(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, iter2::STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}, STL.StdMapIterator{UInt64, STL.SharedStdVector{STL.SharedStdString}}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_std__shared_ptr_std__vector_std__shared_ptr_std__string____const_iterator_equals(
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter1,
    std::map<uint64_t, std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>::const_iterator iter2
) {
    return iter1 == iter2;
}

/*
function RefStdMap_new(keytype::Type{UInt64}, valuetype::Type{UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, UInt64}}, ())
    return RefStdMap{UInt64, UInt64}(res)::STL.RefStdMap{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t> * std_map_uint64_t_uint64_t_new(
    
) {
    return new std::map<uint64_t, uint64_t>;
}

/*
function RefStdMap_delete(map::STL.RefStdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_delete(
    std::map<uint64_t, uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.copy(map::STL.RefStdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdMap{UInt64, UInt64}}, (Ptr{STL.StdMap{UInt64, UInt64}},), map)
    return RefStdMap{UInt64, UInt64}(res)::STL.RefStdMap{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t> * std_map_uint64_t_uint64_t_copy(
    const std::map<uint64_t, uint64_t> * restrict map
) {
    return new std::map<uint64_t, uint64_t>(*map);
}

/*
function GCStdMap_construct(ptr::STL.GCStdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_construct(
    void * ptr
) {
    using M = std::map<uint64_t, uint64_t>;
static_assert(sizeof(M) <= 48, "");
new(ptr) std::map<uint64_t, uint64_t>;

}

/*
function GCStdMap_destruct(ptr::STL.GCStdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_destruct(
    std::map<uint64_t, uint64_t> * restrict ptr
) {
    ptr->~map();
}

/*
function GCStdMap_copy_construct(ptr::STL.GCStdMap{UInt64, UInt64}, vec::STL.GCStdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{STL.StdMap{UInt64, UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_copy_construct(
    std::map<uint64_t, uint64_t> * restrict ptr,
    const std::map<uint64_t, uint64_t> * restrict vec
) {
    new(ptr) std::map<uint64_t, uint64_t>(*vec);
}

/*
function SharedStdMap_construct(ptr::STL.SharedStdMap{UInt64, UInt64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_uint64_t_placement_new(
    void * ptr
) {
    using SM = std::shared_ptr<std::map<uint64_t, uint64_t>>;
static_assert(sizeof(SM) <= 16, "");
auto res = new(ptr) std::shared_ptr<std::map<uint64_t, uint64_t>>;
*res = std::make_shared<std::map<uint64_t, uint64_t>>();

}

/*
function SharedStdMap_destruct(ptr::STL.SharedStdMap{UInt64, UInt64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_uint64_t_placement_delete(
    std::shared_ptr<std::map<uint64_t, uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdMap_copy_construct(ptr::STL.SharedStdMap{UInt64, UInt64}, vec::STL.SharedStdMap{UInt64, UInt64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdMap{UInt64, UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_map_uint64_t_uint64_t_placement_copy(
    void * ptr,
    const std::map<uint64_t, uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::map<uint64_t, uint64_t>>;
*res = std::make_shared<std::map<uint64_t, uint64_t>>(*vec);

}

/*
function SharedStdMap_get(ptr::STL.SharedStdMap{UInt64, UInt64})
    res = ccall(("std_shared_ptr_std_map_uint64_t_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdMap}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdMap}
end
*/
extern "C" std::map<uint64_t, uint64_t> * std_shared_ptr_std_map_uint64_t_uint64_t_get(
    std::shared_ptr<std::map<uint64_t, uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.length(map::STL.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, UInt64}},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint64_t_length(
    const std::map<uint64_t, uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::STL.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_haskey", "libSTL.dylib"), UInt64, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_uint64_t_haskey(
    const std::map<uint64_t, uint64_t> * restrict map,
    uint64_t const * key
) {
    return map->count(*key);
}

/*
function Base.getindex(map::STL.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_map_uint64_t_uint64_t_getindex(
    std::map<uint64_t, uint64_t> * restrict map,
    uint64_t const * key
) {
    return &map->at(*key);
}

/*
function Base.setindex!(map::STL.StdMap{UInt64, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{UInt64}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_setindex_(
    std::map<uint64_t, uint64_t> * restrict map,
    uint64_t const * elt,
    uint64_t const * key
) {
    (*map)[*key] = *elt;
}

/*
function Base.delete!(map::STL.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_delete_", "libSTL.dylib"), Nothing, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{UInt64}), map, convert_arg(Ptr{UInt64}, convert(UInt64, key)))
    return map::STL.StdMap{UInt64, UInt64}
end
*/
extern "C" void std_map_uint64_t_uint64_t_delete_(
    std::map<uint64_t, uint64_t> * restrict map,
    uint64_t const * key
) {
    map->erase(*key);
}

/*
function Base.:(==)(map1::STL.StdMap{UInt64, UInt64}, map2::STL.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdMap{UInt64, UInt64}}, Ptr{STL.StdMap{UInt64, UInt64}}), map1, map2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_uint64_t_equals(
    const std::map<uint64_t, uint64_t> * restrict map1,
    const std::map<uint64_t, uint64_t> * restrict map2
) {
    return *map1 == *map2;
}

/*
function cbegin(map::STL.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_cbegin", "libSTL.dylib"), STL.StdMapIterator{UInt64, UInt64}, (Ptr{STL.StdMap{UInt64, UInt64}},), map)
    return res::STL.StdMapIterator{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t>::const_iterator std_map_uint64_t_uint64_t_cbegin(
    const std::map<uint64_t, uint64_t> * restrict map
) {
    using MI = std::map<uint64_t, uint64_t>::const_iterator;
static_assert(sizeof(MI) == sizeof(void *), "");
return map->cbegin();

}

/*
function cend(map::STL.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_cend", "libSTL.dylib"), STL.StdMapIterator{UInt64, UInt64}, (Ptr{STL.StdMap{UInt64, UInt64}},), map)
    return res::STL.StdMapIterator{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t>::const_iterator std_map_uint64_t_uint64_t_cend(
    const std::map<uint64_t, uint64_t> * restrict map
) {
    return map->cend();
}

/*
function Base.getindex(iter::STL.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_getindex", "libSTL.dylib"), Pair{Ptr{UInt64}, Ptr{UInt64}}, (STL.StdMapIterator{UInt64, UInt64},), iter)
    return (convert_result(UInt64, res[1]) => convert_result(UInt64, res[2]))::Pair{UInt64, UInt64}
end
*/
extern "C" const std::pair<uint64_t const *, uint64_t const *> std_map_uint64_t_uint64_t_const_iterator_getindex(
    std::map<uint64_t, uint64_t>::const_iterator iter
) {
    using P = std::pair<uint64_t const *, uint64_t const *>;
static_assert(offsetof(P, first) == 0, "");
static_assert(offsetof(P, second) == 8, "");
return std::pair<uint64_t const *, uint64_t const *>(&iter->first, &iter->second);

}

/*
function inc(iter::STL.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_inc", "libSTL.dylib"), STL.StdMapIterator{UInt64, UInt64}, (STL.StdMapIterator{UInt64, UInt64},), iter)
    return res::STL.StdMapIterator{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t>::const_iterator std_map_uint64_t_uint64_t_const_iterator_inc(
    std::map<uint64_t, uint64_t>::const_iterator iter
) {
    return ++iter;
}

/*
function dec(iter::STL.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_dec", "libSTL.dylib"), STL.StdMapIterator{UInt64, UInt64}, (STL.StdMapIterator{UInt64, UInt64},), iter)
    return res::STL.StdMapIterator{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t, uint64_t>::const_iterator std_map_uint64_t_uint64_t_const_iterator_dec(
    std::map<uint64_t, uint64_t>::const_iterator iter
) {
    return --iter;
}

/*
function Base.:(==)(iter1::STL.StdMapIterator{UInt64, UInt64}, iter2::STL.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_equals", "libSTL.dylib"), Bool, (STL.StdMapIterator{UInt64, UInt64}, STL.StdMapIterator{UInt64, UInt64}), iter1, iter2)
    return res::Bool
end
*/
extern "C" bool std_map_uint64_t_uint64_t_const_iterator_equals(
    std::map<uint64_t, uint64_t>::const_iterator iter1,
    std::map<uint64_t, uint64_t>::const_iterator iter2
) {
    return iter1 == iter2;
}

