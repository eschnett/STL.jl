#include <complex>
#include <cstddef>
#include <cstdint>
#include <map>


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt64}(res)::Main.StdMaps.StdMap{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t,uint64_t> * std_map_uint64_t_uint64_t_new(
    
) {
    return new std::map<uint64_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt64})
    res = ccall(("std_map_uint64_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint64_t_length(
    const std::map<uint64_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt64}, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint64_t_uint64_t_getindex(
    const std::map<uint64_t,uint64_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_uint64_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint64_t_setindex_(
    std::map<uint64_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int8})
    res = ccall(("std_map_uint64_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int8}(res)::Main.StdMaps.StdMap{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t,int8_t> * std_map_uint64_t_int8_t_new(
    
) {
    return new std::map<uint64_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int8})
    res = ccall(("std_map_uint64_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int8_t_length(
    const std::map<uint64_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int8}, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint64_t_int8_t_getindex(
    const std::map<uint64_t,int8_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_uint64_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int8_t_setindex_(
    std::map<uint64_t,int8_t> * restrict map,
    const int8_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int16})
    res = ccall(("std_map_uint64_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int16}(res)::Main.StdMaps.StdMap{UInt64, Int16}
end
*/
extern "C" std::map<uint64_t,int16_t> * std_map_uint64_t_int16_t_new(
    
) {
    return new std::map<uint64_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int16})
    res = ccall(("std_map_uint64_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int16_t_length(
    const std::map<uint64_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int16}, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint64_t_int16_t_getindex(
    const std::map<uint64_t,int16_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_uint64_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int16_t_setindex_(
    std::map<uint64_t,int16_t> * restrict map,
    const int16_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int64})
    res = ccall(("std_map_uint64_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int64}(res)::Main.StdMaps.StdMap{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t,int64_t> * std_map_uint64_t_int64_t_new(
    
) {
    return new std::map<uint64_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int64})
    res = ccall(("std_map_uint64_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int64_t_length(
    const std::map<uint64_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int64}, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint64_t_int64_t_getindex(
    const std::map<uint64_t,int64_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_uint64_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int64_t_setindex_(
    std::map<uint64_t,int64_t> * restrict map,
    const int64_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt32}(res)::Main.StdMaps.StdMap{UInt64, UInt32}
end
*/
extern "C" std::map<uint64_t,uint32_t> * std_map_uint64_t_uint32_t_new(
    
) {
    return new std::map<uint64_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt32})
    res = ccall(("std_map_uint64_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint32_t_length(
    const std::map<uint64_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt32}, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint64_t_uint32_t_getindex(
    const std::map<uint64_t,uint32_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_uint64_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint32_t_setindex_(
    std::map<uint64_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Float32})
    res = ccall(("std_map_uint64_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Float32}(res)::Main.StdMaps.StdMap{UInt64, Float32}
end
*/
extern "C" std::map<uint64_t,float> * std_map_uint64_t_float_new(
    
) {
    return new std::map<uint64_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Float32})
    res = ccall(("std_map_uint64_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_float_length(
    const std::map<uint64_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Float32}, key::Any)
    res = ccall(("std_map_uint64_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_uint64_t_float_getindex(
    const std::map<uint64_t,float> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_uint64_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_float_setindex_(
    std::map<uint64_t,float> * restrict map,
    const float& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Int32})
    res = ccall(("std_map_uint64_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Int32}(res)::Main.StdMaps.StdMap{UInt64, Int32}
end
*/
extern "C" std::map<uint64_t,int32_t> * std_map_uint64_t_int32_t_new(
    
) {
    return new std::map<uint64_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Int32})
    res = ccall(("std_map_uint64_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_int32_t_length(
    const std::map<uint64_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Int32}, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint64_t_int32_t_getindex(
    const std::map<uint64_t,int32_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_uint64_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_int32_t_setindex_(
    std::map<uint64_t,int32_t> * restrict map,
    const int32_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{Float64})
    res = ccall(("std_map_uint64_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, Float64}(res)::Main.StdMaps.StdMap{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t,double> * std_map_uint64_t_double_new(
    
) {
    return new std::map<uint64_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, Float64})
    res = ccall(("std_map_uint64_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_double_length(
    const std::map<uint64_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, Float64}, key::Any)
    res = ccall(("std_map_uint64_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_uint64_t_double_getindex(
    const std::map<uint64_t,double> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_uint64_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_double_setindex_(
    std::map<uint64_t,double> * restrict map,
    const double& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt8}(res)::Main.StdMaps.StdMap{UInt64, UInt8}
end
*/
extern "C" std::map<uint64_t,uint8_t> * std_map_uint64_t_uint8_t_new(
    
) {
    return new std::map<uint64_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt8})
    res = ccall(("std_map_uint64_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint8_t_length(
    const std::map<uint64_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt8}, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint64_t_uint8_t_getindex(
    const std::map<uint64_t,uint8_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_uint64_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint8_t_setindex_(
    std::map<uint64_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt64, UInt16}(res)::Main.StdMaps.StdMap{UInt64, UInt16}
end
*/
extern "C" std::map<uint64_t,uint16_t> * std_map_uint64_t_uint16_t_new(
    
) {
    return new std::map<uint64_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt64, UInt16})
    res = ccall(("std_map_uint64_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint64_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint64_t_uint16_t_length(
    const std::map<uint64_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt64, UInt16}, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt64), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint64_t_uint16_t_getindex(
    const std::map<uint64_t,uint16_t> * restrict map,
    const uint64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt64, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_uint64_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint64_t_uint16_t_setindex_(
    std::map<uint64_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const uint64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt64})
    res = ccall(("std_map_int8_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt64}(res)::Main.StdMaps.StdMap{Int8, UInt64}
end
*/
extern "C" std::map<int8_t,uint64_t> * std_map_int8_t_uint64_t_new(
    
) {
    return new std::map<int8_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt64})
    res = ccall(("std_map_int8_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint64_t_length(
    const std::map<int8_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt64}, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int8_t_uint64_t_getindex(
    const std::map<int8_t,uint64_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_int8_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint64_t_setindex_(
    std::map<int8_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int8})
    res = ccall(("std_map_int8_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int8}(res)::Main.StdMaps.StdMap{Int8, Int8}
end
*/
extern "C" std::map<int8_t,int8_t> * std_map_int8_t_int8_t_new(
    
) {
    return new std::map<int8_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int8})
    res = ccall(("std_map_int8_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int8_t_length(
    const std::map<int8_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int8}, key::Any)
    res = ccall(("std_map_int8_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int8_t_int8_t_getindex(
    const std::map<int8_t,int8_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_int8_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int8_t_setindex_(
    std::map<int8_t,int8_t> * restrict map,
    const int8_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int16})
    res = ccall(("std_map_int8_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int16}(res)::Main.StdMaps.StdMap{Int8, Int16}
end
*/
extern "C" std::map<int8_t,int16_t> * std_map_int8_t_int16_t_new(
    
) {
    return new std::map<int8_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int16})
    res = ccall(("std_map_int8_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int16_t_length(
    const std::map<int8_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int16}, key::Any)
    res = ccall(("std_map_int8_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int8_t_int16_t_getindex(
    const std::map<int8_t,int16_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_int8_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int16_t_setindex_(
    std::map<int8_t,int16_t> * restrict map,
    const int16_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int64})
    res = ccall(("std_map_int8_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int64}(res)::Main.StdMaps.StdMap{Int8, Int64}
end
*/
extern "C" std::map<int8_t,int64_t> * std_map_int8_t_int64_t_new(
    
) {
    return new std::map<int8_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int64})
    res = ccall(("std_map_int8_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int64_t_length(
    const std::map<int8_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int64}, key::Any)
    res = ccall(("std_map_int8_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int8_t_int64_t_getindex(
    const std::map<int8_t,int64_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_int8_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int64_t_setindex_(
    std::map<int8_t,int64_t> * restrict map,
    const int64_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt32})
    res = ccall(("std_map_int8_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt32}(res)::Main.StdMaps.StdMap{Int8, UInt32}
end
*/
extern "C" std::map<int8_t,uint32_t> * std_map_int8_t_uint32_t_new(
    
) {
    return new std::map<int8_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt32})
    res = ccall(("std_map_int8_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint32_t_length(
    const std::map<int8_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt32}, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int8_t_uint32_t_getindex(
    const std::map<int8_t,uint32_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_int8_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint32_t_setindex_(
    std::map<int8_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Float32})
    res = ccall(("std_map_int8_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Float32}(res)::Main.StdMaps.StdMap{Int8, Float32}
end
*/
extern "C" std::map<int8_t,float> * std_map_int8_t_float_new(
    
) {
    return new std::map<int8_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Float32})
    res = ccall(("std_map_int8_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_float_length(
    const std::map<int8_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Float32}, key::Any)
    res = ccall(("std_map_int8_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_int8_t_float_getindex(
    const std::map<int8_t,float> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_int8_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_float_setindex_(
    std::map<int8_t,float> * restrict map,
    const float& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Int32})
    res = ccall(("std_map_int8_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Int32}(res)::Main.StdMaps.StdMap{Int8, Int32}
end
*/
extern "C" std::map<int8_t,int32_t> * std_map_int8_t_int32_t_new(
    
) {
    return new std::map<int8_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Int32})
    res = ccall(("std_map_int8_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_int32_t_length(
    const std::map<int8_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Int32}, key::Any)
    res = ccall(("std_map_int8_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int8_t_int32_t_getindex(
    const std::map<int8_t,int32_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_int8_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_int32_t_setindex_(
    std::map<int8_t,int32_t> * restrict map,
    const int32_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{Float64})
    res = ccall(("std_map_int8_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, Float64}(res)::Main.StdMaps.StdMap{Int8, Float64}
end
*/
extern "C" std::map<int8_t,double> * std_map_int8_t_double_new(
    
) {
    return new std::map<int8_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, Float64})
    res = ccall(("std_map_int8_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_double_length(
    const std::map<int8_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, Float64}, key::Any)
    res = ccall(("std_map_int8_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_int8_t_double_getindex(
    const std::map<int8_t,double> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_int8_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_double_setindex_(
    std::map<int8_t,double> * restrict map,
    const double& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt8})
    res = ccall(("std_map_int8_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt8}(res)::Main.StdMaps.StdMap{Int8, UInt8}
end
*/
extern "C" std::map<int8_t,uint8_t> * std_map_int8_t_uint8_t_new(
    
) {
    return new std::map<int8_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt8})
    res = ccall(("std_map_int8_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint8_t_length(
    const std::map<int8_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt8}, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int8_t_uint8_t_getindex(
    const std::map<int8_t,uint8_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_int8_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint8_t_setindex_(
    std::map<int8_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int8}, type::Type{UInt16})
    res = ccall(("std_map_int8_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int8, UInt16}(res)::Main.StdMaps.StdMap{Int8, UInt16}
end
*/
extern "C" std::map<int8_t,uint16_t> * std_map_int8_t_uint16_t_new(
    
) {
    return new std::map<int8_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int8, UInt16})
    res = ccall(("std_map_int8_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int8_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int8_t_uint16_t_length(
    const std::map<int8_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int8, UInt16}, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int8), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int8_t_uint16_t_getindex(
    const std::map<int8_t,uint16_t> * restrict map,
    const int8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int8, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_int8_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int8_t_uint16_t_setindex_(
    std::map<int8_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const int8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt64})
    res = ccall(("std_map_int16_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt64}(res)::Main.StdMaps.StdMap{Int16, UInt64}
end
*/
extern "C" std::map<int16_t,uint64_t> * std_map_int16_t_uint64_t_new(
    
) {
    return new std::map<int16_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt64})
    res = ccall(("std_map_int16_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint64_t_length(
    const std::map<int16_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt64}, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int16_t_uint64_t_getindex(
    const std::map<int16_t,uint64_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_int16_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint64_t_setindex_(
    std::map<int16_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int8})
    res = ccall(("std_map_int16_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int8}(res)::Main.StdMaps.StdMap{Int16, Int8}
end
*/
extern "C" std::map<int16_t,int8_t> * std_map_int16_t_int8_t_new(
    
) {
    return new std::map<int16_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int8})
    res = ccall(("std_map_int16_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int8_t_length(
    const std::map<int16_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int8}, key::Any)
    res = ccall(("std_map_int16_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int16_t_int8_t_getindex(
    const std::map<int16_t,int8_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_int16_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int8_t_setindex_(
    std::map<int16_t,int8_t> * restrict map,
    const int8_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int16})
    res = ccall(("std_map_int16_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int16}(res)::Main.StdMaps.StdMap{Int16, Int16}
end
*/
extern "C" std::map<int16_t,int16_t> * std_map_int16_t_int16_t_new(
    
) {
    return new std::map<int16_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int16})
    res = ccall(("std_map_int16_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int16_t_length(
    const std::map<int16_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int16}, key::Any)
    res = ccall(("std_map_int16_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int16_t_int16_t_getindex(
    const std::map<int16_t,int16_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_int16_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int16_t_setindex_(
    std::map<int16_t,int16_t> * restrict map,
    const int16_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int64})
    res = ccall(("std_map_int16_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int64}(res)::Main.StdMaps.StdMap{Int16, Int64}
end
*/
extern "C" std::map<int16_t,int64_t> * std_map_int16_t_int64_t_new(
    
) {
    return new std::map<int16_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int64})
    res = ccall(("std_map_int16_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int64_t_length(
    const std::map<int16_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int64}, key::Any)
    res = ccall(("std_map_int16_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int16_t_int64_t_getindex(
    const std::map<int16_t,int64_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_int16_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int64_t_setindex_(
    std::map<int16_t,int64_t> * restrict map,
    const int64_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt32})
    res = ccall(("std_map_int16_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt32}(res)::Main.StdMaps.StdMap{Int16, UInt32}
end
*/
extern "C" std::map<int16_t,uint32_t> * std_map_int16_t_uint32_t_new(
    
) {
    return new std::map<int16_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt32})
    res = ccall(("std_map_int16_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint32_t_length(
    const std::map<int16_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt32}, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int16_t_uint32_t_getindex(
    const std::map<int16_t,uint32_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_int16_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint32_t_setindex_(
    std::map<int16_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Float32})
    res = ccall(("std_map_int16_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Float32}(res)::Main.StdMaps.StdMap{Int16, Float32}
end
*/
extern "C" std::map<int16_t,float> * std_map_int16_t_float_new(
    
) {
    return new std::map<int16_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Float32})
    res = ccall(("std_map_int16_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_float_length(
    const std::map<int16_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Float32}, key::Any)
    res = ccall(("std_map_int16_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_int16_t_float_getindex(
    const std::map<int16_t,float> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_int16_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_float_setindex_(
    std::map<int16_t,float> * restrict map,
    const float& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Int32})
    res = ccall(("std_map_int16_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Int32}(res)::Main.StdMaps.StdMap{Int16, Int32}
end
*/
extern "C" std::map<int16_t,int32_t> * std_map_int16_t_int32_t_new(
    
) {
    return new std::map<int16_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Int32})
    res = ccall(("std_map_int16_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_int32_t_length(
    const std::map<int16_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Int32}, key::Any)
    res = ccall(("std_map_int16_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int16_t_int32_t_getindex(
    const std::map<int16_t,int32_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_int16_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_int32_t_setindex_(
    std::map<int16_t,int32_t> * restrict map,
    const int32_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{Float64})
    res = ccall(("std_map_int16_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, Float64}(res)::Main.StdMaps.StdMap{Int16, Float64}
end
*/
extern "C" std::map<int16_t,double> * std_map_int16_t_double_new(
    
) {
    return new std::map<int16_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, Float64})
    res = ccall(("std_map_int16_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_double_length(
    const std::map<int16_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, Float64}, key::Any)
    res = ccall(("std_map_int16_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_int16_t_double_getindex(
    const std::map<int16_t,double> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_int16_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_double_setindex_(
    std::map<int16_t,double> * restrict map,
    const double& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt8})
    res = ccall(("std_map_int16_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt8}(res)::Main.StdMaps.StdMap{Int16, UInt8}
end
*/
extern "C" std::map<int16_t,uint8_t> * std_map_int16_t_uint8_t_new(
    
) {
    return new std::map<int16_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt8})
    res = ccall(("std_map_int16_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint8_t_length(
    const std::map<int16_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt8}, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int16_t_uint8_t_getindex(
    const std::map<int16_t,uint8_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_int16_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint8_t_setindex_(
    std::map<int16_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int16}, type::Type{UInt16})
    res = ccall(("std_map_int16_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int16, UInt16}(res)::Main.StdMaps.StdMap{Int16, UInt16}
end
*/
extern "C" std::map<int16_t,uint16_t> * std_map_int16_t_uint16_t_new(
    
) {
    return new std::map<int16_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int16, UInt16})
    res = ccall(("std_map_int16_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int16_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int16_t_uint16_t_length(
    const std::map<int16_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int16, UInt16}, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int16), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int16_t_uint16_t_getindex(
    const std::map<int16_t,uint16_t> * restrict map,
    const int16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int16, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_int16_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int16_t_uint16_t_setindex_(
    std::map<int16_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const int16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt64})
    res = ccall(("std_map_int64_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt64}(res)::Main.StdMaps.StdMap{Int64, UInt64}
end
*/
extern "C" std::map<int64_t,uint64_t> * std_map_int64_t_uint64_t_new(
    
) {
    return new std::map<int64_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt64})
    res = ccall(("std_map_int64_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint64_t_length(
    const std::map<int64_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt64}, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int64_t_uint64_t_getindex(
    const std::map<int64_t,uint64_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_int64_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint64_t_setindex_(
    std::map<int64_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int8})
    res = ccall(("std_map_int64_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int8}(res)::Main.StdMaps.StdMap{Int64, Int8}
end
*/
extern "C" std::map<int64_t,int8_t> * std_map_int64_t_int8_t_new(
    
) {
    return new std::map<int64_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int8})
    res = ccall(("std_map_int64_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int8_t_length(
    const std::map<int64_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int8}, key::Any)
    res = ccall(("std_map_int64_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int64_t_int8_t_getindex(
    const std::map<int64_t,int8_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_int64_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int8_t_setindex_(
    std::map<int64_t,int8_t> * restrict map,
    const int8_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int16})
    res = ccall(("std_map_int64_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int16}(res)::Main.StdMaps.StdMap{Int64, Int16}
end
*/
extern "C" std::map<int64_t,int16_t> * std_map_int64_t_int16_t_new(
    
) {
    return new std::map<int64_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int16})
    res = ccall(("std_map_int64_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int16_t_length(
    const std::map<int64_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int16}, key::Any)
    res = ccall(("std_map_int64_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int64_t_int16_t_getindex(
    const std::map<int64_t,int16_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_int64_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int16_t_setindex_(
    std::map<int64_t,int16_t> * restrict map,
    const int16_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int64})
    res = ccall(("std_map_int64_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int64}(res)::Main.StdMaps.StdMap{Int64, Int64}
end
*/
extern "C" std::map<int64_t,int64_t> * std_map_int64_t_int64_t_new(
    
) {
    return new std::map<int64_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int64})
    res = ccall(("std_map_int64_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int64_t_length(
    const std::map<int64_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int64}, key::Any)
    res = ccall(("std_map_int64_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int64_t_int64_t_getindex(
    const std::map<int64_t,int64_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_int64_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int64_t_setindex_(
    std::map<int64_t,int64_t> * restrict map,
    const int64_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt32})
    res = ccall(("std_map_int64_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt32}(res)::Main.StdMaps.StdMap{Int64, UInt32}
end
*/
extern "C" std::map<int64_t,uint32_t> * std_map_int64_t_uint32_t_new(
    
) {
    return new std::map<int64_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt32})
    res = ccall(("std_map_int64_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint32_t_length(
    const std::map<int64_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt32}, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int64_t_uint32_t_getindex(
    const std::map<int64_t,uint32_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_int64_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint32_t_setindex_(
    std::map<int64_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Float32})
    res = ccall(("std_map_int64_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Float32}(res)::Main.StdMaps.StdMap{Int64, Float32}
end
*/
extern "C" std::map<int64_t,float> * std_map_int64_t_float_new(
    
) {
    return new std::map<int64_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Float32})
    res = ccall(("std_map_int64_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_float_length(
    const std::map<int64_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Float32}, key::Any)
    res = ccall(("std_map_int64_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_int64_t_float_getindex(
    const std::map<int64_t,float> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_int64_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_float_setindex_(
    std::map<int64_t,float> * restrict map,
    const float& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Int32})
    res = ccall(("std_map_int64_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Int32}(res)::Main.StdMaps.StdMap{Int64, Int32}
end
*/
extern "C" std::map<int64_t,int32_t> * std_map_int64_t_int32_t_new(
    
) {
    return new std::map<int64_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Int32})
    res = ccall(("std_map_int64_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_int32_t_length(
    const std::map<int64_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Int32}, key::Any)
    res = ccall(("std_map_int64_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int64_t_int32_t_getindex(
    const std::map<int64_t,int32_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_int64_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_int32_t_setindex_(
    std::map<int64_t,int32_t> * restrict map,
    const int32_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{Float64})
    res = ccall(("std_map_int64_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, Float64}(res)::Main.StdMaps.StdMap{Int64, Float64}
end
*/
extern "C" std::map<int64_t,double> * std_map_int64_t_double_new(
    
) {
    return new std::map<int64_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, Float64})
    res = ccall(("std_map_int64_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_double_length(
    const std::map<int64_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, Float64}, key::Any)
    res = ccall(("std_map_int64_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_int64_t_double_getindex(
    const std::map<int64_t,double> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_int64_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_double_setindex_(
    std::map<int64_t,double> * restrict map,
    const double& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt8})
    res = ccall(("std_map_int64_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt8}(res)::Main.StdMaps.StdMap{Int64, UInt8}
end
*/
extern "C" std::map<int64_t,uint8_t> * std_map_int64_t_uint8_t_new(
    
) {
    return new std::map<int64_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt8})
    res = ccall(("std_map_int64_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint8_t_length(
    const std::map<int64_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt8}, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int64_t_uint8_t_getindex(
    const std::map<int64_t,uint8_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_int64_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint8_t_setindex_(
    std::map<int64_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int64}, type::Type{UInt16})
    res = ccall(("std_map_int64_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int64, UInt16}(res)::Main.StdMaps.StdMap{Int64, UInt16}
end
*/
extern "C" std::map<int64_t,uint16_t> * std_map_int64_t_uint16_t_new(
    
) {
    return new std::map<int64_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int64, UInt16})
    res = ccall(("std_map_int64_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int64_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int64_t_uint16_t_length(
    const std::map<int64_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int64, UInt16}, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int64), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int64_t_uint16_t_getindex(
    const std::map<int64_t,uint16_t> * restrict map,
    const int64_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int64, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_int64_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int64_t_uint16_t_setindex_(
    std::map<int64_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const int64_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt64}(res)::Main.StdMaps.StdMap{UInt32, UInt64}
end
*/
extern "C" std::map<uint32_t,uint64_t> * std_map_uint32_t_uint64_t_new(
    
) {
    return new std::map<uint32_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt64})
    res = ccall(("std_map_uint32_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint64_t_length(
    const std::map<uint32_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt64}, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint32_t_uint64_t_getindex(
    const std::map<uint32_t,uint64_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_uint32_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint64_t_setindex_(
    std::map<uint32_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int8})
    res = ccall(("std_map_uint32_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int8}(res)::Main.StdMaps.StdMap{UInt32, Int8}
end
*/
extern "C" std::map<uint32_t,int8_t> * std_map_uint32_t_int8_t_new(
    
) {
    return new std::map<uint32_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int8})
    res = ccall(("std_map_uint32_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int8_t_length(
    const std::map<uint32_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int8}, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint32_t_int8_t_getindex(
    const std::map<uint32_t,int8_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_uint32_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int8_t_setindex_(
    std::map<uint32_t,int8_t> * restrict map,
    const int8_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int16})
    res = ccall(("std_map_uint32_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int16}(res)::Main.StdMaps.StdMap{UInt32, Int16}
end
*/
extern "C" std::map<uint32_t,int16_t> * std_map_uint32_t_int16_t_new(
    
) {
    return new std::map<uint32_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int16})
    res = ccall(("std_map_uint32_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int16_t_length(
    const std::map<uint32_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int16}, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint32_t_int16_t_getindex(
    const std::map<uint32_t,int16_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_uint32_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int16_t_setindex_(
    std::map<uint32_t,int16_t> * restrict map,
    const int16_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int64})
    res = ccall(("std_map_uint32_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int64}(res)::Main.StdMaps.StdMap{UInt32, Int64}
end
*/
extern "C" std::map<uint32_t,int64_t> * std_map_uint32_t_int64_t_new(
    
) {
    return new std::map<uint32_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int64})
    res = ccall(("std_map_uint32_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int64_t_length(
    const std::map<uint32_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int64}, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint32_t_int64_t_getindex(
    const std::map<uint32_t,int64_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_uint32_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int64_t_setindex_(
    std::map<uint32_t,int64_t> * restrict map,
    const int64_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt32}(res)::Main.StdMaps.StdMap{UInt32, UInt32}
end
*/
extern "C" std::map<uint32_t,uint32_t> * std_map_uint32_t_uint32_t_new(
    
) {
    return new std::map<uint32_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt32})
    res = ccall(("std_map_uint32_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint32_t_length(
    const std::map<uint32_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt32}, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint32_t_uint32_t_getindex(
    const std::map<uint32_t,uint32_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_uint32_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint32_t_setindex_(
    std::map<uint32_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Float32})
    res = ccall(("std_map_uint32_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Float32}(res)::Main.StdMaps.StdMap{UInt32, Float32}
end
*/
extern "C" std::map<uint32_t,float> * std_map_uint32_t_float_new(
    
) {
    return new std::map<uint32_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Float32})
    res = ccall(("std_map_uint32_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_float_length(
    const std::map<uint32_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Float32}, key::Any)
    res = ccall(("std_map_uint32_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_uint32_t_float_getindex(
    const std::map<uint32_t,float> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_uint32_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_float_setindex_(
    std::map<uint32_t,float> * restrict map,
    const float& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Int32})
    res = ccall(("std_map_uint32_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Int32}(res)::Main.StdMaps.StdMap{UInt32, Int32}
end
*/
extern "C" std::map<uint32_t,int32_t> * std_map_uint32_t_int32_t_new(
    
) {
    return new std::map<uint32_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Int32})
    res = ccall(("std_map_uint32_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_int32_t_length(
    const std::map<uint32_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Int32}, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint32_t_int32_t_getindex(
    const std::map<uint32_t,int32_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_uint32_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_int32_t_setindex_(
    std::map<uint32_t,int32_t> * restrict map,
    const int32_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{Float64})
    res = ccall(("std_map_uint32_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, Float64}(res)::Main.StdMaps.StdMap{UInt32, Float64}
end
*/
extern "C" std::map<uint32_t,double> * std_map_uint32_t_double_new(
    
) {
    return new std::map<uint32_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, Float64})
    res = ccall(("std_map_uint32_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_double_length(
    const std::map<uint32_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, Float64}, key::Any)
    res = ccall(("std_map_uint32_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_uint32_t_double_getindex(
    const std::map<uint32_t,double> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_uint32_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_double_setindex_(
    std::map<uint32_t,double> * restrict map,
    const double& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt8}(res)::Main.StdMaps.StdMap{UInt32, UInt8}
end
*/
extern "C" std::map<uint32_t,uint8_t> * std_map_uint32_t_uint8_t_new(
    
) {
    return new std::map<uint32_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt8})
    res = ccall(("std_map_uint32_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint8_t_length(
    const std::map<uint32_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt8}, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint32_t_uint8_t_getindex(
    const std::map<uint32_t,uint8_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_uint32_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint8_t_setindex_(
    std::map<uint32_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt32, UInt16}(res)::Main.StdMaps.StdMap{UInt32, UInt16}
end
*/
extern "C" std::map<uint32_t,uint16_t> * std_map_uint32_t_uint16_t_new(
    
) {
    return new std::map<uint32_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt32, UInt16})
    res = ccall(("std_map_uint32_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint32_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint32_t_uint16_t_length(
    const std::map<uint32_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt32, UInt16}, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt32), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint32_t_uint16_t_getindex(
    const std::map<uint32_t,uint16_t> * restrict map,
    const uint32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt32, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_uint32_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint32_t_uint16_t_setindex_(
    std::map<uint32_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const uint32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt64})
    res = ccall(("std_map_float_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt64}(res)::Main.StdMaps.StdMap{Float32, UInt64}
end
*/
extern "C" std::map<float,uint64_t> * std_map_float_uint64_t_new(
    
) {
    return new std::map<float,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt64})
    res = ccall(("std_map_float_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint64_t_length(
    const std::map<float,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt64}, key::Any)
    res = ccall(("std_map_float_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_float_uint64_t_getindex(
    const std::map<float,uint64_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_float_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint64_t_setindex_(
    std::map<float,uint64_t> * restrict map,
    const uint64_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int8})
    res = ccall(("std_map_float_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int8}(res)::Main.StdMaps.StdMap{Float32, Int8}
end
*/
extern "C" std::map<float,int8_t> * std_map_float_int8_t_new(
    
) {
    return new std::map<float,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int8})
    res = ccall(("std_map_float_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int8_t_length(
    const std::map<float,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int8}, key::Any)
    res = ccall(("std_map_float_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_float_int8_t_getindex(
    const std::map<float,int8_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_float_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int8_t_setindex_(
    std::map<float,int8_t> * restrict map,
    const int8_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int16})
    res = ccall(("std_map_float_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int16}(res)::Main.StdMaps.StdMap{Float32, Int16}
end
*/
extern "C" std::map<float,int16_t> * std_map_float_int16_t_new(
    
) {
    return new std::map<float,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int16})
    res = ccall(("std_map_float_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int16_t_length(
    const std::map<float,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int16}, key::Any)
    res = ccall(("std_map_float_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_float_int16_t_getindex(
    const std::map<float,int16_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_float_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int16_t_setindex_(
    std::map<float,int16_t> * restrict map,
    const int16_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int64})
    res = ccall(("std_map_float_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int64}(res)::Main.StdMaps.StdMap{Float32, Int64}
end
*/
extern "C" std::map<float,int64_t> * std_map_float_int64_t_new(
    
) {
    return new std::map<float,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int64})
    res = ccall(("std_map_float_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int64_t_length(
    const std::map<float,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int64}, key::Any)
    res = ccall(("std_map_float_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_float_int64_t_getindex(
    const std::map<float,int64_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_float_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int64_t_setindex_(
    std::map<float,int64_t> * restrict map,
    const int64_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt32})
    res = ccall(("std_map_float_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt32}(res)::Main.StdMaps.StdMap{Float32, UInt32}
end
*/
extern "C" std::map<float,uint32_t> * std_map_float_uint32_t_new(
    
) {
    return new std::map<float,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt32})
    res = ccall(("std_map_float_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint32_t_length(
    const std::map<float,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt32}, key::Any)
    res = ccall(("std_map_float_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_float_uint32_t_getindex(
    const std::map<float,uint32_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_float_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint32_t_setindex_(
    std::map<float,uint32_t> * restrict map,
    const uint32_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Float32})
    res = ccall(("std_map_float_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Float32}(res)::Main.StdMaps.StdMap{Float32, Float32}
end
*/
extern "C" std::map<float,float> * std_map_float_float_new(
    
) {
    return new std::map<float,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Float32})
    res = ccall(("std_map_float_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_float_length(
    const std::map<float,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Float32}, key::Any)
    res = ccall(("std_map_float_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_float_float_getindex(
    const std::map<float,float> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_float_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_float_setindex_(
    std::map<float,float> * restrict map,
    const float& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Int32})
    res = ccall(("std_map_float_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Int32}(res)::Main.StdMaps.StdMap{Float32, Int32}
end
*/
extern "C" std::map<float,int32_t> * std_map_float_int32_t_new(
    
) {
    return new std::map<float,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Int32})
    res = ccall(("std_map_float_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_int32_t_length(
    const std::map<float,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Int32}, key::Any)
    res = ccall(("std_map_float_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_float_int32_t_getindex(
    const std::map<float,int32_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_float_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_int32_t_setindex_(
    std::map<float,int32_t> * restrict map,
    const int32_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{Float64})
    res = ccall(("std_map_float_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, Float64}(res)::Main.StdMaps.StdMap{Float32, Float64}
end
*/
extern "C" std::map<float,double> * std_map_float_double_new(
    
) {
    return new std::map<float,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, Float64})
    res = ccall(("std_map_float_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_double_length(
    const std::map<float,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, Float64}, key::Any)
    res = ccall(("std_map_float_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_float_double_getindex(
    const std::map<float,double> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_float_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_double_setindex_(
    std::map<float,double> * restrict map,
    const double& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt8})
    res = ccall(("std_map_float_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt8}(res)::Main.StdMaps.StdMap{Float32, UInt8}
end
*/
extern "C" std::map<float,uint8_t> * std_map_float_uint8_t_new(
    
) {
    return new std::map<float,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt8})
    res = ccall(("std_map_float_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint8_t_length(
    const std::map<float,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt8}, key::Any)
    res = ccall(("std_map_float_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_float_uint8_t_getindex(
    const std::map<float,uint8_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_float_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint8_t_setindex_(
    std::map<float,uint8_t> * restrict map,
    const uint8_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float32}, type::Type{UInt16})
    res = ccall(("std_map_float_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float32, UInt16}(res)::Main.StdMaps.StdMap{Float32, UInt16}
end
*/
extern "C" std::map<float,uint16_t> * std_map_float_uint16_t_new(
    
) {
    return new std::map<float,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float32, UInt16})
    res = ccall(("std_map_float_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_float_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_float_uint16_t_length(
    const std::map<float,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float32, UInt16}, key::Any)
    res = ccall(("std_map_float_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Float32), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_float_uint16_t_getindex(
    const std::map<float,uint16_t> * restrict map,
    const float& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float32, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_float_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Float32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_float_uint16_t_setindex_(
    std::map<float,uint16_t> * restrict map,
    const uint16_t& elt,
    const float& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt64})
    res = ccall(("std_map_int32_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt64}(res)::Main.StdMaps.StdMap{Int32, UInt64}
end
*/
extern "C" std::map<int32_t,uint64_t> * std_map_int32_t_uint64_t_new(
    
) {
    return new std::map<int32_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt64})
    res = ccall(("std_map_int32_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint64_t_length(
    const std::map<int32_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt64}, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_int32_t_uint64_t_getindex(
    const std::map<int32_t,uint64_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_int32_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint64_t_setindex_(
    std::map<int32_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int8})
    res = ccall(("std_map_int32_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int8}(res)::Main.StdMaps.StdMap{Int32, Int8}
end
*/
extern "C" std::map<int32_t,int8_t> * std_map_int32_t_int8_t_new(
    
) {
    return new std::map<int32_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int8})
    res = ccall(("std_map_int32_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int8_t_length(
    const std::map<int32_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int8}, key::Any)
    res = ccall(("std_map_int32_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_int32_t_int8_t_getindex(
    const std::map<int32_t,int8_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_int32_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int8_t_setindex_(
    std::map<int32_t,int8_t> * restrict map,
    const int8_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int16})
    res = ccall(("std_map_int32_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int16}(res)::Main.StdMaps.StdMap{Int32, Int16}
end
*/
extern "C" std::map<int32_t,int16_t> * std_map_int32_t_int16_t_new(
    
) {
    return new std::map<int32_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int16})
    res = ccall(("std_map_int32_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int16_t_length(
    const std::map<int32_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int16}, key::Any)
    res = ccall(("std_map_int32_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_int32_t_int16_t_getindex(
    const std::map<int32_t,int16_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_int32_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int16_t_setindex_(
    std::map<int32_t,int16_t> * restrict map,
    const int16_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int64})
    res = ccall(("std_map_int32_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int64}(res)::Main.StdMaps.StdMap{Int32, Int64}
end
*/
extern "C" std::map<int32_t,int64_t> * std_map_int32_t_int64_t_new(
    
) {
    return new std::map<int32_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int64})
    res = ccall(("std_map_int32_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int64_t_length(
    const std::map<int32_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int64}, key::Any)
    res = ccall(("std_map_int32_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_int32_t_int64_t_getindex(
    const std::map<int32_t,int64_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_int32_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int64_t_setindex_(
    std::map<int32_t,int64_t> * restrict map,
    const int64_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt32})
    res = ccall(("std_map_int32_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt32}(res)::Main.StdMaps.StdMap{Int32, UInt32}
end
*/
extern "C" std::map<int32_t,uint32_t> * std_map_int32_t_uint32_t_new(
    
) {
    return new std::map<int32_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt32})
    res = ccall(("std_map_int32_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint32_t_length(
    const std::map<int32_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt32}, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_int32_t_uint32_t_getindex(
    const std::map<int32_t,uint32_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_int32_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint32_t_setindex_(
    std::map<int32_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Float32})
    res = ccall(("std_map_int32_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Float32}(res)::Main.StdMaps.StdMap{Int32, Float32}
end
*/
extern "C" std::map<int32_t,float> * std_map_int32_t_float_new(
    
) {
    return new std::map<int32_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Float32})
    res = ccall(("std_map_int32_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_float_length(
    const std::map<int32_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Float32}, key::Any)
    res = ccall(("std_map_int32_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_int32_t_float_getindex(
    const std::map<int32_t,float> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_int32_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_float_setindex_(
    std::map<int32_t,float> * restrict map,
    const float& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Int32})
    res = ccall(("std_map_int32_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Int32}(res)::Main.StdMaps.StdMap{Int32, Int32}
end
*/
extern "C" std::map<int32_t,int32_t> * std_map_int32_t_int32_t_new(
    
) {
    return new std::map<int32_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Int32})
    res = ccall(("std_map_int32_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_int32_t_length(
    const std::map<int32_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Int32}, key::Any)
    res = ccall(("std_map_int32_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_int32_t_int32_t_getindex(
    const std::map<int32_t,int32_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_int32_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_int32_t_setindex_(
    std::map<int32_t,int32_t> * restrict map,
    const int32_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{Float64})
    res = ccall(("std_map_int32_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, Float64}(res)::Main.StdMaps.StdMap{Int32, Float64}
end
*/
extern "C" std::map<int32_t,double> * std_map_int32_t_double_new(
    
) {
    return new std::map<int32_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, Float64})
    res = ccall(("std_map_int32_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_double_length(
    const std::map<int32_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, Float64}, key::Any)
    res = ccall(("std_map_int32_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_int32_t_double_getindex(
    const std::map<int32_t,double> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_int32_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_double_setindex_(
    std::map<int32_t,double> * restrict map,
    const double& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt8})
    res = ccall(("std_map_int32_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt8}(res)::Main.StdMaps.StdMap{Int32, UInt8}
end
*/
extern "C" std::map<int32_t,uint8_t> * std_map_int32_t_uint8_t_new(
    
) {
    return new std::map<int32_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt8})
    res = ccall(("std_map_int32_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint8_t_length(
    const std::map<int32_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt8}, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_int32_t_uint8_t_getindex(
    const std::map<int32_t,uint8_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_int32_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint8_t_setindex_(
    std::map<int32_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Int32}, type::Type{UInt16})
    res = ccall(("std_map_int32_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Int32, UInt16}(res)::Main.StdMaps.StdMap{Int32, UInt16}
end
*/
extern "C" std::map<int32_t,uint16_t> * std_map_int32_t_uint16_t_new(
    
) {
    return new std::map<int32_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Int32, UInt16})
    res = ccall(("std_map_int32_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_int32_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_int32_t_uint16_t_length(
    const std::map<int32_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Int32, UInt16}, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Int32), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_int32_t_uint16_t_getindex(
    const std::map<int32_t,uint16_t> * restrict map,
    const int32_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Int32, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_int32_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Int32), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_int32_t_uint16_t_setindex_(
    std::map<int32_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const int32_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt64})
    res = ccall(("std_map_double_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt64}(res)::Main.StdMaps.StdMap{Float64, UInt64}
end
*/
extern "C" std::map<double,uint64_t> * std_map_double_uint64_t_new(
    
) {
    return new std::map<double,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt64})
    res = ccall(("std_map_double_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint64_t_length(
    const std::map<double,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt64}, key::Any)
    res = ccall(("std_map_double_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_double_uint64_t_getindex(
    const std::map<double,uint64_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_double_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint64_t_setindex_(
    std::map<double,uint64_t> * restrict map,
    const uint64_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int8})
    res = ccall(("std_map_double_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int8}(res)::Main.StdMaps.StdMap{Float64, Int8}
end
*/
extern "C" std::map<double,int8_t> * std_map_double_int8_t_new(
    
) {
    return new std::map<double,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int8})
    res = ccall(("std_map_double_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int8_t_length(
    const std::map<double,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int8}, key::Any)
    res = ccall(("std_map_double_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_double_int8_t_getindex(
    const std::map<double,int8_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_double_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int8_t_setindex_(
    std::map<double,int8_t> * restrict map,
    const int8_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int16})
    res = ccall(("std_map_double_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int16}(res)::Main.StdMaps.StdMap{Float64, Int16}
end
*/
extern "C" std::map<double,int16_t> * std_map_double_int16_t_new(
    
) {
    return new std::map<double,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int16})
    res = ccall(("std_map_double_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int16_t_length(
    const std::map<double,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int16}, key::Any)
    res = ccall(("std_map_double_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_double_int16_t_getindex(
    const std::map<double,int16_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_double_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int16_t_setindex_(
    std::map<double,int16_t> * restrict map,
    const int16_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int64})
    res = ccall(("std_map_double_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int64}(res)::Main.StdMaps.StdMap{Float64, Int64}
end
*/
extern "C" std::map<double,int64_t> * std_map_double_int64_t_new(
    
) {
    return new std::map<double,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int64})
    res = ccall(("std_map_double_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int64_t_length(
    const std::map<double,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int64}, key::Any)
    res = ccall(("std_map_double_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_double_int64_t_getindex(
    const std::map<double,int64_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_double_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int64_t_setindex_(
    std::map<double,int64_t> * restrict map,
    const int64_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt32})
    res = ccall(("std_map_double_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt32}(res)::Main.StdMaps.StdMap{Float64, UInt32}
end
*/
extern "C" std::map<double,uint32_t> * std_map_double_uint32_t_new(
    
) {
    return new std::map<double,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt32})
    res = ccall(("std_map_double_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint32_t_length(
    const std::map<double,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt32}, key::Any)
    res = ccall(("std_map_double_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_double_uint32_t_getindex(
    const std::map<double,uint32_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_double_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint32_t_setindex_(
    std::map<double,uint32_t> * restrict map,
    const uint32_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Float32})
    res = ccall(("std_map_double_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Float32}(res)::Main.StdMaps.StdMap{Float64, Float32}
end
*/
extern "C" std::map<double,float> * std_map_double_float_new(
    
) {
    return new std::map<double,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Float32})
    res = ccall(("std_map_double_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_float_length(
    const std::map<double,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Float32}, key::Any)
    res = ccall(("std_map_double_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_double_float_getindex(
    const std::map<double,float> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_double_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_float_setindex_(
    std::map<double,float> * restrict map,
    const float& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Int32})
    res = ccall(("std_map_double_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Int32}(res)::Main.StdMaps.StdMap{Float64, Int32}
end
*/
extern "C" std::map<double,int32_t> * std_map_double_int32_t_new(
    
) {
    return new std::map<double,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Int32})
    res = ccall(("std_map_double_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_int32_t_length(
    const std::map<double,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Int32}, key::Any)
    res = ccall(("std_map_double_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_double_int32_t_getindex(
    const std::map<double,int32_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_double_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_int32_t_setindex_(
    std::map<double,int32_t> * restrict map,
    const int32_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{Float64})
    res = ccall(("std_map_double_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, Float64}(res)::Main.StdMaps.StdMap{Float64, Float64}
end
*/
extern "C" std::map<double,double> * std_map_double_double_new(
    
) {
    return new std::map<double,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, Float64})
    res = ccall(("std_map_double_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_double_length(
    const std::map<double,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, Float64}, key::Any)
    res = ccall(("std_map_double_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_double_double_getindex(
    const std::map<double,double> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_double_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_double_setindex_(
    std::map<double,double> * restrict map,
    const double& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt8})
    res = ccall(("std_map_double_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt8}(res)::Main.StdMaps.StdMap{Float64, UInt8}
end
*/
extern "C" std::map<double,uint8_t> * std_map_double_uint8_t_new(
    
) {
    return new std::map<double,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt8})
    res = ccall(("std_map_double_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint8_t_length(
    const std::map<double,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt8}, key::Any)
    res = ccall(("std_map_double_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_double_uint8_t_getindex(
    const std::map<double,uint8_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_double_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint8_t_setindex_(
    std::map<double,uint8_t> * restrict map,
    const uint8_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{Float64}, type::Type{UInt16})
    res = ccall(("std_map_double_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{Float64, UInt16}(res)::Main.StdMaps.StdMap{Float64, UInt16}
end
*/
extern "C" std::map<double,uint16_t> * std_map_double_uint16_t_new(
    
) {
    return new std::map<double,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{Float64, UInt16})
    res = ccall(("std_map_double_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_double_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_double_uint16_t_length(
    const std::map<double,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{Float64, UInt16}, key::Any)
    res = ccall(("std_map_double_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, Float64), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_double_uint16_t_getindex(
    const std::map<double,uint16_t> * restrict map,
    const double& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{Float64, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_double_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, Float64), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_double_uint16_t_setindex_(
    std::map<double,uint16_t> * restrict map,
    const uint16_t& elt,
    const double& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt64}(res)::Main.StdMaps.StdMap{UInt8, UInt64}
end
*/
extern "C" std::map<uint8_t,uint64_t> * std_map_uint8_t_uint64_t_new(
    
) {
    return new std::map<uint8_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt64})
    res = ccall(("std_map_uint8_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint64_t_length(
    const std::map<uint8_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt64}, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint8_t_uint64_t_getindex(
    const std::map<uint8_t,uint64_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_uint8_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint64_t_setindex_(
    std::map<uint8_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int8})
    res = ccall(("std_map_uint8_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int8}(res)::Main.StdMaps.StdMap{UInt8, Int8}
end
*/
extern "C" std::map<uint8_t,int8_t> * std_map_uint8_t_int8_t_new(
    
) {
    return new std::map<uint8_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int8})
    res = ccall(("std_map_uint8_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int8_t_length(
    const std::map<uint8_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int8}, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint8_t_int8_t_getindex(
    const std::map<uint8_t,int8_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_uint8_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int8_t_setindex_(
    std::map<uint8_t,int8_t> * restrict map,
    const int8_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int16})
    res = ccall(("std_map_uint8_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int16}(res)::Main.StdMaps.StdMap{UInt8, Int16}
end
*/
extern "C" std::map<uint8_t,int16_t> * std_map_uint8_t_int16_t_new(
    
) {
    return new std::map<uint8_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int16})
    res = ccall(("std_map_uint8_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int16_t_length(
    const std::map<uint8_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int16}, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint8_t_int16_t_getindex(
    const std::map<uint8_t,int16_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_uint8_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int16_t_setindex_(
    std::map<uint8_t,int16_t> * restrict map,
    const int16_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int64})
    res = ccall(("std_map_uint8_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int64}(res)::Main.StdMaps.StdMap{UInt8, Int64}
end
*/
extern "C" std::map<uint8_t,int64_t> * std_map_uint8_t_int64_t_new(
    
) {
    return new std::map<uint8_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int64})
    res = ccall(("std_map_uint8_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int64_t_length(
    const std::map<uint8_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int64}, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint8_t_int64_t_getindex(
    const std::map<uint8_t,int64_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_uint8_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int64_t_setindex_(
    std::map<uint8_t,int64_t> * restrict map,
    const int64_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt32}(res)::Main.StdMaps.StdMap{UInt8, UInt32}
end
*/
extern "C" std::map<uint8_t,uint32_t> * std_map_uint8_t_uint32_t_new(
    
) {
    return new std::map<uint8_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt32})
    res = ccall(("std_map_uint8_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint32_t_length(
    const std::map<uint8_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt32}, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint8_t_uint32_t_getindex(
    const std::map<uint8_t,uint32_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_uint8_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint32_t_setindex_(
    std::map<uint8_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Float32})
    res = ccall(("std_map_uint8_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Float32}(res)::Main.StdMaps.StdMap{UInt8, Float32}
end
*/
extern "C" std::map<uint8_t,float> * std_map_uint8_t_float_new(
    
) {
    return new std::map<uint8_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Float32})
    res = ccall(("std_map_uint8_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_float_length(
    const std::map<uint8_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Float32}, key::Any)
    res = ccall(("std_map_uint8_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_uint8_t_float_getindex(
    const std::map<uint8_t,float> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_uint8_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_float_setindex_(
    std::map<uint8_t,float> * restrict map,
    const float& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Int32})
    res = ccall(("std_map_uint8_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Int32}(res)::Main.StdMaps.StdMap{UInt8, Int32}
end
*/
extern "C" std::map<uint8_t,int32_t> * std_map_uint8_t_int32_t_new(
    
) {
    return new std::map<uint8_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Int32})
    res = ccall(("std_map_uint8_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_int32_t_length(
    const std::map<uint8_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Int32}, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint8_t_int32_t_getindex(
    const std::map<uint8_t,int32_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_uint8_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_int32_t_setindex_(
    std::map<uint8_t,int32_t> * restrict map,
    const int32_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{Float64})
    res = ccall(("std_map_uint8_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, Float64}(res)::Main.StdMaps.StdMap{UInt8, Float64}
end
*/
extern "C" std::map<uint8_t,double> * std_map_uint8_t_double_new(
    
) {
    return new std::map<uint8_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, Float64})
    res = ccall(("std_map_uint8_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_double_length(
    const std::map<uint8_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, Float64}, key::Any)
    res = ccall(("std_map_uint8_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_uint8_t_double_getindex(
    const std::map<uint8_t,double> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_uint8_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_double_setindex_(
    std::map<uint8_t,double> * restrict map,
    const double& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt8}(res)::Main.StdMaps.StdMap{UInt8, UInt8}
end
*/
extern "C" std::map<uint8_t,uint8_t> * std_map_uint8_t_uint8_t_new(
    
) {
    return new std::map<uint8_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt8})
    res = ccall(("std_map_uint8_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint8_t_length(
    const std::map<uint8_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt8}, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint8_t_uint8_t_getindex(
    const std::map<uint8_t,uint8_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_uint8_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint8_t_setindex_(
    std::map<uint8_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt8, UInt16}(res)::Main.StdMaps.StdMap{UInt8, UInt16}
end
*/
extern "C" std::map<uint8_t,uint16_t> * std_map_uint8_t_uint16_t_new(
    
) {
    return new std::map<uint8_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt8, UInt16})
    res = ccall(("std_map_uint8_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint8_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint8_t_uint16_t_length(
    const std::map<uint8_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt8, UInt16}, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt8), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint8_t_uint16_t_getindex(
    const std::map<uint8_t,uint16_t> * restrict map,
    const uint8_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt8, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_uint8_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt8), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint8_t_uint16_t_setindex_(
    std::map<uint8_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const uint8_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt64}(res)::Main.StdMaps.StdMap{UInt16, UInt64}
end
*/
extern "C" std::map<uint16_t,uint64_t> * std_map_uint16_t_uint64_t_new(
    
) {
    return new std::map<uint16_t,uint64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt64})
    res = ccall(("std_map_uint16_t_uint64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_uint64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint64_t_length(
    const std::map<uint16_t,uint64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt64}, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::UInt64
end
*/
extern "C" uint64_t std_map_uint16_t_uint64_t_getindex(
    const std::map<uint16_t,uint64_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt64}, elt::UInt64, key::Any)
    res = ccall(("std_map_uint16_t_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint64_t_setindex_(
    std::map<uint16_t,uint64_t> * restrict map,
    const uint64_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int8})
    res = ccall(("std_map_uint16_t_int8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int8}(res)::Main.StdMaps.StdMap{UInt16, Int8}
end
*/
extern "C" std::map<uint16_t,int8_t> * std_map_uint16_t_int8_t_new(
    
) {
    return new std::map<uint16_t,int8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int8})
    res = ccall(("std_map_uint16_t_int8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_int8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int8_t_length(
    const std::map<uint16_t,int8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int8}, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Int8
end
*/
extern "C" int8_t std_map_uint16_t_int8_t_getindex(
    const std::map<uint16_t,int8_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int8}, elt::Int8, key::Any)
    res = ccall(("std_map_uint16_t_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int8_t_setindex_(
    std::map<uint16_t,int8_t> * restrict map,
    const int8_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int16})
    res = ccall(("std_map_uint16_t_int16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int16}(res)::Main.StdMaps.StdMap{UInt16, Int16}
end
*/
extern "C" std::map<uint16_t,int16_t> * std_map_uint16_t_int16_t_new(
    
) {
    return new std::map<uint16_t,int16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int16})
    res = ccall(("std_map_uint16_t_int16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_int16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int16_t_length(
    const std::map<uint16_t,int16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int16}, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Int16
end
*/
extern "C" int16_t std_map_uint16_t_int16_t_getindex(
    const std::map<uint16_t,int16_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int16}, elt::Int16, key::Any)
    res = ccall(("std_map_uint16_t_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int16_t_setindex_(
    std::map<uint16_t,int16_t> * restrict map,
    const int16_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int64})
    res = ccall(("std_map_uint16_t_int64_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int64}(res)::Main.StdMaps.StdMap{UInt16, Int64}
end
*/
extern "C" std::map<uint16_t,int64_t> * std_map_uint16_t_int64_t_new(
    
) {
    return new std::map<uint16_t,int64_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int64})
    res = ccall(("std_map_uint16_t_int64_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_int64_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int64_t_length(
    const std::map<uint16_t,int64_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int64}, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Int64
end
*/
extern "C" int64_t std_map_uint16_t_int64_t_getindex(
    const std::map<uint16_t,int64_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int64}, elt::Int64, key::Any)
    res = ccall(("std_map_uint16_t_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int64_t_setindex_(
    std::map<uint16_t,int64_t> * restrict map,
    const int64_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt32}(res)::Main.StdMaps.StdMap{UInt16, UInt32}
end
*/
extern "C" std::map<uint16_t,uint32_t> * std_map_uint16_t_uint32_t_new(
    
) {
    return new std::map<uint16_t,uint32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt32})
    res = ccall(("std_map_uint16_t_uint32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_uint32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint32_t_length(
    const std::map<uint16_t,uint32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt32}, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::UInt32
end
*/
extern "C" uint32_t std_map_uint16_t_uint32_t_getindex(
    const std::map<uint16_t,uint32_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt32}, elt::UInt32, key::Any)
    res = ccall(("std_map_uint16_t_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint32_t_setindex_(
    std::map<uint16_t,uint32_t> * restrict map,
    const uint32_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Float32})
    res = ccall(("std_map_uint16_t_float_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Float32}(res)::Main.StdMaps.StdMap{UInt16, Float32}
end
*/
extern "C" std::map<uint16_t,float> * std_map_uint16_t_float_new(
    
) {
    return new std::map<uint16_t,float>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Float32})
    res = ccall(("std_map_uint16_t_float_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_float_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_float_length(
    const std::map<uint16_t,float> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Float32}, key::Any)
    res = ccall(("std_map_uint16_t_float_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Float32
end
*/
extern "C" float std_map_uint16_t_float_getindex(
    const std::map<uint16_t,float> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Float32}, elt::Float32, key::Any)
    res = ccall(("std_map_uint16_t_float_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_float_setindex_(
    std::map<uint16_t,float> * restrict map,
    const float& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Int32})
    res = ccall(("std_map_uint16_t_int32_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Int32}(res)::Main.StdMaps.StdMap{UInt16, Int32}
end
*/
extern "C" std::map<uint16_t,int32_t> * std_map_uint16_t_int32_t_new(
    
) {
    return new std::map<uint16_t,int32_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Int32})
    res = ccall(("std_map_uint16_t_int32_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_int32_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_int32_t_length(
    const std::map<uint16_t,int32_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Int32}, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Int32
end
*/
extern "C" int32_t std_map_uint16_t_int32_t_getindex(
    const std::map<uint16_t,int32_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Int32}, elt::Int32, key::Any)
    res = ccall(("std_map_uint16_t_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_int32_t_setindex_(
    std::map<uint16_t,int32_t> * restrict map,
    const int32_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{Float64})
    res = ccall(("std_map_uint16_t_double_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, Float64}(res)::Main.StdMaps.StdMap{UInt16, Float64}
end
*/
extern "C" std::map<uint16_t,double> * std_map_uint16_t_double_new(
    
) {
    return new std::map<uint16_t,double>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, Float64})
    res = ccall(("std_map_uint16_t_double_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_double_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_double_length(
    const std::map<uint16_t,double> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, Float64}, key::Any)
    res = ccall(("std_map_uint16_t_double_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::Float64
end
*/
extern "C" double std_map_uint16_t_double_getindex(
    const std::map<uint16_t,double> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, Float64}, elt::Float64, key::Any)
    res = ccall(("std_map_uint16_t_double_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_double_setindex_(
    std::map<uint16_t,double> * restrict map,
    const double& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt8}(res)::Main.StdMaps.StdMap{UInt16, UInt8}
end
*/
extern "C" std::map<uint16_t,uint8_t> * std_map_uint16_t_uint8_t_new(
    
) {
    return new std::map<uint16_t,uint8_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt8})
    res = ccall(("std_map_uint16_t_uint8_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_uint8_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint8_t_length(
    const std::map<uint16_t,uint8_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt8}, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::UInt8
end
*/
extern "C" uint8_t std_map_uint16_t_uint8_t_getindex(
    const std::map<uint16_t,uint8_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt8}, elt::UInt8, key::Any)
    res = ccall(("std_map_uint16_t_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint8_t_setindex_(
    std::map<uint16_t,uint8_t> * restrict map,
    const uint8_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}

/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_new", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdMap{UInt16, UInt16}(res)::Main.StdMaps.StdMap{UInt16, UInt16}
end
*/
extern "C" std::map<uint16_t,uint16_t> * std_map_uint16_t_uint16_t_new(
    
) {
    return new std::map<uint16_t,uint16_t>;
}

/*
function StdMap_delete(map::Main.StdMaps.StdMap{UInt16, UInt16})
    res = ccall(("std_map_uint16_t_uint16_t_delete", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), map)
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
    res = ccall(("std_map_uint16_t_uint16_t_length", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), map)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_map_uint16_t_uint16_t_length(
    const std::map<uint16_t,uint16_t> * restrict map
) {
    return map->size();
}

/*
function Base.getindex(map::Main.StdMaps.StdMap{UInt16, UInt16}, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt16), map, convert(K, key))
    return res::UInt16
end
*/
extern "C" uint16_t std_map_uint16_t_uint16_t_getindex(
    const std::map<uint16_t,uint16_t> * restrict map,
    const uint16_t& key
) {
    return map->at(key);
}

/*
function Base.setindex!(map::Main.StdMaps.StdMap{UInt16, UInt16}, elt::UInt16, key::Any)
    res = ccall(("std_map_uint16_t_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/ec401e00690607d0b9768ee729d32241962bcf75/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt16), map, elt, convert(K, key))
    return res::Nothing
end
*/
extern "C" void std_map_uint16_t_uint16_t_setindex_(
    std::map<uint16_t,uint16_t> * restrict map,
    const uint16_t& elt,
    const uint16_t& key
) {
    (*map)[key] = elt;
}


