#include <ccomplex>
#include <cstdint>

#include <cstddef>
#include <map>
#include <utility>


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt64}(res)::Main.StdMaps.StdMap{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t,uint64_t> * std_map_uint64_t_uint64_t_new(
    
) {
    return new std::map<uint64_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_delete(
    std::map<uint64_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint64_t_length(
    const std::map<uint64_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_uint64_t_haskey(
    const std::map<uint64_t,uint64_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint64_t_uint64_t_getindex(
    const std::map<uint64_t,uint64_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt64), map, convert(UInt64, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_setindex_(
    std::map<uint64_t,uint64_t> * restrict map,
    uint64_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, UInt64}
end
*/
extern "C" void std_map_uint64_t_uint64_t_delete_(
    std::map<uint64_t,uint64_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, UInt64}(res)::Main.StdMaps.StdMapIterator{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t,uint64_t>::const_iterator * std_map_uint64_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_const_iterator_delete(
    std::map<uint64_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt64}, map::Main.StdMaps.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_iterator_iterate_(
    std::map<uint64_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_iterator_next_(
    std::map<uint64_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, UInt64}, map::Main.StdMaps.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_uint64_t_iterator_done(
    const std::map<uint64_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint64_t_uint64_t_iterator_getindex(
    const std::map<uint64_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int8})
    res = ccall(("std_map_uint64_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int8}(res)::Main.StdMaps.StdMap{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t,int8_t> * std_map_uint64_t_int8_t_new(
    
) {
    return new std::map<uint64_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_delete(
    std::map<uint64_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int8_t_length(
    const std::map<uint64_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int8_t_haskey(
    const std::map<uint64_t,int8_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint64_t_int8_t_getindex(
    const std::map<uint64_t,int8_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt64), map, convert(Int8, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_setindex_(
    std::map<uint64_t,int8_t> * restrict map,
    int8_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Int8}
end
*/
extern "C" void std_map_uint64_t_int8_t_delete_(
    std::map<uint64_t,int8_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Int8}(res)::Main.StdMaps.StdMapIterator{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t,int8_t>::const_iterator * std_map_uint64_t_int8_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_const_iterator_delete(
    std::map<uint64_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Int8}, map::Main.StdMaps.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_iterator_iterate_(
    std::map<uint64_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_iterator_next_(
    std::map<uint64_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Int8}, map::Main.StdMaps.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_int8_t_iterator_done(
    const std::map<uint64_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_uint64_t_int8_t_iterator_getindex(
    const std::map<uint64_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int16})
    res = ccall(("std_map_uint64_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int16}(res)::Main.StdMaps.StdMap{UInt64, Int16}
end
*/
extern "C" std::map<uint64_t,int16_t> * std_map_uint64_t_int16_t_new(
    
) {
    return new std::map<uint64_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_delete(
    std::map<uint64_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int16_t_length(
    const std::map<uint64_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Int16}, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int16_t_haskey(
    const std::map<uint64_t,int16_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int16}, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint64_t_int16_t_getindex(
    const std::map<uint64_t,int16_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt64), map, convert(Int16, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_setindex_(
    std::map<uint64_t,int16_t> * restrict map,
    int16_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Int16}, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Int16}
end
*/
extern "C" void std_map_uint64_t_int16_t_delete_(
    std::map<uint64_t,int16_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Int16})
    res = ccall(("std_map_uint64_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Int16}(res)::Main.StdMaps.StdMapIterator{UInt64, Int16}
end
*/
extern "C" std::map<uint64_t,int16_t>::const_iterator * std_map_uint64_t_int16_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_const_iterator_delete(
    std::map<uint64_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Int16}, map::Main.StdMaps.StdMap{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_iterator_iterate_(
    std::map<uint64_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_iterator_next_(
    std::map<uint64_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Int16}, map::Main.StdMaps.StdMap{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_int16_t_iterator_done(
    const std::map<uint64_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_uint64_t_int16_t_iterator_getindex(
    const std::map<uint64_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int64})
    res = ccall(("std_map_uint64_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int64}(res)::Main.StdMaps.StdMap{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t,int64_t> * std_map_uint64_t_int64_t_new(
    
) {
    return new std::map<uint64_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_delete(
    std::map<uint64_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int64_t_length(
    const std::map<uint64_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int64_t_haskey(
    const std::map<uint64_t,int64_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint64_t_int64_t_getindex(
    const std::map<uint64_t,int64_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt64), map, convert(Int64, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_setindex_(
    std::map<uint64_t,int64_t> * restrict map,
    int64_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Int64}
end
*/
extern "C" void std_map_uint64_t_int64_t_delete_(
    std::map<uint64_t,int64_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Int64}(res)::Main.StdMaps.StdMapIterator{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t,int64_t>::const_iterator * std_map_uint64_t_int64_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_const_iterator_delete(
    std::map<uint64_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Int64}, map::Main.StdMaps.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_iterator_iterate_(
    std::map<uint64_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_iterator_next_(
    std::map<uint64_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Int64}, map::Main.StdMaps.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_int64_t_iterator_done(
    const std::map<uint64_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_uint64_t_int64_t_iterator_getindex(
    const std::map<uint64_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt32}(res)::Main.StdMaps.StdMap{UInt64, UInt32}
end
*/
extern "C" std::map<uint64_t,uint32_t> * std_map_uint64_t_uint32_t_new(
    
) {
    return new std::map<uint64_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_delete(
    std::map<uint64_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint32_t_length(
    const std::map<uint64_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, UInt32}, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_uint32_t_haskey(
    const std::map<uint64_t,uint32_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt32}, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint64_t_uint32_t_getindex(
    const std::map<uint64_t,uint32_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt64), map, convert(UInt32, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_setindex_(
    std::map<uint64_t,uint32_t> * restrict map,
    uint32_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, UInt32}, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, UInt32}
end
*/
extern "C" void std_map_uint64_t_uint32_t_delete_(
    std::map<uint64_t,uint32_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, UInt32}(res)::Main.StdMaps.StdMapIterator{UInt64, UInt32}
end
*/
extern "C" std::map<uint64_t,uint32_t>::const_iterator * std_map_uint64_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_const_iterator_delete(
    std::map<uint64_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt32}, map::Main.StdMaps.StdMap{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_iterator_iterate_(
    std::map<uint64_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_iterator_next_(
    std::map<uint64_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, UInt32}, map::Main.StdMaps.StdMap{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_uint32_t_iterator_done(
    const std::map<uint64_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint64_t_uint32_t_iterator_getindex(
    const std::map<uint64_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Float32})
    res = ccall(("std_map_uint64_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Float32}(res)::Main.StdMaps.StdMap{UInt64, Float32}
end
*/
extern "C" std::map<uint64_t,float> * std_map_uint64_t_float_new(
    
) {
    return new std::map<uint64_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_delete(
    std::map<uint64_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_float_length(
    const std::map<uint64_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Float32}, key::Any)
    res = ccall(("std_map_uint64_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_float_haskey(
    const std::map<uint64_t,float> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Float32}, key::Any)
    res = ccall(("std_map_uint64_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Float32
end
*/
extern "C" float std_map_uint64_t_float_getindex(
    const std::map<uint64_t,float> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt64), map, convert(Float32, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_setindex_(
    std::map<uint64_t,float> * restrict map,
    float elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Float32}, key::Any)
    res = ccall(("std_map_uint64_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Float32}
end
*/
extern "C" void std_map_uint64_t_float_delete_(
    std::map<uint64_t,float> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Float32})
    res = ccall(("std_map_uint64_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Float32}(res)::Main.StdMaps.StdMapIterator{UInt64, Float32}
end
*/
extern "C" std::map<uint64_t,float>::const_iterator * std_map_uint64_t_float_const_iterator_new(
    
) {
    return new std::map<uint64_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_const_iterator_delete(
    std::map<uint64_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Float32}, map::Main.StdMaps.StdMap{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_iterator_iterate_(
    std::map<uint64_t,float>::const_iterator * restrict iter,
    const std::map<uint64_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_iterator_next_(
    std::map<uint64_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Float32}, map::Main.StdMaps.StdMap{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_float_iterator_done(
    const std::map<uint64_t,float>::const_iterator * restrict iter,
    const std::map<uint64_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_uint64_t_float_iterator_getindex(
    const std::map<uint64_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int32})
    res = ccall(("std_map_uint64_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int32}(res)::Main.StdMaps.StdMap{UInt64, Int32}
end
*/
extern "C" std::map<uint64_t,int32_t> * std_map_uint64_t_int32_t_new(
    
) {
    return new std::map<uint64_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_delete(
    std::map<uint64_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int32_t_length(
    const std::map<uint64_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Int32}, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_int32_t_haskey(
    const std::map<uint64_t,int32_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int32}, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint64_t_int32_t_getindex(
    const std::map<uint64_t,int32_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt64), map, convert(Int32, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_setindex_(
    std::map<uint64_t,int32_t> * restrict map,
    int32_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Int32}, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Int32}
end
*/
extern "C" void std_map_uint64_t_int32_t_delete_(
    std::map<uint64_t,int32_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Int32})
    res = ccall(("std_map_uint64_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Int32}(res)::Main.StdMaps.StdMapIterator{UInt64, Int32}
end
*/
extern "C" std::map<uint64_t,int32_t>::const_iterator * std_map_uint64_t_int32_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_const_iterator_delete(
    std::map<uint64_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Int32}, map::Main.StdMaps.StdMap{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_iterator_iterate_(
    std::map<uint64_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_iterator_next_(
    std::map<uint64_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Int32}, map::Main.StdMaps.StdMap{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_int32_t_iterator_done(
    const std::map<uint64_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint64_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_uint64_t_int32_t_iterator_getindex(
    const std::map<uint64_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Float64})
    res = ccall(("std_map_uint64_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Float64}(res)::Main.StdMaps.StdMap{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t,double> * std_map_uint64_t_double_new(
    
) {
    return new std::map<uint64_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_delete(
    std::map<uint64_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_double_length(
    const std::map<uint64_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_double_haskey(
    const std::map<uint64_t,double> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::Float64
end
*/
extern "C" double std_map_uint64_t_double_getindex(
    const std::map<uint64_t,double> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt64), map, convert(Float64, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_setindex_(
    std::map<uint64_t,double> * restrict map,
    double elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, Float64}
end
*/
extern "C" void std_map_uint64_t_double_delete_(
    std::map<uint64_t,double> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, Float64}(res)::Main.StdMaps.StdMapIterator{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t,double>::const_iterator * std_map_uint64_t_double_const_iterator_new(
    
) {
    return new std::map<uint64_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_const_iterator_delete(
    std::map<uint64_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, Float64}, map::Main.StdMaps.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_iterator_iterate_(
    std::map<uint64_t,double>::const_iterator * restrict iter,
    const std::map<uint64_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_iterator_next_(
    std::map<uint64_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, Float64}, map::Main.StdMaps.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_double_iterator_done(
    const std::map<uint64_t,double>::const_iterator * restrict iter,
    const std::map<uint64_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_uint64_t_double_iterator_getindex(
    const std::map<uint64_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt8}(res)::Main.StdMaps.StdMap{UInt64, UInt8}
end
*/
extern "C" std::map<uint64_t,uint8_t> * std_map_uint64_t_uint8_t_new(
    
) {
    return new std::map<uint64_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_delete(
    std::map<uint64_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint8_t_length(
    const std::map<uint64_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, UInt8}, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_uint8_t_haskey(
    const std::map<uint64_t,uint8_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt8}, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint64_t_uint8_t_getindex(
    const std::map<uint64_t,uint8_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt64), map, convert(UInt8, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_setindex_(
    std::map<uint64_t,uint8_t> * restrict map,
    uint8_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, UInt8}, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, UInt8}
end
*/
extern "C" void std_map_uint64_t_uint8_t_delete_(
    std::map<uint64_t,uint8_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, UInt8}(res)::Main.StdMaps.StdMapIterator{UInt64, UInt8}
end
*/
extern "C" std::map<uint64_t,uint8_t>::const_iterator * std_map_uint64_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_const_iterator_delete(
    std::map<uint64_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt8}, map::Main.StdMaps.StdMap{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_iterator_iterate_(
    std::map<uint64_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_iterator_next_(
    std::map<uint64_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, UInt8}, map::Main.StdMaps.StdMap{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_uint8_t_iterator_done(
    const std::map<uint64_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint64_t_uint8_t_iterator_getindex(
    const std::map<uint64_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt16}(res)::Main.StdMaps.StdMap{UInt64, UInt16}
end
*/
extern "C" std::map<uint64_t,uint16_t> * std_map_uint64_t_uint16_t_new(
    
) {
    return new std::map<uint64_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_delete(
    std::map<uint64_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint16_t_length(
    const std::map<uint64_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt64, UInt16}, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint64_t_uint16_t_haskey(
    const std::map<uint64_t,uint16_t> * restrict map,
    uint64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt16}, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint64_t_uint16_t_getindex(
    const std::map<uint64_t,uint16_t> * restrict map,
    uint64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt64), map, convert(UInt16, elt), convert(UInt64, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_setindex_(
    std::map<uint64_t,uint16_t> * restrict map,
    uint16_t elt,
    uint64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt64, UInt16}, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), map, convert(UInt64, key))
    return map::Main.StdMaps.StdMap{UInt64, UInt16}
end
*/
extern "C" void std_map_uint64_t_uint16_t_delete_(
    std::map<uint64_t,uint16_t> * restrict map,
    uint64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt64}, type::Type{UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt64, UInt16}(res)::Main.StdMaps.StdMapIterator{UInt64, UInt16}
end
*/
extern "C" std::map<uint64_t,uint16_t>::const_iterator * std_map_uint64_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<uint64_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_const_iterator_delete(
    std::map<uint64_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt16}, map::Main.StdMaps.StdMap{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_iterator_iterate_(
    std::map<uint64_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_iterator_next_(
    std::map<uint64_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt64, UInt16}, map::Main.StdMaps.StdMap{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint64_t_uint16_t_iterator_done(
    const std::map<uint64_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint64_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint64_t_uint16_t_iterator_getindex(
    const std::map<uint64_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt64})
    res = ccall(("std_map_int8_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt64}(res)::Main.StdMaps.StdMap{Int8, UInt64}
end
*/
extern "C" std::map<int8_t,uint64_t> * std_map_int8_t_uint64_t_new(
    
) {
    return new std::map<int8_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_delete(
    std::map<int8_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint64_t_length(
    const std::map<int8_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_uint64_t_haskey(
    const std::map<int8_t,uint64_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int8_t_uint64_t_getindex(
    const std::map<int8_t,uint64_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int8), map, convert(UInt64, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_setindex_(
    std::map<int8_t,uint64_t> * restrict map,
    uint64_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, UInt64}
end
*/
extern "C" void std_map_int8_t_uint64_t_delete_(
    std::map<int8_t,uint64_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, UInt64}(res)::Main.StdMaps.StdMapIterator{Int8, UInt64}
end
*/
extern "C" std::map<int8_t,uint64_t>::const_iterator * std_map_int8_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<int8_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_const_iterator_delete(
    std::map<int8_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, UInt64}, map::Main.StdMaps.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_iterator_iterate_(
    std::map<int8_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_iterator_next_(
    std::map<int8_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, UInt64}, map::Main.StdMaps.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_uint64_t_iterator_done(
    const std::map<int8_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int8_t_uint64_t_iterator_getindex(
    const std::map<int8_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int8})
    res = ccall(("std_map_int8_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int8}(res)::Main.StdMaps.StdMap{Int8, Int8}
end
*/
extern "C" std::map<int8_t,int8_t> * std_map_int8_t_int8_t_new(
    
) {
    return new std::map<int8_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_delete(
    std::map<int8_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int8_t_length(
    const std::map<int8_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int8_t_haskey(
    const std::map<int8_t,int8_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int8_t_int8_t_getindex(
    const std::map<int8_t,int8_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int8), map, convert(Int8, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_setindex_(
    std::map<int8_t,int8_t> * restrict map,
    int8_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Int8}
end
*/
extern "C" void std_map_int8_t_int8_t_delete_(
    std::map<int8_t,int8_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Int8}(res)::Main.StdMaps.StdMapIterator{Int8, Int8}
end
*/
extern "C" std::map<int8_t,int8_t>::const_iterator * std_map_int8_t_int8_t_const_iterator_new(
    
) {
    return new std::map<int8_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_const_iterator_delete(
    std::map<int8_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Int8}, map::Main.StdMaps.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_iterator_iterate_(
    std::map<int8_t,int8_t>::const_iterator * restrict iter,
    const std::map<int8_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_iterator_next_(
    std::map<int8_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Int8}, map::Main.StdMaps.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_int8_t_iterator_done(
    const std::map<int8_t,int8_t>::const_iterator * restrict iter,
    const std::map<int8_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_int8_t_int8_t_iterator_getindex(
    const std::map<int8_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int16})
    res = ccall(("std_map_int8_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int16}(res)::Main.StdMaps.StdMap{Int8, Int16}
end
*/
extern "C" std::map<int8_t,int16_t> * std_map_int8_t_int16_t_new(
    
) {
    return new std::map<int8_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_delete(
    std::map<int8_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int16_t_length(
    const std::map<int8_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Int16}, key::Any)
    res = ccall(("std_map_int8_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int16_t_haskey(
    const std::map<int8_t,int16_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int16}, key::Any)
    res = ccall(("std_map_int8_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int8_t_int16_t_getindex(
    const std::map<int8_t,int16_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int8), map, convert(Int16, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_setindex_(
    std::map<int8_t,int16_t> * restrict map,
    int16_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Int16}, key::Any)
    res = ccall(("std_map_int8_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Int16}
end
*/
extern "C" void std_map_int8_t_int16_t_delete_(
    std::map<int8_t,int16_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Int16})
    res = ccall(("std_map_int8_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Int16}(res)::Main.StdMaps.StdMapIterator{Int8, Int16}
end
*/
extern "C" std::map<int8_t,int16_t>::const_iterator * std_map_int8_t_int16_t_const_iterator_new(
    
) {
    return new std::map<int8_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_const_iterator_delete(
    std::map<int8_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Int16}, map::Main.StdMaps.StdMap{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_iterator_iterate_(
    std::map<int8_t,int16_t>::const_iterator * restrict iter,
    const std::map<int8_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_iterator_next_(
    std::map<int8_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Int16}, map::Main.StdMaps.StdMap{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_int16_t_iterator_done(
    const std::map<int8_t,int16_t>::const_iterator * restrict iter,
    const std::map<int8_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_int8_t_int16_t_iterator_getindex(
    const std::map<int8_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int64})
    res = ccall(("std_map_int8_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int64}(res)::Main.StdMaps.StdMap{Int8, Int64}
end
*/
extern "C" std::map<int8_t,int64_t> * std_map_int8_t_int64_t_new(
    
) {
    return new std::map<int8_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_delete(
    std::map<int8_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int64_t_length(
    const std::map<int8_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int64_t_haskey(
    const std::map<int8_t,int64_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int8_t_int64_t_getindex(
    const std::map<int8_t,int64_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int8), map, convert(Int64, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_setindex_(
    std::map<int8_t,int64_t> * restrict map,
    int64_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Int64}
end
*/
extern "C" void std_map_int8_t_int64_t_delete_(
    std::map<int8_t,int64_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Int64}(res)::Main.StdMaps.StdMapIterator{Int8, Int64}
end
*/
extern "C" std::map<int8_t,int64_t>::const_iterator * std_map_int8_t_int64_t_const_iterator_new(
    
) {
    return new std::map<int8_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_const_iterator_delete(
    std::map<int8_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Int64}, map::Main.StdMaps.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_iterator_iterate_(
    std::map<int8_t,int64_t>::const_iterator * restrict iter,
    const std::map<int8_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_iterator_next_(
    std::map<int8_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Int64}, map::Main.StdMaps.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_int64_t_iterator_done(
    const std::map<int8_t,int64_t>::const_iterator * restrict iter,
    const std::map<int8_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_int8_t_int64_t_iterator_getindex(
    const std::map<int8_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt32})
    res = ccall(("std_map_int8_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt32}(res)::Main.StdMaps.StdMap{Int8, UInt32}
end
*/
extern "C" std::map<int8_t,uint32_t> * std_map_int8_t_uint32_t_new(
    
) {
    return new std::map<int8_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_delete(
    std::map<int8_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint32_t_length(
    const std::map<int8_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, UInt32}, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_uint32_t_haskey(
    const std::map<int8_t,uint32_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt32}, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int8_t_uint32_t_getindex(
    const std::map<int8_t,uint32_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int8), map, convert(UInt32, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_setindex_(
    std::map<int8_t,uint32_t> * restrict map,
    uint32_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, UInt32}, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, UInt32}
end
*/
extern "C" void std_map_int8_t_uint32_t_delete_(
    std::map<int8_t,uint32_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{UInt32})
    res = ccall(("std_map_int8_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, UInt32}(res)::Main.StdMaps.StdMapIterator{Int8, UInt32}
end
*/
extern "C" std::map<int8_t,uint32_t>::const_iterator * std_map_int8_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<int8_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_const_iterator_delete(
    std::map<int8_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, UInt32}, map::Main.StdMaps.StdMap{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_iterator_iterate_(
    std::map<int8_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_iterator_next_(
    std::map<int8_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, UInt32}, map::Main.StdMaps.StdMap{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_uint32_t_iterator_done(
    const std::map<int8_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int8_t_uint32_t_iterator_getindex(
    const std::map<int8_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Float32})
    res = ccall(("std_map_int8_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Float32}(res)::Main.StdMaps.StdMap{Int8, Float32}
end
*/
extern "C" std::map<int8_t,float> * std_map_int8_t_float_new(
    
) {
    return new std::map<int8_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Float32})
    res = ccall(("std_map_int8_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_delete(
    std::map<int8_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Float32})
    res = ccall(("std_map_int8_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_float_length(
    const std::map<int8_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Float32}, key::Any)
    res = ccall(("std_map_int8_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_float_haskey(
    const std::map<int8_t,float> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Float32}, key::Any)
    res = ccall(("std_map_int8_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Float32
end
*/
extern "C" float std_map_int8_t_float_getindex(
    const std::map<int8_t,float> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int8), map, convert(Float32, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_setindex_(
    std::map<int8_t,float> * restrict map,
    float elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Float32}, key::Any)
    res = ccall(("std_map_int8_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Float32}
end
*/
extern "C" void std_map_int8_t_float_delete_(
    std::map<int8_t,float> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Float32})
    res = ccall(("std_map_int8_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Float32}(res)::Main.StdMaps.StdMapIterator{Int8, Float32}
end
*/
extern "C" std::map<int8_t,float>::const_iterator * std_map_int8_t_float_const_iterator_new(
    
) {
    return new std::map<int8_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Float32})
    res = ccall(("std_map_int8_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_const_iterator_delete(
    std::map<int8_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Float32}, map::Main.StdMaps.StdMap{Int8, Float32})
    res = ccall(("std_map_int8_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_iterator_iterate_(
    std::map<int8_t,float>::const_iterator * restrict iter,
    const std::map<int8_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Float32})
    res = ccall(("std_map_int8_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_iterator_next_(
    std::map<int8_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Float32}, map::Main.StdMaps.StdMap{Int8, Float32})
    res = ccall(("std_map_int8_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_float_iterator_done(
    const std::map<int8_t,float>::const_iterator * restrict iter,
    const std::map<int8_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Float32})
    res = ccall(("std_map_int8_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_int8_t_float_iterator_getindex(
    const std::map<int8_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int32})
    res = ccall(("std_map_int8_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int32}(res)::Main.StdMaps.StdMap{Int8, Int32}
end
*/
extern "C" std::map<int8_t,int32_t> * std_map_int8_t_int32_t_new(
    
) {
    return new std::map<int8_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_delete(
    std::map<int8_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int32_t_length(
    const std::map<int8_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Int32}, key::Any)
    res = ccall(("std_map_int8_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_int32_t_haskey(
    const std::map<int8_t,int32_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int32}, key::Any)
    res = ccall(("std_map_int8_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int8_t_int32_t_getindex(
    const std::map<int8_t,int32_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int8), map, convert(Int32, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_setindex_(
    std::map<int8_t,int32_t> * restrict map,
    int32_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Int32}, key::Any)
    res = ccall(("std_map_int8_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Int32}
end
*/
extern "C" void std_map_int8_t_int32_t_delete_(
    std::map<int8_t,int32_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Int32})
    res = ccall(("std_map_int8_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Int32}(res)::Main.StdMaps.StdMapIterator{Int8, Int32}
end
*/
extern "C" std::map<int8_t,int32_t>::const_iterator * std_map_int8_t_int32_t_const_iterator_new(
    
) {
    return new std::map<int8_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_const_iterator_delete(
    std::map<int8_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Int32}, map::Main.StdMaps.StdMap{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_iterator_iterate_(
    std::map<int8_t,int32_t>::const_iterator * restrict iter,
    const std::map<int8_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_iterator_next_(
    std::map<int8_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Int32}, map::Main.StdMaps.StdMap{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_int32_t_iterator_done(
    const std::map<int8_t,int32_t>::const_iterator * restrict iter,
    const std::map<int8_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_int8_t_int32_t_iterator_getindex(
    const std::map<int8_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Float64})
    res = ccall(("std_map_int8_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Float64}(res)::Main.StdMaps.StdMap{Int8, Float64}
end
*/
extern "C" std::map<int8_t,double> * std_map_int8_t_double_new(
    
) {
    return new std::map<int8_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_delete(
    std::map<int8_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_double_length(
    const std::map<int8_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_double_haskey(
    const std::map<int8_t,double> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::Float64
end
*/
extern "C" double std_map_int8_t_double_getindex(
    const std::map<int8_t,double> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int8), map, convert(Float64, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_setindex_(
    std::map<int8_t,double> * restrict map,
    double elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, Float64}
end
*/
extern "C" void std_map_int8_t_double_delete_(
    std::map<int8_t,double> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, Float64}(res)::Main.StdMaps.StdMapIterator{Int8, Float64}
end
*/
extern "C" std::map<int8_t,double>::const_iterator * std_map_int8_t_double_const_iterator_new(
    
) {
    return new std::map<int8_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_const_iterator_delete(
    std::map<int8_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, Float64}, map::Main.StdMaps.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_iterator_iterate_(
    std::map<int8_t,double>::const_iterator * restrict iter,
    const std::map<int8_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_iterator_next_(
    std::map<int8_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, Float64}, map::Main.StdMaps.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_double_iterator_done(
    const std::map<int8_t,double>::const_iterator * restrict iter,
    const std::map<int8_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, Float64})
    res = ccall(("std_map_int8_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_int8_t_double_iterator_getindex(
    const std::map<int8_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt8})
    res = ccall(("std_map_int8_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt8}(res)::Main.StdMaps.StdMap{Int8, UInt8}
end
*/
extern "C" std::map<int8_t,uint8_t> * std_map_int8_t_uint8_t_new(
    
) {
    return new std::map<int8_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_delete(
    std::map<int8_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint8_t_length(
    const std::map<int8_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, UInt8}, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_uint8_t_haskey(
    const std::map<int8_t,uint8_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt8}, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int8_t_uint8_t_getindex(
    const std::map<int8_t,uint8_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int8), map, convert(UInt8, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_setindex_(
    std::map<int8_t,uint8_t> * restrict map,
    uint8_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, UInt8}, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, UInt8}
end
*/
extern "C" void std_map_int8_t_uint8_t_delete_(
    std::map<int8_t,uint8_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{UInt8})
    res = ccall(("std_map_int8_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, UInt8}(res)::Main.StdMaps.StdMapIterator{Int8, UInt8}
end
*/
extern "C" std::map<int8_t,uint8_t>::const_iterator * std_map_int8_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<int8_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_const_iterator_delete(
    std::map<int8_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, UInt8}, map::Main.StdMaps.StdMap{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_iterator_iterate_(
    std::map<int8_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_iterator_next_(
    std::map<int8_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, UInt8}, map::Main.StdMaps.StdMap{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_uint8_t_iterator_done(
    const std::map<int8_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int8_t_uint8_t_iterator_getindex(
    const std::map<int8_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt16})
    res = ccall(("std_map_int8_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt16}(res)::Main.StdMaps.StdMap{Int8, UInt16}
end
*/
extern "C" std::map<int8_t,uint16_t> * std_map_int8_t_uint16_t_new(
    
) {
    return new std::map<int8_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_delete(
    std::map<int8_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint16_t_length(
    const std::map<int8_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int8, UInt16}, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int8_t_uint16_t_haskey(
    const std::map<int8_t,uint16_t> * restrict map,
    int8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt16}, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int8_t_uint16_t_getindex(
    const std::map<int8_t,uint16_t> * restrict map,
    int8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int8), map, convert(UInt16, elt), convert(Int8, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_setindex_(
    std::map<int8_t,uint16_t> * restrict map,
    uint16_t elt,
    int8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int8, UInt16}, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), map, convert(Int8, key))
    return map::Main.StdMaps.StdMap{Int8, UInt16}
end
*/
extern "C" void std_map_int8_t_uint16_t_delete_(
    std::map<int8_t,uint16_t> * restrict map,
    int8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int8}, type::Type{UInt16})
    res = ccall(("std_map_int8_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int8, UInt16}(res)::Main.StdMaps.StdMapIterator{Int8, UInt16}
end
*/
extern "C" std::map<int8_t,uint16_t>::const_iterator * std_map_int8_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<int8_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_const_iterator_delete(
    std::map<int8_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int8, UInt16}, map::Main.StdMaps.StdMap{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_iterator_iterate_(
    std::map<int8_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_iterator_next_(
    std::map<int8_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int8, UInt16}, map::Main.StdMaps.StdMap{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int8_t_uint16_t_iterator_done(
    const std::map<int8_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int8_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int8_t_uint16_t_iterator_getindex(
    const std::map<int8_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt64})
    res = ccall(("std_map_int16_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt64}(res)::Main.StdMaps.StdMap{Int16, UInt64}
end
*/
extern "C" std::map<int16_t,uint64_t> * std_map_int16_t_uint64_t_new(
    
) {
    return new std::map<int16_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_delete(
    std::map<int16_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint64_t_length(
    const std::map<int16_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, UInt64}, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_uint64_t_haskey(
    const std::map<int16_t,uint64_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt64}, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int16_t_uint64_t_getindex(
    const std::map<int16_t,uint64_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int16), map, convert(UInt64, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_setindex_(
    std::map<int16_t,uint64_t> * restrict map,
    uint64_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, UInt64}, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, UInt64}
end
*/
extern "C" void std_map_int16_t_uint64_t_delete_(
    std::map<int16_t,uint64_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{UInt64})
    res = ccall(("std_map_int16_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, UInt64}(res)::Main.StdMaps.StdMapIterator{Int16, UInt64}
end
*/
extern "C" std::map<int16_t,uint64_t>::const_iterator * std_map_int16_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<int16_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_const_iterator_delete(
    std::map<int16_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, UInt64}, map::Main.StdMaps.StdMap{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_iterator_iterate_(
    std::map<int16_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_iterator_next_(
    std::map<int16_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, UInt64}, map::Main.StdMaps.StdMap{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_uint64_t_iterator_done(
    const std::map<int16_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int16_t_uint64_t_iterator_getindex(
    const std::map<int16_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int8})
    res = ccall(("std_map_int16_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int8}(res)::Main.StdMaps.StdMap{Int16, Int8}
end
*/
extern "C" std::map<int16_t,int8_t> * std_map_int16_t_int8_t_new(
    
) {
    return new std::map<int16_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_delete(
    std::map<int16_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int8_t_length(
    const std::map<int16_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Int8}, key::Any)
    res = ccall(("std_map_int16_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_int8_t_haskey(
    const std::map<int16_t,int8_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int8}, key::Any)
    res = ccall(("std_map_int16_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int16_t_int8_t_getindex(
    const std::map<int16_t,int8_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int16), map, convert(Int8, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_setindex_(
    std::map<int16_t,int8_t> * restrict map,
    int8_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Int8}, key::Any)
    res = ccall(("std_map_int16_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Int8}
end
*/
extern "C" void std_map_int16_t_int8_t_delete_(
    std::map<int16_t,int8_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Int8})
    res = ccall(("std_map_int16_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Int8}(res)::Main.StdMaps.StdMapIterator{Int16, Int8}
end
*/
extern "C" std::map<int16_t,int8_t>::const_iterator * std_map_int16_t_int8_t_const_iterator_new(
    
) {
    return new std::map<int16_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_const_iterator_delete(
    std::map<int16_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Int8}, map::Main.StdMaps.StdMap{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_iterator_iterate_(
    std::map<int16_t,int8_t>::const_iterator * restrict iter,
    const std::map<int16_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_iterator_next_(
    std::map<int16_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Int8}, map::Main.StdMaps.StdMap{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_int8_t_iterator_done(
    const std::map<int16_t,int8_t>::const_iterator * restrict iter,
    const std::map<int16_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_int16_t_int8_t_iterator_getindex(
    const std::map<int16_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int16})
    res = ccall(("std_map_int16_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int16}(res)::Main.StdMaps.StdMap{Int16, Int16}
end
*/
extern "C" std::map<int16_t,int16_t> * std_map_int16_t_int16_t_new(
    
) {
    return new std::map<int16_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_delete(
    std::map<int16_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int16_t_length(
    const std::map<int16_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Int16}, key::Any)
    res = ccall(("std_map_int16_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_int16_t_haskey(
    const std::map<int16_t,int16_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int16}, key::Any)
    res = ccall(("std_map_int16_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int16_t_int16_t_getindex(
    const std::map<int16_t,int16_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int16), map, convert(Int16, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_setindex_(
    std::map<int16_t,int16_t> * restrict map,
    int16_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Int16}, key::Any)
    res = ccall(("std_map_int16_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Int16}
end
*/
extern "C" void std_map_int16_t_int16_t_delete_(
    std::map<int16_t,int16_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Int16})
    res = ccall(("std_map_int16_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Int16}(res)::Main.StdMaps.StdMapIterator{Int16, Int16}
end
*/
extern "C" std::map<int16_t,int16_t>::const_iterator * std_map_int16_t_int16_t_const_iterator_new(
    
) {
    return new std::map<int16_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_const_iterator_delete(
    std::map<int16_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Int16}, map::Main.StdMaps.StdMap{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_iterator_iterate_(
    std::map<int16_t,int16_t>::const_iterator * restrict iter,
    const std::map<int16_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_iterator_next_(
    std::map<int16_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Int16}, map::Main.StdMaps.StdMap{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_int16_t_iterator_done(
    const std::map<int16_t,int16_t>::const_iterator * restrict iter,
    const std::map<int16_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_int16_t_int16_t_iterator_getindex(
    const std::map<int16_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int64})
    res = ccall(("std_map_int16_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int64}(res)::Main.StdMaps.StdMap{Int16, Int64}
end
*/
extern "C" std::map<int16_t,int64_t> * std_map_int16_t_int64_t_new(
    
) {
    return new std::map<int16_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_delete(
    std::map<int16_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int64_t_length(
    const std::map<int16_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Int64}, key::Any)
    res = ccall(("std_map_int16_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_int64_t_haskey(
    const std::map<int16_t,int64_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int64}, key::Any)
    res = ccall(("std_map_int16_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int16_t_int64_t_getindex(
    const std::map<int16_t,int64_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int16), map, convert(Int64, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_setindex_(
    std::map<int16_t,int64_t> * restrict map,
    int64_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Int64}, key::Any)
    res = ccall(("std_map_int16_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Int64}
end
*/
extern "C" void std_map_int16_t_int64_t_delete_(
    std::map<int16_t,int64_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Int64})
    res = ccall(("std_map_int16_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Int64}(res)::Main.StdMaps.StdMapIterator{Int16, Int64}
end
*/
extern "C" std::map<int16_t,int64_t>::const_iterator * std_map_int16_t_int64_t_const_iterator_new(
    
) {
    return new std::map<int16_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_const_iterator_delete(
    std::map<int16_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Int64}, map::Main.StdMaps.StdMap{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_iterator_iterate_(
    std::map<int16_t,int64_t>::const_iterator * restrict iter,
    const std::map<int16_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_iterator_next_(
    std::map<int16_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Int64}, map::Main.StdMaps.StdMap{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_int64_t_iterator_done(
    const std::map<int16_t,int64_t>::const_iterator * restrict iter,
    const std::map<int16_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_int16_t_int64_t_iterator_getindex(
    const std::map<int16_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt32})
    res = ccall(("std_map_int16_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt32}(res)::Main.StdMaps.StdMap{Int16, UInt32}
end
*/
extern "C" std::map<int16_t,uint32_t> * std_map_int16_t_uint32_t_new(
    
) {
    return new std::map<int16_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_delete(
    std::map<int16_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint32_t_length(
    const std::map<int16_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, UInt32}, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_uint32_t_haskey(
    const std::map<int16_t,uint32_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt32}, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int16_t_uint32_t_getindex(
    const std::map<int16_t,uint32_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int16), map, convert(UInt32, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_setindex_(
    std::map<int16_t,uint32_t> * restrict map,
    uint32_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, UInt32}, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, UInt32}
end
*/
extern "C" void std_map_int16_t_uint32_t_delete_(
    std::map<int16_t,uint32_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{UInt32})
    res = ccall(("std_map_int16_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, UInt32}(res)::Main.StdMaps.StdMapIterator{Int16, UInt32}
end
*/
extern "C" std::map<int16_t,uint32_t>::const_iterator * std_map_int16_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<int16_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_const_iterator_delete(
    std::map<int16_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, UInt32}, map::Main.StdMaps.StdMap{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_iterator_iterate_(
    std::map<int16_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_iterator_next_(
    std::map<int16_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, UInt32}, map::Main.StdMaps.StdMap{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_uint32_t_iterator_done(
    const std::map<int16_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int16_t_uint32_t_iterator_getindex(
    const std::map<int16_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Float32})
    res = ccall(("std_map_int16_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Float32}(res)::Main.StdMaps.StdMap{Int16, Float32}
end
*/
extern "C" std::map<int16_t,float> * std_map_int16_t_float_new(
    
) {
    return new std::map<int16_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Float32})
    res = ccall(("std_map_int16_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_delete(
    std::map<int16_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Float32})
    res = ccall(("std_map_int16_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_float_length(
    const std::map<int16_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Float32}, key::Any)
    res = ccall(("std_map_int16_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_float_haskey(
    const std::map<int16_t,float> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Float32}, key::Any)
    res = ccall(("std_map_int16_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Float32
end
*/
extern "C" float std_map_int16_t_float_getindex(
    const std::map<int16_t,float> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int16), map, convert(Float32, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_setindex_(
    std::map<int16_t,float> * restrict map,
    float elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Float32}, key::Any)
    res = ccall(("std_map_int16_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Float32}
end
*/
extern "C" void std_map_int16_t_float_delete_(
    std::map<int16_t,float> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Float32})
    res = ccall(("std_map_int16_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Float32}(res)::Main.StdMaps.StdMapIterator{Int16, Float32}
end
*/
extern "C" std::map<int16_t,float>::const_iterator * std_map_int16_t_float_const_iterator_new(
    
) {
    return new std::map<int16_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Float32})
    res = ccall(("std_map_int16_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_const_iterator_delete(
    std::map<int16_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Float32}, map::Main.StdMaps.StdMap{Int16, Float32})
    res = ccall(("std_map_int16_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_iterator_iterate_(
    std::map<int16_t,float>::const_iterator * restrict iter,
    const std::map<int16_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Float32})
    res = ccall(("std_map_int16_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_iterator_next_(
    std::map<int16_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Float32}, map::Main.StdMaps.StdMap{Int16, Float32})
    res = ccall(("std_map_int16_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_float_iterator_done(
    const std::map<int16_t,float>::const_iterator * restrict iter,
    const std::map<int16_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Float32})
    res = ccall(("std_map_int16_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_int16_t_float_iterator_getindex(
    const std::map<int16_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int32})
    res = ccall(("std_map_int16_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int32}(res)::Main.StdMaps.StdMap{Int16, Int32}
end
*/
extern "C" std::map<int16_t,int32_t> * std_map_int16_t_int32_t_new(
    
) {
    return new std::map<int16_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_delete(
    std::map<int16_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int32_t_length(
    const std::map<int16_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Int32}, key::Any)
    res = ccall(("std_map_int16_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_int32_t_haskey(
    const std::map<int16_t,int32_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int32}, key::Any)
    res = ccall(("std_map_int16_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int16_t_int32_t_getindex(
    const std::map<int16_t,int32_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int16), map, convert(Int32, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_setindex_(
    std::map<int16_t,int32_t> * restrict map,
    int32_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Int32}, key::Any)
    res = ccall(("std_map_int16_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Int32}
end
*/
extern "C" void std_map_int16_t_int32_t_delete_(
    std::map<int16_t,int32_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Int32})
    res = ccall(("std_map_int16_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Int32}(res)::Main.StdMaps.StdMapIterator{Int16, Int32}
end
*/
extern "C" std::map<int16_t,int32_t>::const_iterator * std_map_int16_t_int32_t_const_iterator_new(
    
) {
    return new std::map<int16_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_const_iterator_delete(
    std::map<int16_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Int32}, map::Main.StdMaps.StdMap{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_iterator_iterate_(
    std::map<int16_t,int32_t>::const_iterator * restrict iter,
    const std::map<int16_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_iterator_next_(
    std::map<int16_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Int32}, map::Main.StdMaps.StdMap{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_int32_t_iterator_done(
    const std::map<int16_t,int32_t>::const_iterator * restrict iter,
    const std::map<int16_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_int16_t_int32_t_iterator_getindex(
    const std::map<int16_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Float64})
    res = ccall(("std_map_int16_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Float64}(res)::Main.StdMaps.StdMap{Int16, Float64}
end
*/
extern "C" std::map<int16_t,double> * std_map_int16_t_double_new(
    
) {
    return new std::map<int16_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Float64})
    res = ccall(("std_map_int16_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_delete(
    std::map<int16_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, Float64})
    res = ccall(("std_map_int16_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_double_length(
    const std::map<int16_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, Float64}, key::Any)
    res = ccall(("std_map_int16_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_double_haskey(
    const std::map<int16_t,double> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Float64}, key::Any)
    res = ccall(("std_map_int16_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::Float64
end
*/
extern "C" double std_map_int16_t_double_getindex(
    const std::map<int16_t,double> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int16), map, convert(Float64, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_setindex_(
    std::map<int16_t,double> * restrict map,
    double elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, Float64}, key::Any)
    res = ccall(("std_map_int16_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, Float64}
end
*/
extern "C" void std_map_int16_t_double_delete_(
    std::map<int16_t,double> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{Float64})
    res = ccall(("std_map_int16_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, Float64}(res)::Main.StdMaps.StdMapIterator{Int16, Float64}
end
*/
extern "C" std::map<int16_t,double>::const_iterator * std_map_int16_t_double_const_iterator_new(
    
) {
    return new std::map<int16_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, Float64})
    res = ccall(("std_map_int16_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_const_iterator_delete(
    std::map<int16_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, Float64}, map::Main.StdMaps.StdMap{Int16, Float64})
    res = ccall(("std_map_int16_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_iterator_iterate_(
    std::map<int16_t,double>::const_iterator * restrict iter,
    const std::map<int16_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, Float64})
    res = ccall(("std_map_int16_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_iterator_next_(
    std::map<int16_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, Float64}, map::Main.StdMaps.StdMap{Int16, Float64})
    res = ccall(("std_map_int16_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_double_iterator_done(
    const std::map<int16_t,double>::const_iterator * restrict iter,
    const std::map<int16_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, Float64})
    res = ccall(("std_map_int16_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_int16_t_double_iterator_getindex(
    const std::map<int16_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt8})
    res = ccall(("std_map_int16_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt8}(res)::Main.StdMaps.StdMap{Int16, UInt8}
end
*/
extern "C" std::map<int16_t,uint8_t> * std_map_int16_t_uint8_t_new(
    
) {
    return new std::map<int16_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_delete(
    std::map<int16_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint8_t_length(
    const std::map<int16_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, UInt8}, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_uint8_t_haskey(
    const std::map<int16_t,uint8_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt8}, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int16_t_uint8_t_getindex(
    const std::map<int16_t,uint8_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int16), map, convert(UInt8, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_setindex_(
    std::map<int16_t,uint8_t> * restrict map,
    uint8_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, UInt8}, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, UInt8}
end
*/
extern "C" void std_map_int16_t_uint8_t_delete_(
    std::map<int16_t,uint8_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{UInt8})
    res = ccall(("std_map_int16_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, UInt8}(res)::Main.StdMaps.StdMapIterator{Int16, UInt8}
end
*/
extern "C" std::map<int16_t,uint8_t>::const_iterator * std_map_int16_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<int16_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_const_iterator_delete(
    std::map<int16_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, UInt8}, map::Main.StdMaps.StdMap{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_iterator_iterate_(
    std::map<int16_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_iterator_next_(
    std::map<int16_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, UInt8}, map::Main.StdMaps.StdMap{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_uint8_t_iterator_done(
    const std::map<int16_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int16_t_uint8_t_iterator_getindex(
    const std::map<int16_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt16})
    res = ccall(("std_map_int16_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt16}(res)::Main.StdMaps.StdMap{Int16, UInt16}
end
*/
extern "C" std::map<int16_t,uint16_t> * std_map_int16_t_uint16_t_new(
    
) {
    return new std::map<int16_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_delete(
    std::map<int16_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint16_t_length(
    const std::map<int16_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int16, UInt16}, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int16_t_uint16_t_haskey(
    const std::map<int16_t,uint16_t> * restrict map,
    int16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt16}, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int16_t_uint16_t_getindex(
    const std::map<int16_t,uint16_t> * restrict map,
    int16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int16), map, convert(UInt16, elt), convert(Int16, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_setindex_(
    std::map<int16_t,uint16_t> * restrict map,
    uint16_t elt,
    int16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int16, UInt16}, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), map, convert(Int16, key))
    return map::Main.StdMaps.StdMap{Int16, UInt16}
end
*/
extern "C" void std_map_int16_t_uint16_t_delete_(
    std::map<int16_t,uint16_t> * restrict map,
    int16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int16}, type::Type{UInt16})
    res = ccall(("std_map_int16_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int16, UInt16}(res)::Main.StdMaps.StdMapIterator{Int16, UInt16}
end
*/
extern "C" std::map<int16_t,uint16_t>::const_iterator * std_map_int16_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<int16_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_const_iterator_delete(
    std::map<int16_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int16, UInt16}, map::Main.StdMaps.StdMap{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_iterator_iterate_(
    std::map<int16_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_iterator_next_(
    std::map<int16_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int16, UInt16}, map::Main.StdMaps.StdMap{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int16_t_uint16_t_iterator_done(
    const std::map<int16_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int16_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int16_t_uint16_t_iterator_getindex(
    const std::map<int16_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt64})
    res = ccall(("std_map_int64_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt64}(res)::Main.StdMaps.StdMap{Int64, UInt64}
end
*/
extern "C" std::map<int64_t,uint64_t> * std_map_int64_t_uint64_t_new(
    
) {
    return new std::map<int64_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_delete(
    std::map<int64_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint64_t_length(
    const std::map<int64_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_uint64_t_haskey(
    const std::map<int64_t,uint64_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int64_t_uint64_t_getindex(
    const std::map<int64_t,uint64_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int64), map, convert(UInt64, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_setindex_(
    std::map<int64_t,uint64_t> * restrict map,
    uint64_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, UInt64}
end
*/
extern "C" void std_map_int64_t_uint64_t_delete_(
    std::map<int64_t,uint64_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, UInt64}(res)::Main.StdMaps.StdMapIterator{Int64, UInt64}
end
*/
extern "C" std::map<int64_t,uint64_t>::const_iterator * std_map_int64_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<int64_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_const_iterator_delete(
    std::map<int64_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, UInt64}, map::Main.StdMaps.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_iterator_iterate_(
    std::map<int64_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_iterator_next_(
    std::map<int64_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, UInt64}, map::Main.StdMaps.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_uint64_t_iterator_done(
    const std::map<int64_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int64_t_uint64_t_iterator_getindex(
    const std::map<int64_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int8})
    res = ccall(("std_map_int64_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int8}(res)::Main.StdMaps.StdMap{Int64, Int8}
end
*/
extern "C" std::map<int64_t,int8_t> * std_map_int64_t_int8_t_new(
    
) {
    return new std::map<int64_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_delete(
    std::map<int64_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int8_t_length(
    const std::map<int64_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int8_t_haskey(
    const std::map<int64_t,int8_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int64_t_int8_t_getindex(
    const std::map<int64_t,int8_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int64), map, convert(Int8, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_setindex_(
    std::map<int64_t,int8_t> * restrict map,
    int8_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Int8}
end
*/
extern "C" void std_map_int64_t_int8_t_delete_(
    std::map<int64_t,int8_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Int8}(res)::Main.StdMaps.StdMapIterator{Int64, Int8}
end
*/
extern "C" std::map<int64_t,int8_t>::const_iterator * std_map_int64_t_int8_t_const_iterator_new(
    
) {
    return new std::map<int64_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_const_iterator_delete(
    std::map<int64_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Int8}, map::Main.StdMaps.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_iterator_iterate_(
    std::map<int64_t,int8_t>::const_iterator * restrict iter,
    const std::map<int64_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_iterator_next_(
    std::map<int64_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Int8}, map::Main.StdMaps.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_int8_t_iterator_done(
    const std::map<int64_t,int8_t>::const_iterator * restrict iter,
    const std::map<int64_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_int64_t_int8_t_iterator_getindex(
    const std::map<int64_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int16})
    res = ccall(("std_map_int64_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int16}(res)::Main.StdMaps.StdMap{Int64, Int16}
end
*/
extern "C" std::map<int64_t,int16_t> * std_map_int64_t_int16_t_new(
    
) {
    return new std::map<int64_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_delete(
    std::map<int64_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int16_t_length(
    const std::map<int64_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Int16}, key::Any)
    res = ccall(("std_map_int64_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int16_t_haskey(
    const std::map<int64_t,int16_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int16}, key::Any)
    res = ccall(("std_map_int64_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int64_t_int16_t_getindex(
    const std::map<int64_t,int16_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int64), map, convert(Int16, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_setindex_(
    std::map<int64_t,int16_t> * restrict map,
    int16_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Int16}, key::Any)
    res = ccall(("std_map_int64_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Int16}
end
*/
extern "C" void std_map_int64_t_int16_t_delete_(
    std::map<int64_t,int16_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Int16})
    res = ccall(("std_map_int64_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Int16}(res)::Main.StdMaps.StdMapIterator{Int64, Int16}
end
*/
extern "C" std::map<int64_t,int16_t>::const_iterator * std_map_int64_t_int16_t_const_iterator_new(
    
) {
    return new std::map<int64_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_const_iterator_delete(
    std::map<int64_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Int16}, map::Main.StdMaps.StdMap{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_iterator_iterate_(
    std::map<int64_t,int16_t>::const_iterator * restrict iter,
    const std::map<int64_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_iterator_next_(
    std::map<int64_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Int16}, map::Main.StdMaps.StdMap{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_int16_t_iterator_done(
    const std::map<int64_t,int16_t>::const_iterator * restrict iter,
    const std::map<int64_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_int64_t_int16_t_iterator_getindex(
    const std::map<int64_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int64})
    res = ccall(("std_map_int64_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int64}(res)::Main.StdMaps.StdMap{Int64, Int64}
end
*/
extern "C" std::map<int64_t,int64_t> * std_map_int64_t_int64_t_new(
    
) {
    return new std::map<int64_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_delete(
    std::map<int64_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int64_t_length(
    const std::map<int64_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int64_t_haskey(
    const std::map<int64_t,int64_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int64_t_int64_t_getindex(
    const std::map<int64_t,int64_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int64), map, convert(Int64, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_setindex_(
    std::map<int64_t,int64_t> * restrict map,
    int64_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Int64}
end
*/
extern "C" void std_map_int64_t_int64_t_delete_(
    std::map<int64_t,int64_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Int64}(res)::Main.StdMaps.StdMapIterator{Int64, Int64}
end
*/
extern "C" std::map<int64_t,int64_t>::const_iterator * std_map_int64_t_int64_t_const_iterator_new(
    
) {
    return new std::map<int64_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_const_iterator_delete(
    std::map<int64_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Int64}, map::Main.StdMaps.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_iterator_iterate_(
    std::map<int64_t,int64_t>::const_iterator * restrict iter,
    const std::map<int64_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_iterator_next_(
    std::map<int64_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Int64}, map::Main.StdMaps.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_int64_t_iterator_done(
    const std::map<int64_t,int64_t>::const_iterator * restrict iter,
    const std::map<int64_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_int64_t_int64_t_iterator_getindex(
    const std::map<int64_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt32})
    res = ccall(("std_map_int64_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt32}(res)::Main.StdMaps.StdMap{Int64, UInt32}
end
*/
extern "C" std::map<int64_t,uint32_t> * std_map_int64_t_uint32_t_new(
    
) {
    return new std::map<int64_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_delete(
    std::map<int64_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint32_t_length(
    const std::map<int64_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, UInt32}, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_uint32_t_haskey(
    const std::map<int64_t,uint32_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt32}, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int64_t_uint32_t_getindex(
    const std::map<int64_t,uint32_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int64), map, convert(UInt32, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_setindex_(
    std::map<int64_t,uint32_t> * restrict map,
    uint32_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, UInt32}, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, UInt32}
end
*/
extern "C" void std_map_int64_t_uint32_t_delete_(
    std::map<int64_t,uint32_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{UInt32})
    res = ccall(("std_map_int64_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, UInt32}(res)::Main.StdMaps.StdMapIterator{Int64, UInt32}
end
*/
extern "C" std::map<int64_t,uint32_t>::const_iterator * std_map_int64_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<int64_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_const_iterator_delete(
    std::map<int64_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, UInt32}, map::Main.StdMaps.StdMap{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_iterator_iterate_(
    std::map<int64_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_iterator_next_(
    std::map<int64_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, UInt32}, map::Main.StdMaps.StdMap{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_uint32_t_iterator_done(
    const std::map<int64_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int64_t_uint32_t_iterator_getindex(
    const std::map<int64_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Float32})
    res = ccall(("std_map_int64_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Float32}(res)::Main.StdMaps.StdMap{Int64, Float32}
end
*/
extern "C" std::map<int64_t,float> * std_map_int64_t_float_new(
    
) {
    return new std::map<int64_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Float32})
    res = ccall(("std_map_int64_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_delete(
    std::map<int64_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Float32})
    res = ccall(("std_map_int64_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_float_length(
    const std::map<int64_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Float32}, key::Any)
    res = ccall(("std_map_int64_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_float_haskey(
    const std::map<int64_t,float> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Float32}, key::Any)
    res = ccall(("std_map_int64_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Float32
end
*/
extern "C" float std_map_int64_t_float_getindex(
    const std::map<int64_t,float> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int64), map, convert(Float32, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_setindex_(
    std::map<int64_t,float> * restrict map,
    float elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Float32}, key::Any)
    res = ccall(("std_map_int64_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Float32}
end
*/
extern "C" void std_map_int64_t_float_delete_(
    std::map<int64_t,float> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Float32})
    res = ccall(("std_map_int64_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Float32}(res)::Main.StdMaps.StdMapIterator{Int64, Float32}
end
*/
extern "C" std::map<int64_t,float>::const_iterator * std_map_int64_t_float_const_iterator_new(
    
) {
    return new std::map<int64_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Float32})
    res = ccall(("std_map_int64_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_const_iterator_delete(
    std::map<int64_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Float32}, map::Main.StdMaps.StdMap{Int64, Float32})
    res = ccall(("std_map_int64_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_iterator_iterate_(
    std::map<int64_t,float>::const_iterator * restrict iter,
    const std::map<int64_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Float32})
    res = ccall(("std_map_int64_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_iterator_next_(
    std::map<int64_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Float32}, map::Main.StdMaps.StdMap{Int64, Float32})
    res = ccall(("std_map_int64_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_float_iterator_done(
    const std::map<int64_t,float>::const_iterator * restrict iter,
    const std::map<int64_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Float32})
    res = ccall(("std_map_int64_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_int64_t_float_iterator_getindex(
    const std::map<int64_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int32})
    res = ccall(("std_map_int64_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int32}(res)::Main.StdMaps.StdMap{Int64, Int32}
end
*/
extern "C" std::map<int64_t,int32_t> * std_map_int64_t_int32_t_new(
    
) {
    return new std::map<int64_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_delete(
    std::map<int64_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int32_t_length(
    const std::map<int64_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Int32}, key::Any)
    res = ccall(("std_map_int64_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_int32_t_haskey(
    const std::map<int64_t,int32_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int32}, key::Any)
    res = ccall(("std_map_int64_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int64_t_int32_t_getindex(
    const std::map<int64_t,int32_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int64), map, convert(Int32, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_setindex_(
    std::map<int64_t,int32_t> * restrict map,
    int32_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Int32}, key::Any)
    res = ccall(("std_map_int64_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Int32}
end
*/
extern "C" void std_map_int64_t_int32_t_delete_(
    std::map<int64_t,int32_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Int32})
    res = ccall(("std_map_int64_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Int32}(res)::Main.StdMaps.StdMapIterator{Int64, Int32}
end
*/
extern "C" std::map<int64_t,int32_t>::const_iterator * std_map_int64_t_int32_t_const_iterator_new(
    
) {
    return new std::map<int64_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_const_iterator_delete(
    std::map<int64_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Int32}, map::Main.StdMaps.StdMap{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_iterator_iterate_(
    std::map<int64_t,int32_t>::const_iterator * restrict iter,
    const std::map<int64_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_iterator_next_(
    std::map<int64_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Int32}, map::Main.StdMaps.StdMap{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_int32_t_iterator_done(
    const std::map<int64_t,int32_t>::const_iterator * restrict iter,
    const std::map<int64_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_int64_t_int32_t_iterator_getindex(
    const std::map<int64_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Float64})
    res = ccall(("std_map_int64_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Float64}(res)::Main.StdMaps.StdMap{Int64, Float64}
end
*/
extern "C" std::map<int64_t,double> * std_map_int64_t_double_new(
    
) {
    return new std::map<int64_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_delete(
    std::map<int64_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_double_length(
    const std::map<int64_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_double_haskey(
    const std::map<int64_t,double> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::Float64
end
*/
extern "C" double std_map_int64_t_double_getindex(
    const std::map<int64_t,double> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int64), map, convert(Float64, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_setindex_(
    std::map<int64_t,double> * restrict map,
    double elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, Float64}
end
*/
extern "C" void std_map_int64_t_double_delete_(
    std::map<int64_t,double> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, Float64}(res)::Main.StdMaps.StdMapIterator{Int64, Float64}
end
*/
extern "C" std::map<int64_t,double>::const_iterator * std_map_int64_t_double_const_iterator_new(
    
) {
    return new std::map<int64_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_const_iterator_delete(
    std::map<int64_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, Float64}, map::Main.StdMaps.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_iterator_iterate_(
    std::map<int64_t,double>::const_iterator * restrict iter,
    const std::map<int64_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_iterator_next_(
    std::map<int64_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, Float64}, map::Main.StdMaps.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_double_iterator_done(
    const std::map<int64_t,double>::const_iterator * restrict iter,
    const std::map<int64_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, Float64})
    res = ccall(("std_map_int64_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_int64_t_double_iterator_getindex(
    const std::map<int64_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt8})
    res = ccall(("std_map_int64_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt8}(res)::Main.StdMaps.StdMap{Int64, UInt8}
end
*/
extern "C" std::map<int64_t,uint8_t> * std_map_int64_t_uint8_t_new(
    
) {
    return new std::map<int64_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_delete(
    std::map<int64_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint8_t_length(
    const std::map<int64_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, UInt8}, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_uint8_t_haskey(
    const std::map<int64_t,uint8_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt8}, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int64_t_uint8_t_getindex(
    const std::map<int64_t,uint8_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int64), map, convert(UInt8, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_setindex_(
    std::map<int64_t,uint8_t> * restrict map,
    uint8_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, UInt8}, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, UInt8}
end
*/
extern "C" void std_map_int64_t_uint8_t_delete_(
    std::map<int64_t,uint8_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{UInt8})
    res = ccall(("std_map_int64_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, UInt8}(res)::Main.StdMaps.StdMapIterator{Int64, UInt8}
end
*/
extern "C" std::map<int64_t,uint8_t>::const_iterator * std_map_int64_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<int64_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_const_iterator_delete(
    std::map<int64_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, UInt8}, map::Main.StdMaps.StdMap{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_iterator_iterate_(
    std::map<int64_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_iterator_next_(
    std::map<int64_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, UInt8}, map::Main.StdMaps.StdMap{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_uint8_t_iterator_done(
    const std::map<int64_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int64_t_uint8_t_iterator_getindex(
    const std::map<int64_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt16})
    res = ccall(("std_map_int64_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt16}(res)::Main.StdMaps.StdMap{Int64, UInt16}
end
*/
extern "C" std::map<int64_t,uint16_t> * std_map_int64_t_uint16_t_new(
    
) {
    return new std::map<int64_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_delete(
    std::map<int64_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint16_t_length(
    const std::map<int64_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int64, UInt16}, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int64_t_uint16_t_haskey(
    const std::map<int64_t,uint16_t> * restrict map,
    int64_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt16}, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int64_t_uint16_t_getindex(
    const std::map<int64_t,uint16_t> * restrict map,
    int64_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int64), map, convert(UInt16, elt), convert(Int64, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_setindex_(
    std::map<int64_t,uint16_t> * restrict map,
    uint16_t elt,
    int64_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int64, UInt16}, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), map, convert(Int64, key))
    return map::Main.StdMaps.StdMap{Int64, UInt16}
end
*/
extern "C" void std_map_int64_t_uint16_t_delete_(
    std::map<int64_t,uint16_t> * restrict map,
    int64_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int64}, type::Type{UInt16})
    res = ccall(("std_map_int64_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int64, UInt16}(res)::Main.StdMaps.StdMapIterator{Int64, UInt16}
end
*/
extern "C" std::map<int64_t,uint16_t>::const_iterator * std_map_int64_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<int64_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_const_iterator_delete(
    std::map<int64_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int64, UInt16}, map::Main.StdMaps.StdMap{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_iterator_iterate_(
    std::map<int64_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_iterator_next_(
    std::map<int64_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int64, UInt16}, map::Main.StdMaps.StdMap{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int64_t_uint16_t_iterator_done(
    const std::map<int64_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int64_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int64_t_uint16_t_iterator_getindex(
    const std::map<int64_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt64}(res)::Main.StdMaps.StdMap{UInt32, UInt64}
end
*/
extern "C" std::map<uint32_t,uint64_t> * std_map_uint32_t_uint64_t_new(
    
) {
    return new std::map<uint32_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_delete(
    std::map<uint32_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint64_t_length(
    const std::map<uint32_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, UInt64}, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_uint64_t_haskey(
    const std::map<uint32_t,uint64_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt64}, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint32_t_uint64_t_getindex(
    const std::map<uint32_t,uint64_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt32), map, convert(UInt64, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_setindex_(
    std::map<uint32_t,uint64_t> * restrict map,
    uint64_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, UInt64}, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, UInt64}
end
*/
extern "C" void std_map_uint32_t_uint64_t_delete_(
    std::map<uint32_t,uint64_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, UInt64}(res)::Main.StdMaps.StdMapIterator{UInt32, UInt64}
end
*/
extern "C" std::map<uint32_t,uint64_t>::const_iterator * std_map_uint32_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_const_iterator_delete(
    std::map<uint32_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt64}, map::Main.StdMaps.StdMap{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_iterator_iterate_(
    std::map<uint32_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_iterator_next_(
    std::map<uint32_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, UInt64}, map::Main.StdMaps.StdMap{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_uint64_t_iterator_done(
    const std::map<uint32_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint32_t_uint64_t_iterator_getindex(
    const std::map<uint32_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int8})
    res = ccall(("std_map_uint32_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int8}(res)::Main.StdMaps.StdMap{UInt32, Int8}
end
*/
extern "C" std::map<uint32_t,int8_t> * std_map_uint32_t_int8_t_new(
    
) {
    return new std::map<uint32_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_delete(
    std::map<uint32_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int8_t_length(
    const std::map<uint32_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Int8}, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_int8_t_haskey(
    const std::map<uint32_t,int8_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int8}, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint32_t_int8_t_getindex(
    const std::map<uint32_t,int8_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt32), map, convert(Int8, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_setindex_(
    std::map<uint32_t,int8_t> * restrict map,
    int8_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Int8}, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Int8}
end
*/
extern "C" void std_map_uint32_t_int8_t_delete_(
    std::map<uint32_t,int8_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Int8})
    res = ccall(("std_map_uint32_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Int8}(res)::Main.StdMaps.StdMapIterator{UInt32, Int8}
end
*/
extern "C" std::map<uint32_t,int8_t>::const_iterator * std_map_uint32_t_int8_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_const_iterator_delete(
    std::map<uint32_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Int8}, map::Main.StdMaps.StdMap{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_iterator_iterate_(
    std::map<uint32_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_iterator_next_(
    std::map<uint32_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Int8}, map::Main.StdMaps.StdMap{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_int8_t_iterator_done(
    const std::map<uint32_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_uint32_t_int8_t_iterator_getindex(
    const std::map<uint32_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int16})
    res = ccall(("std_map_uint32_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int16}(res)::Main.StdMaps.StdMap{UInt32, Int16}
end
*/
extern "C" std::map<uint32_t,int16_t> * std_map_uint32_t_int16_t_new(
    
) {
    return new std::map<uint32_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_delete(
    std::map<uint32_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int16_t_length(
    const std::map<uint32_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Int16}, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_int16_t_haskey(
    const std::map<uint32_t,int16_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int16}, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint32_t_int16_t_getindex(
    const std::map<uint32_t,int16_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt32), map, convert(Int16, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_setindex_(
    std::map<uint32_t,int16_t> * restrict map,
    int16_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Int16}, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Int16}
end
*/
extern "C" void std_map_uint32_t_int16_t_delete_(
    std::map<uint32_t,int16_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Int16})
    res = ccall(("std_map_uint32_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Int16}(res)::Main.StdMaps.StdMapIterator{UInt32, Int16}
end
*/
extern "C" std::map<uint32_t,int16_t>::const_iterator * std_map_uint32_t_int16_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_const_iterator_delete(
    std::map<uint32_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Int16}, map::Main.StdMaps.StdMap{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_iterator_iterate_(
    std::map<uint32_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_iterator_next_(
    std::map<uint32_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Int16}, map::Main.StdMaps.StdMap{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_int16_t_iterator_done(
    const std::map<uint32_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_uint32_t_int16_t_iterator_getindex(
    const std::map<uint32_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int64})
    res = ccall(("std_map_uint32_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int64}(res)::Main.StdMaps.StdMap{UInt32, Int64}
end
*/
extern "C" std::map<uint32_t,int64_t> * std_map_uint32_t_int64_t_new(
    
) {
    return new std::map<uint32_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_delete(
    std::map<uint32_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int64_t_length(
    const std::map<uint32_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Int64}, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_int64_t_haskey(
    const std::map<uint32_t,int64_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int64}, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint32_t_int64_t_getindex(
    const std::map<uint32_t,int64_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt32), map, convert(Int64, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_setindex_(
    std::map<uint32_t,int64_t> * restrict map,
    int64_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Int64}, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Int64}
end
*/
extern "C" void std_map_uint32_t_int64_t_delete_(
    std::map<uint32_t,int64_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Int64})
    res = ccall(("std_map_uint32_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Int64}(res)::Main.StdMaps.StdMapIterator{UInt32, Int64}
end
*/
extern "C" std::map<uint32_t,int64_t>::const_iterator * std_map_uint32_t_int64_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_const_iterator_delete(
    std::map<uint32_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Int64}, map::Main.StdMaps.StdMap{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_iterator_iterate_(
    std::map<uint32_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_iterator_next_(
    std::map<uint32_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Int64}, map::Main.StdMaps.StdMap{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_int64_t_iterator_done(
    const std::map<uint32_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_uint32_t_int64_t_iterator_getindex(
    const std::map<uint32_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt32}(res)::Main.StdMaps.StdMap{UInt32, UInt32}
end
*/
extern "C" std::map<uint32_t,uint32_t> * std_map_uint32_t_uint32_t_new(
    
) {
    return new std::map<uint32_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_delete(
    std::map<uint32_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint32_t_length(
    const std::map<uint32_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, UInt32}, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_uint32_t_haskey(
    const std::map<uint32_t,uint32_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt32}, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint32_t_uint32_t_getindex(
    const std::map<uint32_t,uint32_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt32), map, convert(UInt32, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_setindex_(
    std::map<uint32_t,uint32_t> * restrict map,
    uint32_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, UInt32}, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, UInt32}
end
*/
extern "C" void std_map_uint32_t_uint32_t_delete_(
    std::map<uint32_t,uint32_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, UInt32}(res)::Main.StdMaps.StdMapIterator{UInt32, UInt32}
end
*/
extern "C" std::map<uint32_t,uint32_t>::const_iterator * std_map_uint32_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_const_iterator_delete(
    std::map<uint32_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt32}, map::Main.StdMaps.StdMap{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_iterator_iterate_(
    std::map<uint32_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_iterator_next_(
    std::map<uint32_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, UInt32}, map::Main.StdMaps.StdMap{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_uint32_t_iterator_done(
    const std::map<uint32_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint32_t_uint32_t_iterator_getindex(
    const std::map<uint32_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Float32})
    res = ccall(("std_map_uint32_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Float32}(res)::Main.StdMaps.StdMap{UInt32, Float32}
end
*/
extern "C" std::map<uint32_t,float> * std_map_uint32_t_float_new(
    
) {
    return new std::map<uint32_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_delete(
    std::map<uint32_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_float_length(
    const std::map<uint32_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Float32}, key::Any)
    res = ccall(("std_map_uint32_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_float_haskey(
    const std::map<uint32_t,float> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Float32}, key::Any)
    res = ccall(("std_map_uint32_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Float32
end
*/
extern "C" float std_map_uint32_t_float_getindex(
    const std::map<uint32_t,float> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt32), map, convert(Float32, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_setindex_(
    std::map<uint32_t,float> * restrict map,
    float elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Float32}, key::Any)
    res = ccall(("std_map_uint32_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Float32}
end
*/
extern "C" void std_map_uint32_t_float_delete_(
    std::map<uint32_t,float> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Float32})
    res = ccall(("std_map_uint32_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Float32}(res)::Main.StdMaps.StdMapIterator{UInt32, Float32}
end
*/
extern "C" std::map<uint32_t,float>::const_iterator * std_map_uint32_t_float_const_iterator_new(
    
) {
    return new std::map<uint32_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_const_iterator_delete(
    std::map<uint32_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Float32}, map::Main.StdMaps.StdMap{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_iterator_iterate_(
    std::map<uint32_t,float>::const_iterator * restrict iter,
    const std::map<uint32_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_iterator_next_(
    std::map<uint32_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Float32}, map::Main.StdMaps.StdMap{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_float_iterator_done(
    const std::map<uint32_t,float>::const_iterator * restrict iter,
    const std::map<uint32_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_uint32_t_float_iterator_getindex(
    const std::map<uint32_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int32})
    res = ccall(("std_map_uint32_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int32}(res)::Main.StdMaps.StdMap{UInt32, Int32}
end
*/
extern "C" std::map<uint32_t,int32_t> * std_map_uint32_t_int32_t_new(
    
) {
    return new std::map<uint32_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_delete(
    std::map<uint32_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int32_t_length(
    const std::map<uint32_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Int32}, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_int32_t_haskey(
    const std::map<uint32_t,int32_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int32}, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint32_t_int32_t_getindex(
    const std::map<uint32_t,int32_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt32), map, convert(Int32, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_setindex_(
    std::map<uint32_t,int32_t> * restrict map,
    int32_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Int32}, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Int32}
end
*/
extern "C" void std_map_uint32_t_int32_t_delete_(
    std::map<uint32_t,int32_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Int32})
    res = ccall(("std_map_uint32_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Int32}(res)::Main.StdMaps.StdMapIterator{UInt32, Int32}
end
*/
extern "C" std::map<uint32_t,int32_t>::const_iterator * std_map_uint32_t_int32_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_const_iterator_delete(
    std::map<uint32_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Int32}, map::Main.StdMaps.StdMap{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_iterator_iterate_(
    std::map<uint32_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_iterator_next_(
    std::map<uint32_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Int32}, map::Main.StdMaps.StdMap{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_int32_t_iterator_done(
    const std::map<uint32_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint32_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_uint32_t_int32_t_iterator_getindex(
    const std::map<uint32_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Float64})
    res = ccall(("std_map_uint32_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Float64}(res)::Main.StdMaps.StdMap{UInt32, Float64}
end
*/
extern "C" std::map<uint32_t,double> * std_map_uint32_t_double_new(
    
) {
    return new std::map<uint32_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_delete(
    std::map<uint32_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_double_length(
    const std::map<uint32_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, Float64}, key::Any)
    res = ccall(("std_map_uint32_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_double_haskey(
    const std::map<uint32_t,double> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Float64}, key::Any)
    res = ccall(("std_map_uint32_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::Float64
end
*/
extern "C" double std_map_uint32_t_double_getindex(
    const std::map<uint32_t,double> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt32), map, convert(Float64, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_setindex_(
    std::map<uint32_t,double> * restrict map,
    double elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, Float64}, key::Any)
    res = ccall(("std_map_uint32_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, Float64}
end
*/
extern "C" void std_map_uint32_t_double_delete_(
    std::map<uint32_t,double> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{Float64})
    res = ccall(("std_map_uint32_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, Float64}(res)::Main.StdMaps.StdMapIterator{UInt32, Float64}
end
*/
extern "C" std::map<uint32_t,double>::const_iterator * std_map_uint32_t_double_const_iterator_new(
    
) {
    return new std::map<uint32_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_const_iterator_delete(
    std::map<uint32_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, Float64}, map::Main.StdMaps.StdMap{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_iterator_iterate_(
    std::map<uint32_t,double>::const_iterator * restrict iter,
    const std::map<uint32_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_iterator_next_(
    std::map<uint32_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, Float64}, map::Main.StdMaps.StdMap{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_double_iterator_done(
    const std::map<uint32_t,double>::const_iterator * restrict iter,
    const std::map<uint32_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_uint32_t_double_iterator_getindex(
    const std::map<uint32_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt8}(res)::Main.StdMaps.StdMap{UInt32, UInt8}
end
*/
extern "C" std::map<uint32_t,uint8_t> * std_map_uint32_t_uint8_t_new(
    
) {
    return new std::map<uint32_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_delete(
    std::map<uint32_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint8_t_length(
    const std::map<uint32_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, UInt8}, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_uint8_t_haskey(
    const std::map<uint32_t,uint8_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt8}, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint32_t_uint8_t_getindex(
    const std::map<uint32_t,uint8_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt32), map, convert(UInt8, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_setindex_(
    std::map<uint32_t,uint8_t> * restrict map,
    uint8_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, UInt8}, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, UInt8}
end
*/
extern "C" void std_map_uint32_t_uint8_t_delete_(
    std::map<uint32_t,uint8_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, UInt8}(res)::Main.StdMaps.StdMapIterator{UInt32, UInt8}
end
*/
extern "C" std::map<uint32_t,uint8_t>::const_iterator * std_map_uint32_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_const_iterator_delete(
    std::map<uint32_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt8}, map::Main.StdMaps.StdMap{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_iterator_iterate_(
    std::map<uint32_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_iterator_next_(
    std::map<uint32_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, UInt8}, map::Main.StdMaps.StdMap{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_uint8_t_iterator_done(
    const std::map<uint32_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint32_t_uint8_t_iterator_getindex(
    const std::map<uint32_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt16}(res)::Main.StdMaps.StdMap{UInt32, UInt16}
end
*/
extern "C" std::map<uint32_t,uint16_t> * std_map_uint32_t_uint16_t_new(
    
) {
    return new std::map<uint32_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_delete(
    std::map<uint32_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint16_t_length(
    const std::map<uint32_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt32, UInt16}, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint32_t_uint16_t_haskey(
    const std::map<uint32_t,uint16_t> * restrict map,
    uint32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt16}, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint32_t_uint16_t_getindex(
    const std::map<uint32_t,uint16_t> * restrict map,
    uint32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt32), map, convert(UInt16, elt), convert(UInt32, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_setindex_(
    std::map<uint32_t,uint16_t> * restrict map,
    uint16_t elt,
    uint32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt32, UInt16}, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), map, convert(UInt32, key))
    return map::Main.StdMaps.StdMap{UInt32, UInt16}
end
*/
extern "C" void std_map_uint32_t_uint16_t_delete_(
    std::map<uint32_t,uint16_t> * restrict map,
    uint32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt32}, type::Type{UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt32, UInt16}(res)::Main.StdMaps.StdMapIterator{UInt32, UInt16}
end
*/
extern "C" std::map<uint32_t,uint16_t>::const_iterator * std_map_uint32_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<uint32_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_const_iterator_delete(
    std::map<uint32_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt16}, map::Main.StdMaps.StdMap{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_iterator_iterate_(
    std::map<uint32_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_iterator_next_(
    std::map<uint32_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt32, UInt16}, map::Main.StdMaps.StdMap{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint32_t_uint16_t_iterator_done(
    const std::map<uint32_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint32_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint32_t_uint16_t_iterator_getindex(
    const std::map<uint32_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt64})
    res = ccall(("std_map_float_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt64}(res)::Main.StdMaps.StdMap{Float32, UInt64}
end
*/
extern "C" std::map<float,uint64_t> * std_map_float_uint64_t_new(
    
) {
    return new std::map<float,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_delete(
    std::map<float,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint64_t_length(
    const std::map<float,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, UInt64}, key::Any)
    res = ccall(("std_map_float_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_uint64_t_haskey(
    const std::map<float,uint64_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt64}, key::Any)
    res = ccall(("std_map_float_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_float_uint64_t_getindex(
    const std::map<float,uint64_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_float_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Float32), map, convert(UInt64, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_setindex_(
    std::map<float,uint64_t> * restrict map,
    uint64_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, UInt64}, key::Any)
    res = ccall(("std_map_float_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, UInt64}
end
*/
extern "C" void std_map_float_uint64_t_delete_(
    std::map<float,uint64_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{UInt64})
    res = ccall(("std_map_float_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, UInt64}(res)::Main.StdMaps.StdMapIterator{Float32, UInt64}
end
*/
extern "C" std::map<float,uint64_t>::const_iterator * std_map_float_uint64_t_const_iterator_new(
    
) {
    return new std::map<float,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_const_iterator_delete(
    std::map<float,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, UInt64}, map::Main.StdMaps.StdMap{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_iterator_iterate_(
    std::map<float,uint64_t>::const_iterator * restrict iter,
    const std::map<float,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_iterator_next_(
    std::map<float,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, UInt64}, map::Main.StdMaps.StdMap{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_uint64_t_iterator_done(
    const std::map<float,uint64_t>::const_iterator * restrict iter,
    const std::map<float,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_float_uint64_t_iterator_getindex(
    const std::map<float,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int8})
    res = ccall(("std_map_float_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int8}(res)::Main.StdMaps.StdMap{Float32, Int8}
end
*/
extern "C" std::map<float,int8_t> * std_map_float_int8_t_new(
    
) {
    return new std::map<float,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int8})
    res = ccall(("std_map_float_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_delete(
    std::map<float,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Int8})
    res = ccall(("std_map_float_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int8_t_length(
    const std::map<float,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Int8}, key::Any)
    res = ccall(("std_map_float_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_int8_t_haskey(
    const std::map<float,int8_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int8}, key::Any)
    res = ccall(("std_map_float_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_float_int8_t_getindex(
    const std::map<float,int8_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_float_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Float32), map, convert(Int8, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_setindex_(
    std::map<float,int8_t> * restrict map,
    int8_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Int8}, key::Any)
    res = ccall(("std_map_float_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Int8}
end
*/
extern "C" void std_map_float_int8_t_delete_(
    std::map<float,int8_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Int8})
    res = ccall(("std_map_float_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Int8}(res)::Main.StdMaps.StdMapIterator{Float32, Int8}
end
*/
extern "C" std::map<float,int8_t>::const_iterator * std_map_float_int8_t_const_iterator_new(
    
) {
    return new std::map<float,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Int8})
    res = ccall(("std_map_float_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_const_iterator_delete(
    std::map<float,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Int8}, map::Main.StdMaps.StdMap{Float32, Int8})
    res = ccall(("std_map_float_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_iterator_iterate_(
    std::map<float,int8_t>::const_iterator * restrict iter,
    const std::map<float,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Int8})
    res = ccall(("std_map_float_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_iterator_next_(
    std::map<float,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Int8}, map::Main.StdMaps.StdMap{Float32, Int8})
    res = ccall(("std_map_float_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_int8_t_iterator_done(
    const std::map<float,int8_t>::const_iterator * restrict iter,
    const std::map<float,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Int8})
    res = ccall(("std_map_float_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_float_int8_t_iterator_getindex(
    const std::map<float,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int16})
    res = ccall(("std_map_float_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int16}(res)::Main.StdMaps.StdMap{Float32, Int16}
end
*/
extern "C" std::map<float,int16_t> * std_map_float_int16_t_new(
    
) {
    return new std::map<float,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int16})
    res = ccall(("std_map_float_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_delete(
    std::map<float,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Int16})
    res = ccall(("std_map_float_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int16_t_length(
    const std::map<float,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Int16}, key::Any)
    res = ccall(("std_map_float_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_int16_t_haskey(
    const std::map<float,int16_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int16}, key::Any)
    res = ccall(("std_map_float_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_float_int16_t_getindex(
    const std::map<float,int16_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_float_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Float32), map, convert(Int16, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_setindex_(
    std::map<float,int16_t> * restrict map,
    int16_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Int16}, key::Any)
    res = ccall(("std_map_float_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Int16}
end
*/
extern "C" void std_map_float_int16_t_delete_(
    std::map<float,int16_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Int16})
    res = ccall(("std_map_float_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Int16}(res)::Main.StdMaps.StdMapIterator{Float32, Int16}
end
*/
extern "C" std::map<float,int16_t>::const_iterator * std_map_float_int16_t_const_iterator_new(
    
) {
    return new std::map<float,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Int16})
    res = ccall(("std_map_float_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_const_iterator_delete(
    std::map<float,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Int16}, map::Main.StdMaps.StdMap{Float32, Int16})
    res = ccall(("std_map_float_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_iterator_iterate_(
    std::map<float,int16_t>::const_iterator * restrict iter,
    const std::map<float,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Int16})
    res = ccall(("std_map_float_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_iterator_next_(
    std::map<float,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Int16}, map::Main.StdMaps.StdMap{Float32, Int16})
    res = ccall(("std_map_float_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_int16_t_iterator_done(
    const std::map<float,int16_t>::const_iterator * restrict iter,
    const std::map<float,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Int16})
    res = ccall(("std_map_float_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_float_int16_t_iterator_getindex(
    const std::map<float,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int64})
    res = ccall(("std_map_float_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int64}(res)::Main.StdMaps.StdMap{Float32, Int64}
end
*/
extern "C" std::map<float,int64_t> * std_map_float_int64_t_new(
    
) {
    return new std::map<float,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int64})
    res = ccall(("std_map_float_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_delete(
    std::map<float,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Int64})
    res = ccall(("std_map_float_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int64_t_length(
    const std::map<float,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Int64}, key::Any)
    res = ccall(("std_map_float_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_int64_t_haskey(
    const std::map<float,int64_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int64}, key::Any)
    res = ccall(("std_map_float_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_float_int64_t_getindex(
    const std::map<float,int64_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_float_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Float32), map, convert(Int64, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_setindex_(
    std::map<float,int64_t> * restrict map,
    int64_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Int64}, key::Any)
    res = ccall(("std_map_float_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Int64}
end
*/
extern "C" void std_map_float_int64_t_delete_(
    std::map<float,int64_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Int64})
    res = ccall(("std_map_float_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Int64}(res)::Main.StdMaps.StdMapIterator{Float32, Int64}
end
*/
extern "C" std::map<float,int64_t>::const_iterator * std_map_float_int64_t_const_iterator_new(
    
) {
    return new std::map<float,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Int64})
    res = ccall(("std_map_float_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_const_iterator_delete(
    std::map<float,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Int64}, map::Main.StdMaps.StdMap{Float32, Int64})
    res = ccall(("std_map_float_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_iterator_iterate_(
    std::map<float,int64_t>::const_iterator * restrict iter,
    const std::map<float,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Int64})
    res = ccall(("std_map_float_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_iterator_next_(
    std::map<float,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Int64}, map::Main.StdMaps.StdMap{Float32, Int64})
    res = ccall(("std_map_float_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_int64_t_iterator_done(
    const std::map<float,int64_t>::const_iterator * restrict iter,
    const std::map<float,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Int64})
    res = ccall(("std_map_float_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_float_int64_t_iterator_getindex(
    const std::map<float,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt32})
    res = ccall(("std_map_float_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt32}(res)::Main.StdMaps.StdMap{Float32, UInt32}
end
*/
extern "C" std::map<float,uint32_t> * std_map_float_uint32_t_new(
    
) {
    return new std::map<float,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_delete(
    std::map<float,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint32_t_length(
    const std::map<float,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, UInt32}, key::Any)
    res = ccall(("std_map_float_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_uint32_t_haskey(
    const std::map<float,uint32_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt32}, key::Any)
    res = ccall(("std_map_float_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_float_uint32_t_getindex(
    const std::map<float,uint32_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_float_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Float32), map, convert(UInt32, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_setindex_(
    std::map<float,uint32_t> * restrict map,
    uint32_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, UInt32}, key::Any)
    res = ccall(("std_map_float_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, UInt32}
end
*/
extern "C" void std_map_float_uint32_t_delete_(
    std::map<float,uint32_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{UInt32})
    res = ccall(("std_map_float_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, UInt32}(res)::Main.StdMaps.StdMapIterator{Float32, UInt32}
end
*/
extern "C" std::map<float,uint32_t>::const_iterator * std_map_float_uint32_t_const_iterator_new(
    
) {
    return new std::map<float,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_const_iterator_delete(
    std::map<float,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, UInt32}, map::Main.StdMaps.StdMap{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_iterator_iterate_(
    std::map<float,uint32_t>::const_iterator * restrict iter,
    const std::map<float,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_iterator_next_(
    std::map<float,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, UInt32}, map::Main.StdMaps.StdMap{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_uint32_t_iterator_done(
    const std::map<float,uint32_t>::const_iterator * restrict iter,
    const std::map<float,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_float_uint32_t_iterator_getindex(
    const std::map<float,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Float32})
    res = ccall(("std_map_float_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Float32}(res)::Main.StdMaps.StdMap{Float32, Float32}
end
*/
extern "C" std::map<float,float> * std_map_float_float_new(
    
) {
    return new std::map<float,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Float32})
    res = ccall(("std_map_float_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_float_delete(
    std::map<float,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Float32})
    res = ccall(("std_map_float_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_float_length(
    const std::map<float,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Float32}, key::Any)
    res = ccall(("std_map_float_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_float_haskey(
    const std::map<float,float> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Float32}, key::Any)
    res = ccall(("std_map_float_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Float32
end
*/
extern "C" float std_map_float_float_getindex(
    const std::map<float,float> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_float_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Float32), map, convert(Float32, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_float_setindex_(
    std::map<float,float> * restrict map,
    float elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Float32}, key::Any)
    res = ccall(("std_map_float_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Float32}
end
*/
extern "C" void std_map_float_float_delete_(
    std::map<float,float> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Float32})
    res = ccall(("std_map_float_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Float32}(res)::Main.StdMaps.StdMapIterator{Float32, Float32}
end
*/
extern "C" std::map<float,float>::const_iterator * std_map_float_float_const_iterator_new(
    
) {
    return new std::map<float,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Float32})
    res = ccall(("std_map_float_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_float_const_iterator_delete(
    std::map<float,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Float32}, map::Main.StdMaps.StdMap{Float32, Float32})
    res = ccall(("std_map_float_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_float_iterator_iterate_(
    std::map<float,float>::const_iterator * restrict iter,
    const std::map<float,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Float32})
    res = ccall(("std_map_float_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_float_iterator_next_(
    std::map<float,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Float32}, map::Main.StdMaps.StdMap{Float32, Float32})
    res = ccall(("std_map_float_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_float_iterator_done(
    const std::map<float,float>::const_iterator * restrict iter,
    const std::map<float,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Float32})
    res = ccall(("std_map_float_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_float_float_iterator_getindex(
    const std::map<float,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int32})
    res = ccall(("std_map_float_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int32}(res)::Main.StdMaps.StdMap{Float32, Int32}
end
*/
extern "C" std::map<float,int32_t> * std_map_float_int32_t_new(
    
) {
    return new std::map<float,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int32})
    res = ccall(("std_map_float_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_delete(
    std::map<float,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Int32})
    res = ccall(("std_map_float_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int32_t_length(
    const std::map<float,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Int32}, key::Any)
    res = ccall(("std_map_float_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_int32_t_haskey(
    const std::map<float,int32_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int32}, key::Any)
    res = ccall(("std_map_float_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_float_int32_t_getindex(
    const std::map<float,int32_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_float_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Float32), map, convert(Int32, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_setindex_(
    std::map<float,int32_t> * restrict map,
    int32_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Int32}, key::Any)
    res = ccall(("std_map_float_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Int32}
end
*/
extern "C" void std_map_float_int32_t_delete_(
    std::map<float,int32_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Int32})
    res = ccall(("std_map_float_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Int32}(res)::Main.StdMaps.StdMapIterator{Float32, Int32}
end
*/
extern "C" std::map<float,int32_t>::const_iterator * std_map_float_int32_t_const_iterator_new(
    
) {
    return new std::map<float,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Int32})
    res = ccall(("std_map_float_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_const_iterator_delete(
    std::map<float,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Int32}, map::Main.StdMaps.StdMap{Float32, Int32})
    res = ccall(("std_map_float_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_iterator_iterate_(
    std::map<float,int32_t>::const_iterator * restrict iter,
    const std::map<float,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Int32})
    res = ccall(("std_map_float_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_iterator_next_(
    std::map<float,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Int32}, map::Main.StdMaps.StdMap{Float32, Int32})
    res = ccall(("std_map_float_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_int32_t_iterator_done(
    const std::map<float,int32_t>::const_iterator * restrict iter,
    const std::map<float,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Int32})
    res = ccall(("std_map_float_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_float_int32_t_iterator_getindex(
    const std::map<float,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Float64})
    res = ccall(("std_map_float_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Float64}(res)::Main.StdMaps.StdMap{Float32, Float64}
end
*/
extern "C" std::map<float,double> * std_map_float_double_new(
    
) {
    return new std::map<float,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Float64})
    res = ccall(("std_map_float_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_double_delete(
    std::map<float,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, Float64})
    res = ccall(("std_map_float_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_double_length(
    const std::map<float,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, Float64}, key::Any)
    res = ccall(("std_map_float_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_double_haskey(
    const std::map<float,double> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Float64}, key::Any)
    res = ccall(("std_map_float_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::Float64
end
*/
extern "C" double std_map_float_double_getindex(
    const std::map<float,double> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_float_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Float32), map, convert(Float64, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_double_setindex_(
    std::map<float,double> * restrict map,
    double elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, Float64}, key::Any)
    res = ccall(("std_map_float_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, Float64}
end
*/
extern "C" void std_map_float_double_delete_(
    std::map<float,double> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{Float64})
    res = ccall(("std_map_float_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, Float64}(res)::Main.StdMaps.StdMapIterator{Float32, Float64}
end
*/
extern "C" std::map<float,double>::const_iterator * std_map_float_double_const_iterator_new(
    
) {
    return new std::map<float,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, Float64})
    res = ccall(("std_map_float_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_double_const_iterator_delete(
    std::map<float,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, Float64}, map::Main.StdMaps.StdMap{Float32, Float64})
    res = ccall(("std_map_float_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_double_iterator_iterate_(
    std::map<float,double>::const_iterator * restrict iter,
    const std::map<float,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, Float64})
    res = ccall(("std_map_float_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_double_iterator_next_(
    std::map<float,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, Float64}, map::Main.StdMaps.StdMap{Float32, Float64})
    res = ccall(("std_map_float_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_double_iterator_done(
    const std::map<float,double>::const_iterator * restrict iter,
    const std::map<float,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, Float64})
    res = ccall(("std_map_float_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_float_double_iterator_getindex(
    const std::map<float,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt8})
    res = ccall(("std_map_float_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt8}(res)::Main.StdMaps.StdMap{Float32, UInt8}
end
*/
extern "C" std::map<float,uint8_t> * std_map_float_uint8_t_new(
    
) {
    return new std::map<float,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_delete(
    std::map<float,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint8_t_length(
    const std::map<float,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, UInt8}, key::Any)
    res = ccall(("std_map_float_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_uint8_t_haskey(
    const std::map<float,uint8_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt8}, key::Any)
    res = ccall(("std_map_float_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_float_uint8_t_getindex(
    const std::map<float,uint8_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_float_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Float32), map, convert(UInt8, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_setindex_(
    std::map<float,uint8_t> * restrict map,
    uint8_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, UInt8}, key::Any)
    res = ccall(("std_map_float_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, UInt8}
end
*/
extern "C" void std_map_float_uint8_t_delete_(
    std::map<float,uint8_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{UInt8})
    res = ccall(("std_map_float_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, UInt8}(res)::Main.StdMaps.StdMapIterator{Float32, UInt8}
end
*/
extern "C" std::map<float,uint8_t>::const_iterator * std_map_float_uint8_t_const_iterator_new(
    
) {
    return new std::map<float,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_const_iterator_delete(
    std::map<float,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, UInt8}, map::Main.StdMaps.StdMap{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_iterator_iterate_(
    std::map<float,uint8_t>::const_iterator * restrict iter,
    const std::map<float,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_iterator_next_(
    std::map<float,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, UInt8}, map::Main.StdMaps.StdMap{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_uint8_t_iterator_done(
    const std::map<float,uint8_t>::const_iterator * restrict iter,
    const std::map<float,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_float_uint8_t_iterator_getindex(
    const std::map<float,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt16})
    res = ccall(("std_map_float_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt16}(res)::Main.StdMaps.StdMap{Float32, UInt16}
end
*/
extern "C" std::map<float,uint16_t> * std_map_float_uint16_t_new(
    
) {
    return new std::map<float,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_delete(
    std::map<float,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint16_t_length(
    const std::map<float,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float32, UInt16}, key::Any)
    res = ccall(("std_map_float_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_float_uint16_t_haskey(
    const std::map<float,uint16_t> * restrict map,
    float key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt16}, key::Any)
    res = ccall(("std_map_float_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_float_uint16_t_getindex(
    const std::map<float,uint16_t> * restrict map,
    float key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_float_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Float32), map, convert(UInt16, elt), convert(Float32, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_setindex_(
    std::map<float,uint16_t> * restrict map,
    uint16_t elt,
    float key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float32, UInt16}, key::Any)
    res = ccall(("std_map_float_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), map, convert(Float32, key))
    return map::Main.StdMaps.StdMap{Float32, UInt16}
end
*/
extern "C" void std_map_float_uint16_t_delete_(
    std::map<float,uint16_t> * restrict map,
    float key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float32}, type::Type{UInt16})
    res = ccall(("std_map_float_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float32, UInt16}(res)::Main.StdMaps.StdMapIterator{Float32, UInt16}
end
*/
extern "C" std::map<float,uint16_t>::const_iterator * std_map_float_uint16_t_const_iterator_new(
    
) {
    return new std::map<float,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_const_iterator_delete(
    std::map<float,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float32, UInt16}, map::Main.StdMaps.StdMap{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_iterator_iterate_(
    std::map<float,uint16_t>::const_iterator * restrict iter,
    const std::map<float,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_iterator_next_(
    std::map<float,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float32, UInt16}, map::Main.StdMaps.StdMap{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_float_uint16_t_iterator_done(
    const std::map<float,uint16_t>::const_iterator * restrict iter,
    const std::map<float,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_float_uint16_t_iterator_getindex(
    const std::map<float,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt64})
    res = ccall(("std_map_int32_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt64}(res)::Main.StdMaps.StdMap{Int32, UInt64}
end
*/
extern "C" std::map<int32_t,uint64_t> * std_map_int32_t_uint64_t_new(
    
) {
    return new std::map<int32_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_delete(
    std::map<int32_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint64_t_length(
    const std::map<int32_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, UInt64}, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_uint64_t_haskey(
    const std::map<int32_t,uint64_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt64}, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int32_t_uint64_t_getindex(
    const std::map<int32_t,uint64_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int32), map, convert(UInt64, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_setindex_(
    std::map<int32_t,uint64_t> * restrict map,
    uint64_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, UInt64}, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, UInt64}
end
*/
extern "C" void std_map_int32_t_uint64_t_delete_(
    std::map<int32_t,uint64_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{UInt64})
    res = ccall(("std_map_int32_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, UInt64}(res)::Main.StdMaps.StdMapIterator{Int32, UInt64}
end
*/
extern "C" std::map<int32_t,uint64_t>::const_iterator * std_map_int32_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<int32_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_const_iterator_delete(
    std::map<int32_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, UInt64}, map::Main.StdMaps.StdMap{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_iterator_iterate_(
    std::map<int32_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_iterator_next_(
    std::map<int32_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, UInt64}, map::Main.StdMaps.StdMap{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_uint64_t_iterator_done(
    const std::map<int32_t,uint64_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int32_t_uint64_t_iterator_getindex(
    const std::map<int32_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int8})
    res = ccall(("std_map_int32_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int8}(res)::Main.StdMaps.StdMap{Int32, Int8}
end
*/
extern "C" std::map<int32_t,int8_t> * std_map_int32_t_int8_t_new(
    
) {
    return new std::map<int32_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_delete(
    std::map<int32_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int8_t_length(
    const std::map<int32_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Int8}, key::Any)
    res = ccall(("std_map_int32_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_int8_t_haskey(
    const std::map<int32_t,int8_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int8}, key::Any)
    res = ccall(("std_map_int32_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int32_t_int8_t_getindex(
    const std::map<int32_t,int8_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int32), map, convert(Int8, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_setindex_(
    std::map<int32_t,int8_t> * restrict map,
    int8_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Int8}, key::Any)
    res = ccall(("std_map_int32_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Int8}
end
*/
extern "C" void std_map_int32_t_int8_t_delete_(
    std::map<int32_t,int8_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Int8})
    res = ccall(("std_map_int32_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Int8}(res)::Main.StdMaps.StdMapIterator{Int32, Int8}
end
*/
extern "C" std::map<int32_t,int8_t>::const_iterator * std_map_int32_t_int8_t_const_iterator_new(
    
) {
    return new std::map<int32_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_const_iterator_delete(
    std::map<int32_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Int8}, map::Main.StdMaps.StdMap{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_iterator_iterate_(
    std::map<int32_t,int8_t>::const_iterator * restrict iter,
    const std::map<int32_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_iterator_next_(
    std::map<int32_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Int8}, map::Main.StdMaps.StdMap{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_int8_t_iterator_done(
    const std::map<int32_t,int8_t>::const_iterator * restrict iter,
    const std::map<int32_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_int32_t_int8_t_iterator_getindex(
    const std::map<int32_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int16})
    res = ccall(("std_map_int32_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int16}(res)::Main.StdMaps.StdMap{Int32, Int16}
end
*/
extern "C" std::map<int32_t,int16_t> * std_map_int32_t_int16_t_new(
    
) {
    return new std::map<int32_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_delete(
    std::map<int32_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int16_t_length(
    const std::map<int32_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Int16}, key::Any)
    res = ccall(("std_map_int32_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_int16_t_haskey(
    const std::map<int32_t,int16_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int16}, key::Any)
    res = ccall(("std_map_int32_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int32_t_int16_t_getindex(
    const std::map<int32_t,int16_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int32), map, convert(Int16, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_setindex_(
    std::map<int32_t,int16_t> * restrict map,
    int16_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Int16}, key::Any)
    res = ccall(("std_map_int32_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Int16}
end
*/
extern "C" void std_map_int32_t_int16_t_delete_(
    std::map<int32_t,int16_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Int16})
    res = ccall(("std_map_int32_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Int16}(res)::Main.StdMaps.StdMapIterator{Int32, Int16}
end
*/
extern "C" std::map<int32_t,int16_t>::const_iterator * std_map_int32_t_int16_t_const_iterator_new(
    
) {
    return new std::map<int32_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_const_iterator_delete(
    std::map<int32_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Int16}, map::Main.StdMaps.StdMap{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_iterator_iterate_(
    std::map<int32_t,int16_t>::const_iterator * restrict iter,
    const std::map<int32_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_iterator_next_(
    std::map<int32_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Int16}, map::Main.StdMaps.StdMap{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_int16_t_iterator_done(
    const std::map<int32_t,int16_t>::const_iterator * restrict iter,
    const std::map<int32_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_int32_t_int16_t_iterator_getindex(
    const std::map<int32_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int64})
    res = ccall(("std_map_int32_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int64}(res)::Main.StdMaps.StdMap{Int32, Int64}
end
*/
extern "C" std::map<int32_t,int64_t> * std_map_int32_t_int64_t_new(
    
) {
    return new std::map<int32_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_delete(
    std::map<int32_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int64_t_length(
    const std::map<int32_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Int64}, key::Any)
    res = ccall(("std_map_int32_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_int64_t_haskey(
    const std::map<int32_t,int64_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int64}, key::Any)
    res = ccall(("std_map_int32_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int32_t_int64_t_getindex(
    const std::map<int32_t,int64_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int32), map, convert(Int64, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_setindex_(
    std::map<int32_t,int64_t> * restrict map,
    int64_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Int64}, key::Any)
    res = ccall(("std_map_int32_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Int64}
end
*/
extern "C" void std_map_int32_t_int64_t_delete_(
    std::map<int32_t,int64_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Int64})
    res = ccall(("std_map_int32_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Int64}(res)::Main.StdMaps.StdMapIterator{Int32, Int64}
end
*/
extern "C" std::map<int32_t,int64_t>::const_iterator * std_map_int32_t_int64_t_const_iterator_new(
    
) {
    return new std::map<int32_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_const_iterator_delete(
    std::map<int32_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Int64}, map::Main.StdMaps.StdMap{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_iterator_iterate_(
    std::map<int32_t,int64_t>::const_iterator * restrict iter,
    const std::map<int32_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_iterator_next_(
    std::map<int32_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Int64}, map::Main.StdMaps.StdMap{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_int64_t_iterator_done(
    const std::map<int32_t,int64_t>::const_iterator * restrict iter,
    const std::map<int32_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_int32_t_int64_t_iterator_getindex(
    const std::map<int32_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt32})
    res = ccall(("std_map_int32_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt32}(res)::Main.StdMaps.StdMap{Int32, UInt32}
end
*/
extern "C" std::map<int32_t,uint32_t> * std_map_int32_t_uint32_t_new(
    
) {
    return new std::map<int32_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_delete(
    std::map<int32_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint32_t_length(
    const std::map<int32_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, UInt32}, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_uint32_t_haskey(
    const std::map<int32_t,uint32_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt32}, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int32_t_uint32_t_getindex(
    const std::map<int32_t,uint32_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int32), map, convert(UInt32, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_setindex_(
    std::map<int32_t,uint32_t> * restrict map,
    uint32_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, UInt32}, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, UInt32}
end
*/
extern "C" void std_map_int32_t_uint32_t_delete_(
    std::map<int32_t,uint32_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{UInt32})
    res = ccall(("std_map_int32_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, UInt32}(res)::Main.StdMaps.StdMapIterator{Int32, UInt32}
end
*/
extern "C" std::map<int32_t,uint32_t>::const_iterator * std_map_int32_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<int32_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_const_iterator_delete(
    std::map<int32_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, UInt32}, map::Main.StdMaps.StdMap{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_iterator_iterate_(
    std::map<int32_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_iterator_next_(
    std::map<int32_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, UInt32}, map::Main.StdMaps.StdMap{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_uint32_t_iterator_done(
    const std::map<int32_t,uint32_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int32_t_uint32_t_iterator_getindex(
    const std::map<int32_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Float32})
    res = ccall(("std_map_int32_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Float32}(res)::Main.StdMaps.StdMap{Int32, Float32}
end
*/
extern "C" std::map<int32_t,float> * std_map_int32_t_float_new(
    
) {
    return new std::map<int32_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Float32})
    res = ccall(("std_map_int32_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_delete(
    std::map<int32_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Float32})
    res = ccall(("std_map_int32_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_float_length(
    const std::map<int32_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Float32}, key::Any)
    res = ccall(("std_map_int32_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_float_haskey(
    const std::map<int32_t,float> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Float32}, key::Any)
    res = ccall(("std_map_int32_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Float32
end
*/
extern "C" float std_map_int32_t_float_getindex(
    const std::map<int32_t,float> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int32), map, convert(Float32, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_setindex_(
    std::map<int32_t,float> * restrict map,
    float elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Float32}, key::Any)
    res = ccall(("std_map_int32_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Float32}
end
*/
extern "C" void std_map_int32_t_float_delete_(
    std::map<int32_t,float> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Float32})
    res = ccall(("std_map_int32_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Float32}(res)::Main.StdMaps.StdMapIterator{Int32, Float32}
end
*/
extern "C" std::map<int32_t,float>::const_iterator * std_map_int32_t_float_const_iterator_new(
    
) {
    return new std::map<int32_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Float32})
    res = ccall(("std_map_int32_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_const_iterator_delete(
    std::map<int32_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Float32}, map::Main.StdMaps.StdMap{Int32, Float32})
    res = ccall(("std_map_int32_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_iterator_iterate_(
    std::map<int32_t,float>::const_iterator * restrict iter,
    const std::map<int32_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Float32})
    res = ccall(("std_map_int32_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_iterator_next_(
    std::map<int32_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Float32}, map::Main.StdMaps.StdMap{Int32, Float32})
    res = ccall(("std_map_int32_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_float_iterator_done(
    const std::map<int32_t,float>::const_iterator * restrict iter,
    const std::map<int32_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Float32})
    res = ccall(("std_map_int32_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_int32_t_float_iterator_getindex(
    const std::map<int32_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int32})
    res = ccall(("std_map_int32_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int32}(res)::Main.StdMaps.StdMap{Int32, Int32}
end
*/
extern "C" std::map<int32_t,int32_t> * std_map_int32_t_int32_t_new(
    
) {
    return new std::map<int32_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_delete(
    std::map<int32_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int32_t_length(
    const std::map<int32_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Int32}, key::Any)
    res = ccall(("std_map_int32_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_int32_t_haskey(
    const std::map<int32_t,int32_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int32}, key::Any)
    res = ccall(("std_map_int32_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int32_t_int32_t_getindex(
    const std::map<int32_t,int32_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int32), map, convert(Int32, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_setindex_(
    std::map<int32_t,int32_t> * restrict map,
    int32_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Int32}, key::Any)
    res = ccall(("std_map_int32_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Int32}
end
*/
extern "C" void std_map_int32_t_int32_t_delete_(
    std::map<int32_t,int32_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Int32})
    res = ccall(("std_map_int32_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Int32}(res)::Main.StdMaps.StdMapIterator{Int32, Int32}
end
*/
extern "C" std::map<int32_t,int32_t>::const_iterator * std_map_int32_t_int32_t_const_iterator_new(
    
) {
    return new std::map<int32_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_const_iterator_delete(
    std::map<int32_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Int32}, map::Main.StdMaps.StdMap{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_iterator_iterate_(
    std::map<int32_t,int32_t>::const_iterator * restrict iter,
    const std::map<int32_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_iterator_next_(
    std::map<int32_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Int32}, map::Main.StdMaps.StdMap{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_int32_t_iterator_done(
    const std::map<int32_t,int32_t>::const_iterator * restrict iter,
    const std::map<int32_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_int32_t_int32_t_iterator_getindex(
    const std::map<int32_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Float64})
    res = ccall(("std_map_int32_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Float64}(res)::Main.StdMaps.StdMap{Int32, Float64}
end
*/
extern "C" std::map<int32_t,double> * std_map_int32_t_double_new(
    
) {
    return new std::map<int32_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Float64})
    res = ccall(("std_map_int32_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_delete(
    std::map<int32_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, Float64})
    res = ccall(("std_map_int32_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_double_length(
    const std::map<int32_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, Float64}, key::Any)
    res = ccall(("std_map_int32_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_double_haskey(
    const std::map<int32_t,double> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Float64}, key::Any)
    res = ccall(("std_map_int32_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::Float64
end
*/
extern "C" double std_map_int32_t_double_getindex(
    const std::map<int32_t,double> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int32), map, convert(Float64, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_setindex_(
    std::map<int32_t,double> * restrict map,
    double elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, Float64}, key::Any)
    res = ccall(("std_map_int32_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, Float64}
end
*/
extern "C" void std_map_int32_t_double_delete_(
    std::map<int32_t,double> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{Float64})
    res = ccall(("std_map_int32_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, Float64}(res)::Main.StdMaps.StdMapIterator{Int32, Float64}
end
*/
extern "C" std::map<int32_t,double>::const_iterator * std_map_int32_t_double_const_iterator_new(
    
) {
    return new std::map<int32_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, Float64})
    res = ccall(("std_map_int32_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_const_iterator_delete(
    std::map<int32_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, Float64}, map::Main.StdMaps.StdMap{Int32, Float64})
    res = ccall(("std_map_int32_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_iterator_iterate_(
    std::map<int32_t,double>::const_iterator * restrict iter,
    const std::map<int32_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, Float64})
    res = ccall(("std_map_int32_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_iterator_next_(
    std::map<int32_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, Float64}, map::Main.StdMaps.StdMap{Int32, Float64})
    res = ccall(("std_map_int32_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_double_iterator_done(
    const std::map<int32_t,double>::const_iterator * restrict iter,
    const std::map<int32_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, Float64})
    res = ccall(("std_map_int32_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_int32_t_double_iterator_getindex(
    const std::map<int32_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt8})
    res = ccall(("std_map_int32_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt8}(res)::Main.StdMaps.StdMap{Int32, UInt8}
end
*/
extern "C" std::map<int32_t,uint8_t> * std_map_int32_t_uint8_t_new(
    
) {
    return new std::map<int32_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_delete(
    std::map<int32_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint8_t_length(
    const std::map<int32_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, UInt8}, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_uint8_t_haskey(
    const std::map<int32_t,uint8_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt8}, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int32_t_uint8_t_getindex(
    const std::map<int32_t,uint8_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int32), map, convert(UInt8, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_setindex_(
    std::map<int32_t,uint8_t> * restrict map,
    uint8_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, UInt8}, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, UInt8}
end
*/
extern "C" void std_map_int32_t_uint8_t_delete_(
    std::map<int32_t,uint8_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{UInt8})
    res = ccall(("std_map_int32_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, UInt8}(res)::Main.StdMaps.StdMapIterator{Int32, UInt8}
end
*/
extern "C" std::map<int32_t,uint8_t>::const_iterator * std_map_int32_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<int32_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_const_iterator_delete(
    std::map<int32_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, UInt8}, map::Main.StdMaps.StdMap{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_iterator_iterate_(
    std::map<int32_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_iterator_next_(
    std::map<int32_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, UInt8}, map::Main.StdMaps.StdMap{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_uint8_t_iterator_done(
    const std::map<int32_t,uint8_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int32_t_uint8_t_iterator_getindex(
    const std::map<int32_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt16})
    res = ccall(("std_map_int32_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt16}(res)::Main.StdMaps.StdMap{Int32, UInt16}
end
*/
extern "C" std::map<int32_t,uint16_t> * std_map_int32_t_uint16_t_new(
    
) {
    return new std::map<int32_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_delete(
    std::map<int32_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint16_t_length(
    const std::map<int32_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Int32, UInt16}, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_int32_t_uint16_t_haskey(
    const std::map<int32_t,uint16_t> * restrict map,
    int32_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt16}, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int32_t_uint16_t_getindex(
    const std::map<int32_t,uint16_t> * restrict map,
    int32_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int32), map, convert(UInt16, elt), convert(Int32, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_setindex_(
    std::map<int32_t,uint16_t> * restrict map,
    uint16_t elt,
    int32_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Int32, UInt16}, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), map, convert(Int32, key))
    return map::Main.StdMaps.StdMap{Int32, UInt16}
end
*/
extern "C" void std_map_int32_t_uint16_t_delete_(
    std::map<int32_t,uint16_t> * restrict map,
    int32_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Int32}, type::Type{UInt16})
    res = ccall(("std_map_int32_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Int32, UInt16}(res)::Main.StdMaps.StdMapIterator{Int32, UInt16}
end
*/
extern "C" std::map<int32_t,uint16_t>::const_iterator * std_map_int32_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<int32_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_const_iterator_delete(
    std::map<int32_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Int32, UInt16}, map::Main.StdMaps.StdMap{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_iterator_iterate_(
    std::map<int32_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_iterator_next_(
    std::map<int32_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Int32, UInt16}, map::Main.StdMaps.StdMap{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_int32_t_uint16_t_iterator_done(
    const std::map<int32_t,uint16_t>::const_iterator * restrict iter,
    const std::map<int32_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int32_t_uint16_t_iterator_getindex(
    const std::map<int32_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt64})
    res = ccall(("std_map_double_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt64}(res)::Main.StdMaps.StdMap{Float64, UInt64}
end
*/
extern "C" std::map<double,uint64_t> * std_map_double_uint64_t_new(
    
) {
    return new std::map<double,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_delete(
    std::map<double,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint64_t_length(
    const std::map<double,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, UInt64}, key::Any)
    res = ccall(("std_map_double_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_uint64_t_haskey(
    const std::map<double,uint64_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt64}, key::Any)
    res = ccall(("std_map_double_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_double_uint64_t_getindex(
    const std::map<double,uint64_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_double_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Float64), map, convert(UInt64, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_setindex_(
    std::map<double,uint64_t> * restrict map,
    uint64_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, UInt64}, key::Any)
    res = ccall(("std_map_double_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, UInt64}
end
*/
extern "C" void std_map_double_uint64_t_delete_(
    std::map<double,uint64_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{UInt64})
    res = ccall(("std_map_double_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, UInt64}(res)::Main.StdMaps.StdMapIterator{Float64, UInt64}
end
*/
extern "C" std::map<double,uint64_t>::const_iterator * std_map_double_uint64_t_const_iterator_new(
    
) {
    return new std::map<double,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_const_iterator_delete(
    std::map<double,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, UInt64}, map::Main.StdMaps.StdMap{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_iterator_iterate_(
    std::map<double,uint64_t>::const_iterator * restrict iter,
    const std::map<double,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_iterator_next_(
    std::map<double,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, UInt64}, map::Main.StdMaps.StdMap{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_uint64_t_iterator_done(
    const std::map<double,uint64_t>::const_iterator * restrict iter,
    const std::map<double,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_double_uint64_t_iterator_getindex(
    const std::map<double,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int8})
    res = ccall(("std_map_double_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int8}(res)::Main.StdMaps.StdMap{Float64, Int8}
end
*/
extern "C" std::map<double,int8_t> * std_map_double_int8_t_new(
    
) {
    return new std::map<double,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int8})
    res = ccall(("std_map_double_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_delete(
    std::map<double,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Int8})
    res = ccall(("std_map_double_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int8_t_length(
    const std::map<double,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Int8}, key::Any)
    res = ccall(("std_map_double_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_int8_t_haskey(
    const std::map<double,int8_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int8}, key::Any)
    res = ccall(("std_map_double_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_double_int8_t_getindex(
    const std::map<double,int8_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_double_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Float64), map, convert(Int8, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_setindex_(
    std::map<double,int8_t> * restrict map,
    int8_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Int8}, key::Any)
    res = ccall(("std_map_double_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Int8}
end
*/
extern "C" void std_map_double_int8_t_delete_(
    std::map<double,int8_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Int8})
    res = ccall(("std_map_double_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Int8}(res)::Main.StdMaps.StdMapIterator{Float64, Int8}
end
*/
extern "C" std::map<double,int8_t>::const_iterator * std_map_double_int8_t_const_iterator_new(
    
) {
    return new std::map<double,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Int8})
    res = ccall(("std_map_double_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_const_iterator_delete(
    std::map<double,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Int8}, map::Main.StdMaps.StdMap{Float64, Int8})
    res = ccall(("std_map_double_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_iterator_iterate_(
    std::map<double,int8_t>::const_iterator * restrict iter,
    const std::map<double,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Int8})
    res = ccall(("std_map_double_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_iterator_next_(
    std::map<double,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Int8}, map::Main.StdMaps.StdMap{Float64, Int8})
    res = ccall(("std_map_double_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_int8_t_iterator_done(
    const std::map<double,int8_t>::const_iterator * restrict iter,
    const std::map<double,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Int8})
    res = ccall(("std_map_double_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_double_int8_t_iterator_getindex(
    const std::map<double,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int16})
    res = ccall(("std_map_double_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int16}(res)::Main.StdMaps.StdMap{Float64, Int16}
end
*/
extern "C" std::map<double,int16_t> * std_map_double_int16_t_new(
    
) {
    return new std::map<double,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int16})
    res = ccall(("std_map_double_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_delete(
    std::map<double,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Int16})
    res = ccall(("std_map_double_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int16_t_length(
    const std::map<double,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Int16}, key::Any)
    res = ccall(("std_map_double_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_int16_t_haskey(
    const std::map<double,int16_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int16}, key::Any)
    res = ccall(("std_map_double_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_double_int16_t_getindex(
    const std::map<double,int16_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_double_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Float64), map, convert(Int16, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_setindex_(
    std::map<double,int16_t> * restrict map,
    int16_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Int16}, key::Any)
    res = ccall(("std_map_double_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Int16}
end
*/
extern "C" void std_map_double_int16_t_delete_(
    std::map<double,int16_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Int16})
    res = ccall(("std_map_double_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Int16}(res)::Main.StdMaps.StdMapIterator{Float64, Int16}
end
*/
extern "C" std::map<double,int16_t>::const_iterator * std_map_double_int16_t_const_iterator_new(
    
) {
    return new std::map<double,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Int16})
    res = ccall(("std_map_double_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_const_iterator_delete(
    std::map<double,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Int16}, map::Main.StdMaps.StdMap{Float64, Int16})
    res = ccall(("std_map_double_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_iterator_iterate_(
    std::map<double,int16_t>::const_iterator * restrict iter,
    const std::map<double,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Int16})
    res = ccall(("std_map_double_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_iterator_next_(
    std::map<double,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Int16}, map::Main.StdMaps.StdMap{Float64, Int16})
    res = ccall(("std_map_double_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_int16_t_iterator_done(
    const std::map<double,int16_t>::const_iterator * restrict iter,
    const std::map<double,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Int16})
    res = ccall(("std_map_double_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_double_int16_t_iterator_getindex(
    const std::map<double,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int64})
    res = ccall(("std_map_double_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int64}(res)::Main.StdMaps.StdMap{Float64, Int64}
end
*/
extern "C" std::map<double,int64_t> * std_map_double_int64_t_new(
    
) {
    return new std::map<double,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int64})
    res = ccall(("std_map_double_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_delete(
    std::map<double,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Int64})
    res = ccall(("std_map_double_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int64_t_length(
    const std::map<double,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Int64}, key::Any)
    res = ccall(("std_map_double_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_int64_t_haskey(
    const std::map<double,int64_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int64}, key::Any)
    res = ccall(("std_map_double_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_double_int64_t_getindex(
    const std::map<double,int64_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_double_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Float64), map, convert(Int64, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_setindex_(
    std::map<double,int64_t> * restrict map,
    int64_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Int64}, key::Any)
    res = ccall(("std_map_double_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Int64}
end
*/
extern "C" void std_map_double_int64_t_delete_(
    std::map<double,int64_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Int64})
    res = ccall(("std_map_double_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Int64}(res)::Main.StdMaps.StdMapIterator{Float64, Int64}
end
*/
extern "C" std::map<double,int64_t>::const_iterator * std_map_double_int64_t_const_iterator_new(
    
) {
    return new std::map<double,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Int64})
    res = ccall(("std_map_double_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_const_iterator_delete(
    std::map<double,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Int64}, map::Main.StdMaps.StdMap{Float64, Int64})
    res = ccall(("std_map_double_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_iterator_iterate_(
    std::map<double,int64_t>::const_iterator * restrict iter,
    const std::map<double,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Int64})
    res = ccall(("std_map_double_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_iterator_next_(
    std::map<double,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Int64}, map::Main.StdMaps.StdMap{Float64, Int64})
    res = ccall(("std_map_double_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_int64_t_iterator_done(
    const std::map<double,int64_t>::const_iterator * restrict iter,
    const std::map<double,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Int64})
    res = ccall(("std_map_double_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_double_int64_t_iterator_getindex(
    const std::map<double,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt32})
    res = ccall(("std_map_double_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt32}(res)::Main.StdMaps.StdMap{Float64, UInt32}
end
*/
extern "C" std::map<double,uint32_t> * std_map_double_uint32_t_new(
    
) {
    return new std::map<double,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_delete(
    std::map<double,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint32_t_length(
    const std::map<double,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, UInt32}, key::Any)
    res = ccall(("std_map_double_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_uint32_t_haskey(
    const std::map<double,uint32_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt32}, key::Any)
    res = ccall(("std_map_double_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_double_uint32_t_getindex(
    const std::map<double,uint32_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_double_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Float64), map, convert(UInt32, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_setindex_(
    std::map<double,uint32_t> * restrict map,
    uint32_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, UInt32}, key::Any)
    res = ccall(("std_map_double_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, UInt32}
end
*/
extern "C" void std_map_double_uint32_t_delete_(
    std::map<double,uint32_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{UInt32})
    res = ccall(("std_map_double_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, UInt32}(res)::Main.StdMaps.StdMapIterator{Float64, UInt32}
end
*/
extern "C" std::map<double,uint32_t>::const_iterator * std_map_double_uint32_t_const_iterator_new(
    
) {
    return new std::map<double,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_const_iterator_delete(
    std::map<double,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, UInt32}, map::Main.StdMaps.StdMap{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_iterator_iterate_(
    std::map<double,uint32_t>::const_iterator * restrict iter,
    const std::map<double,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_iterator_next_(
    std::map<double,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, UInt32}, map::Main.StdMaps.StdMap{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_uint32_t_iterator_done(
    const std::map<double,uint32_t>::const_iterator * restrict iter,
    const std::map<double,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_double_uint32_t_iterator_getindex(
    const std::map<double,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Float32})
    res = ccall(("std_map_double_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Float32}(res)::Main.StdMaps.StdMap{Float64, Float32}
end
*/
extern "C" std::map<double,float> * std_map_double_float_new(
    
) {
    return new std::map<double,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Float32})
    res = ccall(("std_map_double_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_float_delete(
    std::map<double,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Float32})
    res = ccall(("std_map_double_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_float_length(
    const std::map<double,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Float32}, key::Any)
    res = ccall(("std_map_double_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_float_haskey(
    const std::map<double,float> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Float32}, key::Any)
    res = ccall(("std_map_double_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Float32
end
*/
extern "C" float std_map_double_float_getindex(
    const std::map<double,float> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_double_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Float64), map, convert(Float32, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_float_setindex_(
    std::map<double,float> * restrict map,
    float elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Float32}, key::Any)
    res = ccall(("std_map_double_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Float32}
end
*/
extern "C" void std_map_double_float_delete_(
    std::map<double,float> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Float32})
    res = ccall(("std_map_double_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Float32}(res)::Main.StdMaps.StdMapIterator{Float64, Float32}
end
*/
extern "C" std::map<double,float>::const_iterator * std_map_double_float_const_iterator_new(
    
) {
    return new std::map<double,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Float32})
    res = ccall(("std_map_double_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_float_const_iterator_delete(
    std::map<double,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Float32}, map::Main.StdMaps.StdMap{Float64, Float32})
    res = ccall(("std_map_double_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_float_iterator_iterate_(
    std::map<double,float>::const_iterator * restrict iter,
    const std::map<double,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Float32})
    res = ccall(("std_map_double_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_float_iterator_next_(
    std::map<double,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Float32}, map::Main.StdMaps.StdMap{Float64, Float32})
    res = ccall(("std_map_double_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_float_iterator_done(
    const std::map<double,float>::const_iterator * restrict iter,
    const std::map<double,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Float32})
    res = ccall(("std_map_double_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_double_float_iterator_getindex(
    const std::map<double,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int32})
    res = ccall(("std_map_double_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int32}(res)::Main.StdMaps.StdMap{Float64, Int32}
end
*/
extern "C" std::map<double,int32_t> * std_map_double_int32_t_new(
    
) {
    return new std::map<double,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int32})
    res = ccall(("std_map_double_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_delete(
    std::map<double,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Int32})
    res = ccall(("std_map_double_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int32_t_length(
    const std::map<double,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Int32}, key::Any)
    res = ccall(("std_map_double_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_int32_t_haskey(
    const std::map<double,int32_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int32}, key::Any)
    res = ccall(("std_map_double_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_double_int32_t_getindex(
    const std::map<double,int32_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_double_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Float64), map, convert(Int32, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_setindex_(
    std::map<double,int32_t> * restrict map,
    int32_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Int32}, key::Any)
    res = ccall(("std_map_double_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Int32}
end
*/
extern "C" void std_map_double_int32_t_delete_(
    std::map<double,int32_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Int32})
    res = ccall(("std_map_double_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Int32}(res)::Main.StdMaps.StdMapIterator{Float64, Int32}
end
*/
extern "C" std::map<double,int32_t>::const_iterator * std_map_double_int32_t_const_iterator_new(
    
) {
    return new std::map<double,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Int32})
    res = ccall(("std_map_double_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_const_iterator_delete(
    std::map<double,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Int32}, map::Main.StdMaps.StdMap{Float64, Int32})
    res = ccall(("std_map_double_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_iterator_iterate_(
    std::map<double,int32_t>::const_iterator * restrict iter,
    const std::map<double,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Int32})
    res = ccall(("std_map_double_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_iterator_next_(
    std::map<double,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Int32}, map::Main.StdMaps.StdMap{Float64, Int32})
    res = ccall(("std_map_double_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_int32_t_iterator_done(
    const std::map<double,int32_t>::const_iterator * restrict iter,
    const std::map<double,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Int32})
    res = ccall(("std_map_double_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_double_int32_t_iterator_getindex(
    const std::map<double,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Float64})
    res = ccall(("std_map_double_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Float64}(res)::Main.StdMaps.StdMap{Float64, Float64}
end
*/
extern "C" std::map<double,double> * std_map_double_double_new(
    
) {
    return new std::map<double,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Float64})
    res = ccall(("std_map_double_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_double_delete(
    std::map<double,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, Float64})
    res = ccall(("std_map_double_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_double_length(
    const std::map<double,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, Float64}, key::Any)
    res = ccall(("std_map_double_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_double_haskey(
    const std::map<double,double> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Float64}, key::Any)
    res = ccall(("std_map_double_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::Float64
end
*/
extern "C" double std_map_double_double_getindex(
    const std::map<double,double> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_double_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Float64), map, convert(Float64, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_double_setindex_(
    std::map<double,double> * restrict map,
    double elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, Float64}, key::Any)
    res = ccall(("std_map_double_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, Float64}
end
*/
extern "C" void std_map_double_double_delete_(
    std::map<double,double> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{Float64})
    res = ccall(("std_map_double_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, Float64}(res)::Main.StdMaps.StdMapIterator{Float64, Float64}
end
*/
extern "C" std::map<double,double>::const_iterator * std_map_double_double_const_iterator_new(
    
) {
    return new std::map<double,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, Float64})
    res = ccall(("std_map_double_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_double_const_iterator_delete(
    std::map<double,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, Float64}, map::Main.StdMaps.StdMap{Float64, Float64})
    res = ccall(("std_map_double_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_double_iterator_iterate_(
    std::map<double,double>::const_iterator * restrict iter,
    const std::map<double,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, Float64})
    res = ccall(("std_map_double_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_double_iterator_next_(
    std::map<double,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, Float64}, map::Main.StdMaps.StdMap{Float64, Float64})
    res = ccall(("std_map_double_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_double_iterator_done(
    const std::map<double,double>::const_iterator * restrict iter,
    const std::map<double,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, Float64})
    res = ccall(("std_map_double_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_double_double_iterator_getindex(
    const std::map<double,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt8})
    res = ccall(("std_map_double_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt8}(res)::Main.StdMaps.StdMap{Float64, UInt8}
end
*/
extern "C" std::map<double,uint8_t> * std_map_double_uint8_t_new(
    
) {
    return new std::map<double,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_delete(
    std::map<double,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint8_t_length(
    const std::map<double,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, UInt8}, key::Any)
    res = ccall(("std_map_double_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_uint8_t_haskey(
    const std::map<double,uint8_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt8}, key::Any)
    res = ccall(("std_map_double_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_double_uint8_t_getindex(
    const std::map<double,uint8_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_double_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Float64), map, convert(UInt8, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_setindex_(
    std::map<double,uint8_t> * restrict map,
    uint8_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, UInt8}, key::Any)
    res = ccall(("std_map_double_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, UInt8}
end
*/
extern "C" void std_map_double_uint8_t_delete_(
    std::map<double,uint8_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{UInt8})
    res = ccall(("std_map_double_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, UInt8}(res)::Main.StdMaps.StdMapIterator{Float64, UInt8}
end
*/
extern "C" std::map<double,uint8_t>::const_iterator * std_map_double_uint8_t_const_iterator_new(
    
) {
    return new std::map<double,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_const_iterator_delete(
    std::map<double,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, UInt8}, map::Main.StdMaps.StdMap{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_iterator_iterate_(
    std::map<double,uint8_t>::const_iterator * restrict iter,
    const std::map<double,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_iterator_next_(
    std::map<double,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, UInt8}, map::Main.StdMaps.StdMap{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_uint8_t_iterator_done(
    const std::map<double,uint8_t>::const_iterator * restrict iter,
    const std::map<double,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_double_uint8_t_iterator_getindex(
    const std::map<double,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt16})
    res = ccall(("std_map_double_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt16}(res)::Main.StdMaps.StdMap{Float64, UInt16}
end
*/
extern "C" std::map<double,uint16_t> * std_map_double_uint16_t_new(
    
) {
    return new std::map<double,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_delete(
    std::map<double,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint16_t_length(
    const std::map<double,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{Float64, UInt16}, key::Any)
    res = ccall(("std_map_double_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_double_uint16_t_haskey(
    const std::map<double,uint16_t> * restrict map,
    double key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt16}, key::Any)
    res = ccall(("std_map_double_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_double_uint16_t_getindex(
    const std::map<double,uint16_t> * restrict map,
    double key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_double_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Float64), map, convert(UInt16, elt), convert(Float64, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_setindex_(
    std::map<double,uint16_t> * restrict map,
    uint16_t elt,
    double key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{Float64, UInt16}, key::Any)
    res = ccall(("std_map_double_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), map, convert(Float64, key))
    return map::Main.StdMaps.StdMap{Float64, UInt16}
end
*/
extern "C" void std_map_double_uint16_t_delete_(
    std::map<double,uint16_t> * restrict map,
    double key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{Float64}, type::Type{UInt16})
    res = ccall(("std_map_double_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{Float64, UInt16}(res)::Main.StdMaps.StdMapIterator{Float64, UInt16}
end
*/
extern "C" std::map<double,uint16_t>::const_iterator * std_map_double_uint16_t_const_iterator_new(
    
) {
    return new std::map<double,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_const_iterator_delete(
    std::map<double,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{Float64, UInt16}, map::Main.StdMaps.StdMap{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_iterator_iterate_(
    std::map<double,uint16_t>::const_iterator * restrict iter,
    const std::map<double,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_iterator_next_(
    std::map<double,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{Float64, UInt16}, map::Main.StdMaps.StdMap{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_double_uint16_t_iterator_done(
    const std::map<double,uint16_t>::const_iterator * restrict iter,
    const std::map<double,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_double_uint16_t_iterator_getindex(
    const std::map<double,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt64}(res)::Main.StdMaps.StdMap{UInt8, UInt64}
end
*/
extern "C" std::map<uint8_t,uint64_t> * std_map_uint8_t_uint64_t_new(
    
) {
    return new std::map<uint8_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_delete(
    std::map<uint8_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint64_t_length(
    const std::map<uint8_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, UInt64}, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_uint64_t_haskey(
    const std::map<uint8_t,uint64_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt64}, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint8_t_uint64_t_getindex(
    const std::map<uint8_t,uint64_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt8), map, convert(UInt64, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_setindex_(
    std::map<uint8_t,uint64_t> * restrict map,
    uint64_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, UInt64}, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, UInt64}
end
*/
extern "C" void std_map_uint8_t_uint64_t_delete_(
    std::map<uint8_t,uint64_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, UInt64}(res)::Main.StdMaps.StdMapIterator{UInt8, UInt64}
end
*/
extern "C" std::map<uint8_t,uint64_t>::const_iterator * std_map_uint8_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_const_iterator_delete(
    std::map<uint8_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt64}, map::Main.StdMaps.StdMap{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_iterator_iterate_(
    std::map<uint8_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_iterator_next_(
    std::map<uint8_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, UInt64}, map::Main.StdMaps.StdMap{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_uint64_t_iterator_done(
    const std::map<uint8_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint8_t_uint64_t_iterator_getindex(
    const std::map<uint8_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int8})
    res = ccall(("std_map_uint8_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int8}(res)::Main.StdMaps.StdMap{UInt8, Int8}
end
*/
extern "C" std::map<uint8_t,int8_t> * std_map_uint8_t_int8_t_new(
    
) {
    return new std::map<uint8_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_delete(
    std::map<uint8_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int8_t_length(
    const std::map<uint8_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Int8}, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_int8_t_haskey(
    const std::map<uint8_t,int8_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int8}, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint8_t_int8_t_getindex(
    const std::map<uint8_t,int8_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt8), map, convert(Int8, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_setindex_(
    std::map<uint8_t,int8_t> * restrict map,
    int8_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Int8}, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Int8}
end
*/
extern "C" void std_map_uint8_t_int8_t_delete_(
    std::map<uint8_t,int8_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Int8})
    res = ccall(("std_map_uint8_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Int8}(res)::Main.StdMaps.StdMapIterator{UInt8, Int8}
end
*/
extern "C" std::map<uint8_t,int8_t>::const_iterator * std_map_uint8_t_int8_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_const_iterator_delete(
    std::map<uint8_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Int8}, map::Main.StdMaps.StdMap{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_iterator_iterate_(
    std::map<uint8_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_iterator_next_(
    std::map<uint8_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Int8}, map::Main.StdMaps.StdMap{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_int8_t_iterator_done(
    const std::map<uint8_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_uint8_t_int8_t_iterator_getindex(
    const std::map<uint8_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int16})
    res = ccall(("std_map_uint8_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int16}(res)::Main.StdMaps.StdMap{UInt8, Int16}
end
*/
extern "C" std::map<uint8_t,int16_t> * std_map_uint8_t_int16_t_new(
    
) {
    return new std::map<uint8_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_delete(
    std::map<uint8_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int16_t_length(
    const std::map<uint8_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Int16}, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_int16_t_haskey(
    const std::map<uint8_t,int16_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int16}, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint8_t_int16_t_getindex(
    const std::map<uint8_t,int16_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt8), map, convert(Int16, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_setindex_(
    std::map<uint8_t,int16_t> * restrict map,
    int16_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Int16}, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Int16}
end
*/
extern "C" void std_map_uint8_t_int16_t_delete_(
    std::map<uint8_t,int16_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Int16})
    res = ccall(("std_map_uint8_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Int16}(res)::Main.StdMaps.StdMapIterator{UInt8, Int16}
end
*/
extern "C" std::map<uint8_t,int16_t>::const_iterator * std_map_uint8_t_int16_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_const_iterator_delete(
    std::map<uint8_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Int16}, map::Main.StdMaps.StdMap{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_iterator_iterate_(
    std::map<uint8_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_iterator_next_(
    std::map<uint8_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Int16}, map::Main.StdMaps.StdMap{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_int16_t_iterator_done(
    const std::map<uint8_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_uint8_t_int16_t_iterator_getindex(
    const std::map<uint8_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int64})
    res = ccall(("std_map_uint8_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int64}(res)::Main.StdMaps.StdMap{UInt8, Int64}
end
*/
extern "C" std::map<uint8_t,int64_t> * std_map_uint8_t_int64_t_new(
    
) {
    return new std::map<uint8_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_delete(
    std::map<uint8_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int64_t_length(
    const std::map<uint8_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Int64}, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_int64_t_haskey(
    const std::map<uint8_t,int64_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int64}, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint8_t_int64_t_getindex(
    const std::map<uint8_t,int64_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt8), map, convert(Int64, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_setindex_(
    std::map<uint8_t,int64_t> * restrict map,
    int64_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Int64}, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Int64}
end
*/
extern "C" void std_map_uint8_t_int64_t_delete_(
    std::map<uint8_t,int64_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Int64})
    res = ccall(("std_map_uint8_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Int64}(res)::Main.StdMaps.StdMapIterator{UInt8, Int64}
end
*/
extern "C" std::map<uint8_t,int64_t>::const_iterator * std_map_uint8_t_int64_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_const_iterator_delete(
    std::map<uint8_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Int64}, map::Main.StdMaps.StdMap{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_iterator_iterate_(
    std::map<uint8_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_iterator_next_(
    std::map<uint8_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Int64}, map::Main.StdMaps.StdMap{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_int64_t_iterator_done(
    const std::map<uint8_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_uint8_t_int64_t_iterator_getindex(
    const std::map<uint8_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt32}(res)::Main.StdMaps.StdMap{UInt8, UInt32}
end
*/
extern "C" std::map<uint8_t,uint32_t> * std_map_uint8_t_uint32_t_new(
    
) {
    return new std::map<uint8_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_delete(
    std::map<uint8_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint32_t_length(
    const std::map<uint8_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, UInt32}, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_uint32_t_haskey(
    const std::map<uint8_t,uint32_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt32}, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint8_t_uint32_t_getindex(
    const std::map<uint8_t,uint32_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt8), map, convert(UInt32, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_setindex_(
    std::map<uint8_t,uint32_t> * restrict map,
    uint32_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, UInt32}, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, UInt32}
end
*/
extern "C" void std_map_uint8_t_uint32_t_delete_(
    std::map<uint8_t,uint32_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, UInt32}(res)::Main.StdMaps.StdMapIterator{UInt8, UInt32}
end
*/
extern "C" std::map<uint8_t,uint32_t>::const_iterator * std_map_uint8_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_const_iterator_delete(
    std::map<uint8_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt32}, map::Main.StdMaps.StdMap{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_iterator_iterate_(
    std::map<uint8_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_iterator_next_(
    std::map<uint8_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, UInt32}, map::Main.StdMaps.StdMap{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_uint32_t_iterator_done(
    const std::map<uint8_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint8_t_uint32_t_iterator_getindex(
    const std::map<uint8_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Float32})
    res = ccall(("std_map_uint8_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Float32}(res)::Main.StdMaps.StdMap{UInt8, Float32}
end
*/
extern "C" std::map<uint8_t,float> * std_map_uint8_t_float_new(
    
) {
    return new std::map<uint8_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_delete(
    std::map<uint8_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_float_length(
    const std::map<uint8_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Float32}, key::Any)
    res = ccall(("std_map_uint8_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_float_haskey(
    const std::map<uint8_t,float> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Float32}, key::Any)
    res = ccall(("std_map_uint8_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Float32
end
*/
extern "C" float std_map_uint8_t_float_getindex(
    const std::map<uint8_t,float> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt8), map, convert(Float32, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_setindex_(
    std::map<uint8_t,float> * restrict map,
    float elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Float32}, key::Any)
    res = ccall(("std_map_uint8_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Float32}
end
*/
extern "C" void std_map_uint8_t_float_delete_(
    std::map<uint8_t,float> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Float32})
    res = ccall(("std_map_uint8_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Float32}(res)::Main.StdMaps.StdMapIterator{UInt8, Float32}
end
*/
extern "C" std::map<uint8_t,float>::const_iterator * std_map_uint8_t_float_const_iterator_new(
    
) {
    return new std::map<uint8_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_const_iterator_delete(
    std::map<uint8_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Float32}, map::Main.StdMaps.StdMap{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_iterator_iterate_(
    std::map<uint8_t,float>::const_iterator * restrict iter,
    const std::map<uint8_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_iterator_next_(
    std::map<uint8_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Float32}, map::Main.StdMaps.StdMap{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_float_iterator_done(
    const std::map<uint8_t,float>::const_iterator * restrict iter,
    const std::map<uint8_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_uint8_t_float_iterator_getindex(
    const std::map<uint8_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int32})
    res = ccall(("std_map_uint8_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int32}(res)::Main.StdMaps.StdMap{UInt8, Int32}
end
*/
extern "C" std::map<uint8_t,int32_t> * std_map_uint8_t_int32_t_new(
    
) {
    return new std::map<uint8_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_delete(
    std::map<uint8_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int32_t_length(
    const std::map<uint8_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Int32}, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_int32_t_haskey(
    const std::map<uint8_t,int32_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int32}, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint8_t_int32_t_getindex(
    const std::map<uint8_t,int32_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt8), map, convert(Int32, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_setindex_(
    std::map<uint8_t,int32_t> * restrict map,
    int32_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Int32}, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Int32}
end
*/
extern "C" void std_map_uint8_t_int32_t_delete_(
    std::map<uint8_t,int32_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Int32})
    res = ccall(("std_map_uint8_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Int32}(res)::Main.StdMaps.StdMapIterator{UInt8, Int32}
end
*/
extern "C" std::map<uint8_t,int32_t>::const_iterator * std_map_uint8_t_int32_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_const_iterator_delete(
    std::map<uint8_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Int32}, map::Main.StdMaps.StdMap{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_iterator_iterate_(
    std::map<uint8_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_iterator_next_(
    std::map<uint8_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Int32}, map::Main.StdMaps.StdMap{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_int32_t_iterator_done(
    const std::map<uint8_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint8_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_uint8_t_int32_t_iterator_getindex(
    const std::map<uint8_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Float64})
    res = ccall(("std_map_uint8_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Float64}(res)::Main.StdMaps.StdMap{UInt8, Float64}
end
*/
extern "C" std::map<uint8_t,double> * std_map_uint8_t_double_new(
    
) {
    return new std::map<uint8_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_delete(
    std::map<uint8_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_double_length(
    const std::map<uint8_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, Float64}, key::Any)
    res = ccall(("std_map_uint8_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_double_haskey(
    const std::map<uint8_t,double> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Float64}, key::Any)
    res = ccall(("std_map_uint8_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::Float64
end
*/
extern "C" double std_map_uint8_t_double_getindex(
    const std::map<uint8_t,double> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt8), map, convert(Float64, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_setindex_(
    std::map<uint8_t,double> * restrict map,
    double elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, Float64}, key::Any)
    res = ccall(("std_map_uint8_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, Float64}
end
*/
extern "C" void std_map_uint8_t_double_delete_(
    std::map<uint8_t,double> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{Float64})
    res = ccall(("std_map_uint8_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, Float64}(res)::Main.StdMaps.StdMapIterator{UInt8, Float64}
end
*/
extern "C" std::map<uint8_t,double>::const_iterator * std_map_uint8_t_double_const_iterator_new(
    
) {
    return new std::map<uint8_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_const_iterator_delete(
    std::map<uint8_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, Float64}, map::Main.StdMaps.StdMap{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_iterator_iterate_(
    std::map<uint8_t,double>::const_iterator * restrict iter,
    const std::map<uint8_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_iterator_next_(
    std::map<uint8_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, Float64}, map::Main.StdMaps.StdMap{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_double_iterator_done(
    const std::map<uint8_t,double>::const_iterator * restrict iter,
    const std::map<uint8_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_uint8_t_double_iterator_getindex(
    const std::map<uint8_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt8}(res)::Main.StdMaps.StdMap{UInt8, UInt8}
end
*/
extern "C" std::map<uint8_t,uint8_t> * std_map_uint8_t_uint8_t_new(
    
) {
    return new std::map<uint8_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_delete(
    std::map<uint8_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint8_t_length(
    const std::map<uint8_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, UInt8}, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_uint8_t_haskey(
    const std::map<uint8_t,uint8_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt8}, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint8_t_uint8_t_getindex(
    const std::map<uint8_t,uint8_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt8), map, convert(UInt8, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_setindex_(
    std::map<uint8_t,uint8_t> * restrict map,
    uint8_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, UInt8}, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, UInt8}
end
*/
extern "C" void std_map_uint8_t_uint8_t_delete_(
    std::map<uint8_t,uint8_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, UInt8}(res)::Main.StdMaps.StdMapIterator{UInt8, UInt8}
end
*/
extern "C" std::map<uint8_t,uint8_t>::const_iterator * std_map_uint8_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_const_iterator_delete(
    std::map<uint8_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt8}, map::Main.StdMaps.StdMap{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_iterator_iterate_(
    std::map<uint8_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_iterator_next_(
    std::map<uint8_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, UInt8}, map::Main.StdMaps.StdMap{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_uint8_t_iterator_done(
    const std::map<uint8_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint8_t_uint8_t_iterator_getindex(
    const std::map<uint8_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt16}(res)::Main.StdMaps.StdMap{UInt8, UInt16}
end
*/
extern "C" std::map<uint8_t,uint16_t> * std_map_uint8_t_uint16_t_new(
    
) {
    return new std::map<uint8_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_delete(
    std::map<uint8_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint16_t_length(
    const std::map<uint8_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt8, UInt16}, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint8_t_uint16_t_haskey(
    const std::map<uint8_t,uint16_t> * restrict map,
    uint8_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt16}, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint8_t_uint16_t_getindex(
    const std::map<uint8_t,uint16_t> * restrict map,
    uint8_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt8), map, convert(UInt16, elt), convert(UInt8, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_setindex_(
    std::map<uint8_t,uint16_t> * restrict map,
    uint16_t elt,
    uint8_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt8, UInt16}, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), map, convert(UInt8, key))
    return map::Main.StdMaps.StdMap{UInt8, UInt16}
end
*/
extern "C" void std_map_uint8_t_uint16_t_delete_(
    std::map<uint8_t,uint16_t> * restrict map,
    uint8_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt8}, type::Type{UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt8, UInt16}(res)::Main.StdMaps.StdMapIterator{UInt8, UInt16}
end
*/
extern "C" std::map<uint8_t,uint16_t>::const_iterator * std_map_uint8_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<uint8_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_const_iterator_delete(
    std::map<uint8_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt16}, map::Main.StdMaps.StdMap{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_iterator_iterate_(
    std::map<uint8_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_iterator_next_(
    std::map<uint8_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt8, UInt16}, map::Main.StdMaps.StdMap{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint8_t_uint16_t_iterator_done(
    const std::map<uint8_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint8_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint8_t_uint16_t_iterator_getindex(
    const std::map<uint8_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt64}(res)::Main.StdMaps.StdMap{UInt16, UInt64}
end
*/
extern "C" std::map<uint16_t,uint64_t> * std_map_uint16_t_uint64_t_new(
    
) {
    return new std::map<uint16_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_delete(
    std::map<uint16_t,uint64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint64_t_length(
    const std::map<uint16_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, UInt64}, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_uint64_t_haskey(
    const std::map<uint16_t,uint64_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt64}, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint16_t_uint64_t_getindex(
    const std::map<uint16_t,uint64_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt64}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt16), map, convert(UInt64, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_setindex_(
    std::map<uint16_t,uint64_t> * restrict map,
    uint64_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, UInt64}, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, UInt64}
end
*/
extern "C" void std_map_uint16_t_uint64_t_delete_(
    std::map<uint16_t,uint64_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, UInt64}(res)::Main.StdMaps.StdMapIterator{UInt16, UInt64}
end
*/
extern "C" std::map<uint16_t,uint64_t>::const_iterator * std_map_uint16_t_uint64_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,uint64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_const_iterator_delete(
    std::map<uint16_t,uint64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt64}, map::Main.StdMaps.StdMap{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_iterator_iterate_(
    std::map<uint16_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_iterator_next_(
    std::map<uint16_t,uint64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, UInt64}, map::Main.StdMaps.StdMap{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_uint64_t_iterator_done(
    const std::map<uint16_t,uint64_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), iter)
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint16_t_uint64_t_iterator_getindex(
    const std::map<uint16_t,uint64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int8})
    res = ccall(("std_map_uint16_t_int8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int8}(res)::Main.StdMaps.StdMap{UInt16, Int8}
end
*/
extern "C" std::map<uint16_t,int8_t> * std_map_uint16_t_int8_t_new(
    
) {
    return new std::map<uint16_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_delete(
    std::map<uint16_t,int8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int8_t_length(
    const std::map<uint16_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Int8}, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_int8_t_haskey(
    const std::map<uint16_t,int8_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int8}, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint16_t_int8_t_getindex(
    const std::map<uint16_t,int8_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int8}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt16), map, convert(Int8, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_setindex_(
    std::map<uint16_t,int8_t> * restrict map,
    int8_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Int8}, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Int8}
end
*/
extern "C" void std_map_uint16_t_int8_t_delete_(
    std::map<uint16_t,int8_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Int8})
    res = ccall(("std_map_uint16_t_int8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Int8}(res)::Main.StdMaps.StdMapIterator{UInt16, Int8}
end
*/
extern "C" std::map<uint16_t,int8_t>::const_iterator * std_map_uint16_t_int8_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,int8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_const_iterator_delete(
    std::map<uint16_t,int8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Int8}, map::Main.StdMaps.StdMap{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_iterator_iterate_(
    std::map<uint16_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_iterator_next_(
    std::map<uint16_t,int8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Int8}, map::Main.StdMaps.StdMap{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_int8_t_iterator_done(
    const std::map<uint16_t,int8_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), iter)
    return res::Int8
end
*/
extern "C" int8_t std_map_uint16_t_int8_t_iterator_getindex(
    const std::map<uint16_t,int8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int16})
    res = ccall(("std_map_uint16_t_int16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int16}(res)::Main.StdMaps.StdMap{UInt16, Int16}
end
*/
extern "C" std::map<uint16_t,int16_t> * std_map_uint16_t_int16_t_new(
    
) {
    return new std::map<uint16_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_delete(
    std::map<uint16_t,int16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int16_t_length(
    const std::map<uint16_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Int16}, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_int16_t_haskey(
    const std::map<uint16_t,int16_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int16}, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint16_t_int16_t_getindex(
    const std::map<uint16_t,int16_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int16}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt16), map, convert(Int16, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_setindex_(
    std::map<uint16_t,int16_t> * restrict map,
    int16_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Int16}, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Int16}
end
*/
extern "C" void std_map_uint16_t_int16_t_delete_(
    std::map<uint16_t,int16_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Int16})
    res = ccall(("std_map_uint16_t_int16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Int16}(res)::Main.StdMaps.StdMapIterator{UInt16, Int16}
end
*/
extern "C" std::map<uint16_t,int16_t>::const_iterator * std_map_uint16_t_int16_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,int16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_const_iterator_delete(
    std::map<uint16_t,int16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Int16}, map::Main.StdMaps.StdMap{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_iterator_iterate_(
    std::map<uint16_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_iterator_next_(
    std::map<uint16_t,int16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Int16}, map::Main.StdMaps.StdMap{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_int16_t_iterator_done(
    const std::map<uint16_t,int16_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), iter)
    return res::Int16
end
*/
extern "C" int16_t std_map_uint16_t_int16_t_iterator_getindex(
    const std::map<uint16_t,int16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int64})
    res = ccall(("std_map_uint16_t_int64_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int64}(res)::Main.StdMaps.StdMap{UInt16, Int64}
end
*/
extern "C" std::map<uint16_t,int64_t> * std_map_uint16_t_int64_t_new(
    
) {
    return new std::map<uint16_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_delete(
    std::map<uint16_t,int64_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int64_t_length(
    const std::map<uint16_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Int64}, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_int64_t_haskey(
    const std::map<uint16_t,int64_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int64}, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint16_t_int64_t_getindex(
    const std::map<uint16_t,int64_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int64}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt16), map, convert(Int64, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_setindex_(
    std::map<uint16_t,int64_t> * restrict map,
    int64_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Int64}, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Int64}
end
*/
extern "C" void std_map_uint16_t_int64_t_delete_(
    std::map<uint16_t,int64_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Int64})
    res = ccall(("std_map_uint16_t_int64_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Int64}(res)::Main.StdMaps.StdMapIterator{UInt16, Int64}
end
*/
extern "C" std::map<uint16_t,int64_t>::const_iterator * std_map_uint16_t_int64_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,int64_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_const_iterator_delete(
    std::map<uint16_t,int64_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Int64}, map::Main.StdMaps.StdMap{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_iterator_iterate_(
    std::map<uint16_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int64_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_iterator_next_(
    std::map<uint16_t,int64_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Int64}, map::Main.StdMaps.StdMap{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_int64_t_iterator_done(
    const std::map<uint16_t,int64_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int64_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), iter)
    return res::Int64
end
*/
extern "C" int64_t std_map_uint16_t_int64_t_iterator_getindex(
    const std::map<uint16_t,int64_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt32}(res)::Main.StdMaps.StdMap{UInt16, UInt32}
end
*/
extern "C" std::map<uint16_t,uint32_t> * std_map_uint16_t_uint32_t_new(
    
) {
    return new std::map<uint16_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_delete(
    std::map<uint16_t,uint32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint32_t_length(
    const std::map<uint16_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, UInt32}, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_uint32_t_haskey(
    const std::map<uint16_t,uint32_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt32}, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint16_t_uint32_t_getindex(
    const std::map<uint16_t,uint32_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt32}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt16), map, convert(UInt32, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_setindex_(
    std::map<uint16_t,uint32_t> * restrict map,
    uint32_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, UInt32}, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, UInt32}
end
*/
extern "C" void std_map_uint16_t_uint32_t_delete_(
    std::map<uint16_t,uint32_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, UInt32}(res)::Main.StdMaps.StdMapIterator{UInt16, UInt32}
end
*/
extern "C" std::map<uint16_t,uint32_t>::const_iterator * std_map_uint16_t_uint32_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,uint32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_const_iterator_delete(
    std::map<uint16_t,uint32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt32}, map::Main.StdMaps.StdMap{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_iterator_iterate_(
    std::map<uint16_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_iterator_next_(
    std::map<uint16_t,uint32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, UInt32}, map::Main.StdMaps.StdMap{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_uint32_t_iterator_done(
    const std::map<uint16_t,uint32_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), iter)
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint16_t_uint32_t_iterator_getindex(
    const std::map<uint16_t,uint32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Float32})
    res = ccall(("std_map_uint16_t_float_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Float32}(res)::Main.StdMaps.StdMap{UInt16, Float32}
end
*/
extern "C" std::map<uint16_t,float> * std_map_uint16_t_float_new(
    
) {
    return new std::map<uint16_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_delete(
    std::map<uint16_t,float> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_float_length(
    const std::map<uint16_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Float32}, key::Any)
    res = ccall(("std_map_uint16_t_float_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_float_haskey(
    const std::map<uint16_t,float> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Float32}, key::Any)
    res = ccall(("std_map_uint16_t_float_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Float32
end
*/
extern "C" float std_map_uint16_t_float_getindex(
    const std::map<uint16_t,float> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Float32}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_float_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt16), map, convert(Float32, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_setindex_(
    std::map<uint16_t,float> * restrict map,
    float elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Float32}, key::Any)
    res = ccall(("std_map_uint16_t_float_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Float32}
end
*/
extern "C" void std_map_uint16_t_float_delete_(
    std::map<uint16_t,float> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Float32})
    res = ccall(("std_map_uint16_t_float_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Float32}(res)::Main.StdMaps.StdMapIterator{UInt16, Float32}
end
*/
extern "C" std::map<uint16_t,float>::const_iterator * std_map_uint16_t_float_const_iterator_new(
    
) {
    return new std::map<uint16_t,float>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_const_iterator_delete(
    std::map<uint16_t,float>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Float32}, map::Main.StdMaps.StdMap{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_iterator_iterate_(
    std::map<uint16_t,float>::const_iterator * restrict iter,
    const std::map<uint16_t,float> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_iterator_next_(
    std::map<uint16_t,float>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Float32}, map::Main.StdMaps.StdMap{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_float_iterator_done(
    const std::map<uint16_t,float>::const_iterator * restrict iter,
    const std::map<uint16_t,float> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), iter)
    return res::Float32
end
*/
extern "C" float std_map_uint16_t_float_iterator_getindex(
    const std::map<uint16_t,float>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int32})
    res = ccall(("std_map_uint16_t_int32_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int32}(res)::Main.StdMaps.StdMap{UInt16, Int32}
end
*/
extern "C" std::map<uint16_t,int32_t> * std_map_uint16_t_int32_t_new(
    
) {
    return new std::map<uint16_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_delete(
    std::map<uint16_t,int32_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int32_t_length(
    const std::map<uint16_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Int32}, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_int32_t_haskey(
    const std::map<uint16_t,int32_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int32}, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint16_t_int32_t_getindex(
    const std::map<uint16_t,int32_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int32}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt16), map, convert(Int32, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_setindex_(
    std::map<uint16_t,int32_t> * restrict map,
    int32_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Int32}, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Int32}
end
*/
extern "C" void std_map_uint16_t_int32_t_delete_(
    std::map<uint16_t,int32_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Int32})
    res = ccall(("std_map_uint16_t_int32_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Int32}(res)::Main.StdMaps.StdMapIterator{UInt16, Int32}
end
*/
extern "C" std::map<uint16_t,int32_t>::const_iterator * std_map_uint16_t_int32_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,int32_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_const_iterator_delete(
    std::map<uint16_t,int32_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Int32}, map::Main.StdMaps.StdMap{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_iterator_iterate_(
    std::map<uint16_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int32_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_iterator_next_(
    std::map<uint16_t,int32_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Int32}, map::Main.StdMaps.StdMap{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_int32_t_iterator_done(
    const std::map<uint16_t,int32_t>::const_iterator * restrict iter,
    const std::map<uint16_t,int32_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), iter)
    return res::Int32
end
*/
extern "C" int32_t std_map_uint16_t_int32_t_iterator_getindex(
    const std::map<uint16_t,int32_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Float64})
    res = ccall(("std_map_uint16_t_double_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Float64}(res)::Main.StdMaps.StdMap{UInt16, Float64}
end
*/
extern "C" std::map<uint16_t,double> * std_map_uint16_t_double_new(
    
) {
    return new std::map<uint16_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_delete(
    std::map<uint16_t,double> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_double_length(
    const std::map<uint16_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, Float64}, key::Any)
    res = ccall(("std_map_uint16_t_double_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_double_haskey(
    const std::map<uint16_t,double> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Float64}, key::Any)
    res = ccall(("std_map_uint16_t_double_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::Float64
end
*/
extern "C" double std_map_uint16_t_double_getindex(
    const std::map<uint16_t,double> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Float64}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_double_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt16), map, convert(Float64, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_setindex_(
    std::map<uint16_t,double> * restrict map,
    double elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, Float64}, key::Any)
    res = ccall(("std_map_uint16_t_double_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, Float64}
end
*/
extern "C" void std_map_uint16_t_double_delete_(
    std::map<uint16_t,double> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{Float64})
    res = ccall(("std_map_uint16_t_double_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, Float64}(res)::Main.StdMaps.StdMapIterator{UInt16, Float64}
end
*/
extern "C" std::map<uint16_t,double>::const_iterator * std_map_uint16_t_double_const_iterator_new(
    
) {
    return new std::map<uint16_t,double>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_const_iterator_delete(
    std::map<uint16_t,double>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, Float64}, map::Main.StdMaps.StdMap{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_iterator_iterate_(
    std::map<uint16_t,double>::const_iterator * restrict iter,
    const std::map<uint16_t,double> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_iterator_next_(
    std::map<uint16_t,double>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, Float64}, map::Main.StdMaps.StdMap{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_double_iterator_done(
    const std::map<uint16_t,double>::const_iterator * restrict iter,
    const std::map<uint16_t,double> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), iter)
    return res::Float64
end
*/
extern "C" double std_map_uint16_t_double_iterator_getindex(
    const std::map<uint16_t,double>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt8}(res)::Main.StdMaps.StdMap{UInt16, UInt8}
end
*/
extern "C" std::map<uint16_t,uint8_t> * std_map_uint16_t_uint8_t_new(
    
) {
    return new std::map<uint16_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_delete(
    std::map<uint16_t,uint8_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint8_t_length(
    const std::map<uint16_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, UInt8}, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_uint8_t_haskey(
    const std::map<uint16_t,uint8_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt8}, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint16_t_uint8_t_getindex(
    const std::map<uint16_t,uint8_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt8}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt16), map, convert(UInt8, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_setindex_(
    std::map<uint16_t,uint8_t> * restrict map,
    uint8_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, UInt8}, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, UInt8}
end
*/
extern "C" void std_map_uint16_t_uint8_t_delete_(
    std::map<uint16_t,uint8_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, UInt8}(res)::Main.StdMaps.StdMapIterator{UInt16, UInt8}
end
*/
extern "C" std::map<uint16_t,uint8_t>::const_iterator * std_map_uint16_t_uint8_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,uint8_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_const_iterator_delete(
    std::map<uint16_t,uint8_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt8}, map::Main.StdMaps.StdMap{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_iterator_iterate_(
    std::map<uint16_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint8_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_iterator_next_(
    std::map<uint16_t,uint8_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, UInt8}, map::Main.StdMaps.StdMap{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_uint8_t_iterator_done(
    const std::map<uint16_t,uint8_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint8_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), iter)
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint16_t_uint8_t_iterator_getindex(
    const std::map<uint16_t,uint8_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt16}(res)::Main.StdMaps.StdMap{UInt16, UInt16}
end
*/
extern "C" std::map<uint16_t,uint16_t> * std_map_uint16_t_uint16_t_new(
    
) {
    return new std::map<uint16_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_delete(
    std::map<uint16_t,uint16_t> * restrict map
) {
    delete map;
}

/*
function Base.length(map::Main.StdMaps.StdMap{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint16_t_length(
    const std::map<uint16_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.haskey(map::Main.StdMaps.StdMap{UInt16, UInt16}, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_haskey", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return convert(Bool, res)::Bool
end
*/
extern "C" std::size_t std_map_uint16_t_uint16_t_haskey(
    const std::map<uint16_t,uint16_t> * restrict map,
    uint16_t key
) {
    return map->count(key);
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt16}, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint16_t_uint16_t_getindex(
    const std::map<uint16_t,uint16_t> * restrict map,
    uint16_t key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt16}, elt::Any, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt16), map, convert(UInt16, elt), convert(UInt16, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_setindex_(
    std::map<uint16_t,uint16_t> * restrict map,
    uint16_t elt,
    uint16_t key
) {
    (*map)[key] = std::move(elt);
}

/*
function Base.delete!(map::Main.StdMaps.StdMap{UInt16, UInt16}, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_delete_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), map, convert(UInt16, key))
    return map::Main.StdMaps.StdMap{UInt16, UInt16}
end
*/
extern "C" void std_map_uint16_t_uint16_t_delete_(
    std::map<uint16_t,uint16_t> * restrict map,
    uint16_t key
) {
    map->erase(key);
}

/*
function StdMapIterator_new(key::Type{UInt16}, type::Type{UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_const_iterator_new", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMapIterator{UInt16, UInt16}(res)::Main.StdMaps.StdMapIterator{UInt16, UInt16}
end
*/
extern "C" std::map<uint16_t,uint16_t>::const_iterator * std_map_uint16_t_uint16_t_const_iterator_new(
    
) {
    return new std::map<uint16_t,uint16_t>::const_iterator;
}

/*
function StdMapIterator_delete(map::Main.StdMaps.StdMapIterator{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_const_iterator_delete", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_const_iterator_delete(
    std::map<uint16_t,uint16_t>::const_iterator * restrict iter
) {
    delete iter;
}

/*
function iterate!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt16}, map::Main.StdMaps.StdMap{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_iterator_iterate_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_iterator_iterate_(
    std::map<uint16_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint16_t> * restrict map
) {
    *iter = map->cbegin();
}

/*
function next!(iter::Main.StdMaps.StdMapIterator{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_iterator_next_", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), iter)
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_iterator_next_(
    std::map<uint16_t,uint16_t>::const_iterator * restrict iter
) {
    ++*iter;
}

/*
function done(iter::Main.StdMaps.StdMapIterator{UInt16, UInt16}, map::Main.StdMaps.StdMap{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_iterator_done", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Ptr{Nothing}), iter, map)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_map_uint16_t_uint16_t_iterator_done(
    const std::map<uint16_t,uint16_t>::const_iterator * restrict iter,
    const std::map<uint16_t,uint16_t> * restrict map
) {
    return *iter == map->cend();
}

/*
function Base.getindex(iter::Main.StdMaps.StdMapIterator{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_iterator_getindex", "/Users/eschnett/.julia/artifacts/470c6d87110790e03fd3aeeb5bccdf4fd5dcfb09/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), iter)
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint16_t_uint16_t_iterator_getindex(
    const std::map<uint16_t,uint16_t>::const_iterator * restrict iter
) {
    return (*iter)->second;
}


