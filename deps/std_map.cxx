#include <complex>
#include <cstddef>
#include <cstdint>
#include <map>
#include <tuple>



/*
function StdMap_new(key::Type{Int8}, type::Type{Int8})
    res = ccall("std_map_int8_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Int8}(res)::Main.StdMaps.StdMap{Int8, Int8}
end
*/
extern "C" std::map<int8_t,int8_t> * std_map_int8_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,int8_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{Int16})
    res = ccall("std_map_int8_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Int16}(res)::Main.StdMaps.StdMap{Int8, Int16}
end
*/
extern "C" std::map<int8_t,int16_t> * std_map_int8_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,int16_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{Int64})
    res = ccall("std_map_int8_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Int64}(res)::Main.StdMaps.StdMap{Int8, Int64}
end
*/
extern "C" std::map<int8_t,int64_t> * std_map_int8_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,int64_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{UInt32})
    res = ccall("std_map_int8_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, UInt32}(res)::Main.StdMaps.StdMap{Int8, UInt32}
end
*/
extern "C" std::map<int8_t,uint32_t> * std_map_int8_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,uint32_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{Float64})
    res = ccall("std_map_int8_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Float64}(res)::Main.StdMaps.StdMap{Int8, Float64}
end
*/
extern "C" std::map<int8_t,double> * std_map_int8_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,double>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{Int32})
    res = ccall("std_map_int8_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Int32}(res)::Main.StdMaps.StdMap{Int8, Int32}
end
*/
extern "C" std::map<int8_t,int32_t> * std_map_int8_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,int32_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{ComplexF32})
    res = ccall("std_map_int8_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, ComplexF32}(res)::Main.StdMaps.StdMap{Int8, ComplexF32}
end
*/
extern "C" std::map<int8_t,std::complex<float>> * std_map_int8_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{UInt64})
    res = ccall("std_map_int8_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, UInt64}(res)::Main.StdMaps.StdMap{Int8, UInt64}
end
*/
extern "C" std::map<int8_t,uint64_t> * std_map_int8_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,uint64_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{Float32})
    res = ccall("std_map_int8_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, Float32}(res)::Main.StdMaps.StdMap{Int8, Float32}
end
*/
extern "C" std::map<int8_t,float> * std_map_int8_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,float>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{ComplexF64})
    res = ccall("std_map_int8_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, ComplexF64}(res)::Main.StdMaps.StdMap{Int8, ComplexF64}
end
*/
extern "C" std::map<int8_t,std::complex<double>> * std_map_int8_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{UInt8})
    res = ccall("std_map_int8_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, UInt8}(res)::Main.StdMaps.StdMap{Int8, UInt8}
end
*/
extern "C" std::map<int8_t,uint8_t> * std_map_int8_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,uint8_t>;
}


/*
function StdMap_new(key::Type{Int8}, type::Type{UInt16})
    res = ccall("std_map_int8_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int8, UInt16}(res)::Main.StdMaps.StdMap{Int8, UInt16}
end
*/
extern "C" std::map<int8_t,uint16_t> * std_map_int8_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int8_t,uint16_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Int8})
    res = ccall("std_map_int16_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Int8}(res)::Main.StdMaps.StdMap{Int16, Int8}
end
*/
extern "C" std::map<int16_t,int8_t> * std_map_int16_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,int8_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Int16})
    res = ccall("std_map_int16_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Int16}(res)::Main.StdMaps.StdMap{Int16, Int16}
end
*/
extern "C" std::map<int16_t,int16_t> * std_map_int16_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,int16_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Int64})
    res = ccall("std_map_int16_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Int64}(res)::Main.StdMaps.StdMap{Int16, Int64}
end
*/
extern "C" std::map<int16_t,int64_t> * std_map_int16_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,int64_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{UInt32})
    res = ccall("std_map_int16_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, UInt32}(res)::Main.StdMaps.StdMap{Int16, UInt32}
end
*/
extern "C" std::map<int16_t,uint32_t> * std_map_int16_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,uint32_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Float64})
    res = ccall("std_map_int16_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Float64}(res)::Main.StdMaps.StdMap{Int16, Float64}
end
*/
extern "C" std::map<int16_t,double> * std_map_int16_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,double>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Int32})
    res = ccall("std_map_int16_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Int32}(res)::Main.StdMaps.StdMap{Int16, Int32}
end
*/
extern "C" std::map<int16_t,int32_t> * std_map_int16_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,int32_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{ComplexF32})
    res = ccall("std_map_int16_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, ComplexF32}(res)::Main.StdMaps.StdMap{Int16, ComplexF32}
end
*/
extern "C" std::map<int16_t,std::complex<float>> * std_map_int16_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{UInt64})
    res = ccall("std_map_int16_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, UInt64}(res)::Main.StdMaps.StdMap{Int16, UInt64}
end
*/
extern "C" std::map<int16_t,uint64_t> * std_map_int16_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,uint64_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{Float32})
    res = ccall("std_map_int16_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, Float32}(res)::Main.StdMaps.StdMap{Int16, Float32}
end
*/
extern "C" std::map<int16_t,float> * std_map_int16_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,float>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{ComplexF64})
    res = ccall("std_map_int16_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, ComplexF64}(res)::Main.StdMaps.StdMap{Int16, ComplexF64}
end
*/
extern "C" std::map<int16_t,std::complex<double>> * std_map_int16_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{UInt8})
    res = ccall("std_map_int16_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, UInt8}(res)::Main.StdMaps.StdMap{Int16, UInt8}
end
*/
extern "C" std::map<int16_t,uint8_t> * std_map_int16_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,uint8_t>;
}


/*
function StdMap_new(key::Type{Int16}, type::Type{UInt16})
    res = ccall("std_map_int16_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int16, UInt16}(res)::Main.StdMaps.StdMap{Int16, UInt16}
end
*/
extern "C" std::map<int16_t,uint16_t> * std_map_int16_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int16_t,uint16_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Int8})
    res = ccall("std_map_int64_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Int8}(res)::Main.StdMaps.StdMap{Int64, Int8}
end
*/
extern "C" std::map<int64_t,int8_t> * std_map_int64_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,int8_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Int16})
    res = ccall("std_map_int64_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Int16}(res)::Main.StdMaps.StdMap{Int64, Int16}
end
*/
extern "C" std::map<int64_t,int16_t> * std_map_int64_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,int16_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Int64})
    res = ccall("std_map_int64_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Int64}(res)::Main.StdMaps.StdMap{Int64, Int64}
end
*/
extern "C" std::map<int64_t,int64_t> * std_map_int64_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,int64_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{UInt32})
    res = ccall("std_map_int64_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, UInt32}(res)::Main.StdMaps.StdMap{Int64, UInt32}
end
*/
extern "C" std::map<int64_t,uint32_t> * std_map_int64_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,uint32_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Float64})
    res = ccall("std_map_int64_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Float64}(res)::Main.StdMaps.StdMap{Int64, Float64}
end
*/
extern "C" std::map<int64_t,double> * std_map_int64_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,double>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Int32})
    res = ccall("std_map_int64_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Int32}(res)::Main.StdMaps.StdMap{Int64, Int32}
end
*/
extern "C" std::map<int64_t,int32_t> * std_map_int64_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,int32_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{ComplexF32})
    res = ccall("std_map_int64_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, ComplexF32}(res)::Main.StdMaps.StdMap{Int64, ComplexF32}
end
*/
extern "C" std::map<int64_t,std::complex<float>> * std_map_int64_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{UInt64})
    res = ccall("std_map_int64_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, UInt64}(res)::Main.StdMaps.StdMap{Int64, UInt64}
end
*/
extern "C" std::map<int64_t,uint64_t> * std_map_int64_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,uint64_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{Float32})
    res = ccall("std_map_int64_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, Float32}(res)::Main.StdMaps.StdMap{Int64, Float32}
end
*/
extern "C" std::map<int64_t,float> * std_map_int64_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,float>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{ComplexF64})
    res = ccall("std_map_int64_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, ComplexF64}(res)::Main.StdMaps.StdMap{Int64, ComplexF64}
end
*/
extern "C" std::map<int64_t,std::complex<double>> * std_map_int64_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{UInt8})
    res = ccall("std_map_int64_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, UInt8}(res)::Main.StdMaps.StdMap{Int64, UInt8}
end
*/
extern "C" std::map<int64_t,uint8_t> * std_map_int64_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,uint8_t>;
}


/*
function StdMap_new(key::Type{Int64}, type::Type{UInt16})
    res = ccall("std_map_int64_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int64, UInt16}(res)::Main.StdMaps.StdMap{Int64, UInt16}
end
*/
extern "C" std::map<int64_t,uint16_t> * std_map_int64_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int64_t,uint16_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Int8})
    res = ccall("std_map_uint32_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Int8}(res)::Main.StdMaps.StdMap{UInt32, Int8}
end
*/
extern "C" std::map<uint32_t,int8_t> * std_map_uint32_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,int8_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Int16})
    res = ccall("std_map_uint32_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Int16}(res)::Main.StdMaps.StdMap{UInt32, Int16}
end
*/
extern "C" std::map<uint32_t,int16_t> * std_map_uint32_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,int16_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Int64})
    res = ccall("std_map_uint32_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Int64}(res)::Main.StdMaps.StdMap{UInt32, Int64}
end
*/
extern "C" std::map<uint32_t,int64_t> * std_map_uint32_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,int64_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt32})
    res = ccall("std_map_uint32_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, UInt32}(res)::Main.StdMaps.StdMap{UInt32, UInt32}
end
*/
extern "C" std::map<uint32_t,uint32_t> * std_map_uint32_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,uint32_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Float64})
    res = ccall("std_map_uint32_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Float64}(res)::Main.StdMaps.StdMap{UInt32, Float64}
end
*/
extern "C" std::map<uint32_t,double> * std_map_uint32_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,double>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Int32})
    res = ccall("std_map_uint32_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Int32}(res)::Main.StdMaps.StdMap{UInt32, Int32}
end
*/
extern "C" std::map<uint32_t,int32_t> * std_map_uint32_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,int32_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{ComplexF32})
    res = ccall("std_map_uint32_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, ComplexF32}(res)::Main.StdMaps.StdMap{UInt32, ComplexF32}
end
*/
extern "C" std::map<uint32_t,std::complex<float>> * std_map_uint32_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt64})
    res = ccall("std_map_uint32_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, UInt64}(res)::Main.StdMaps.StdMap{UInt32, UInt64}
end
*/
extern "C" std::map<uint32_t,uint64_t> * std_map_uint32_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,uint64_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{Float32})
    res = ccall("std_map_uint32_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, Float32}(res)::Main.StdMaps.StdMap{UInt32, Float32}
end
*/
extern "C" std::map<uint32_t,float> * std_map_uint32_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,float>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{ComplexF64})
    res = ccall("std_map_uint32_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, ComplexF64}(res)::Main.StdMaps.StdMap{UInt32, ComplexF64}
end
*/
extern "C" std::map<uint32_t,std::complex<double>> * std_map_uint32_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt8})
    res = ccall("std_map_uint32_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, UInt8}(res)::Main.StdMaps.StdMap{UInt32, UInt8}
end
*/
extern "C" std::map<uint32_t,uint8_t> * std_map_uint32_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,uint8_t>;
}


/*
function StdMap_new(key::Type{UInt32}, type::Type{UInt16})
    res = ccall("std_map_uint32_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt32, UInt16}(res)::Main.StdMaps.StdMap{UInt32, UInt16}
end
*/
extern "C" std::map<uint32_t,uint16_t> * std_map_uint32_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint32_t,uint16_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Int8})
    res = ccall("std_map_double_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Int8}(res)::Main.StdMaps.StdMap{Float64, Int8}
end
*/
extern "C" std::map<double,int8_t> * std_map_double_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,int8_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Int16})
    res = ccall("std_map_double_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Int16}(res)::Main.StdMaps.StdMap{Float64, Int16}
end
*/
extern "C" std::map<double,int16_t> * std_map_double_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,int16_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Int64})
    res = ccall("std_map_double_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Int64}(res)::Main.StdMaps.StdMap{Float64, Int64}
end
*/
extern "C" std::map<double,int64_t> * std_map_double_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,int64_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{UInt32})
    res = ccall("std_map_double_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, UInt32}(res)::Main.StdMaps.StdMap{Float64, UInt32}
end
*/
extern "C" std::map<double,uint32_t> * std_map_double_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,uint32_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Float64})
    res = ccall("std_map_double_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Float64}(res)::Main.StdMaps.StdMap{Float64, Float64}
end
*/
extern "C" std::map<double,double> * std_map_double_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,double>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Int32})
    res = ccall("std_map_double_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Int32}(res)::Main.StdMaps.StdMap{Float64, Int32}
end
*/
extern "C" std::map<double,int32_t> * std_map_double_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,int32_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{ComplexF32})
    res = ccall("std_map_double_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, ComplexF32}(res)::Main.StdMaps.StdMap{Float64, ComplexF32}
end
*/
extern "C" std::map<double,std::complex<float>> * std_map_double_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{UInt64})
    res = ccall("std_map_double_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, UInt64}(res)::Main.StdMaps.StdMap{Float64, UInt64}
end
*/
extern "C" std::map<double,uint64_t> * std_map_double_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,uint64_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{Float32})
    res = ccall("std_map_double_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, Float32}(res)::Main.StdMaps.StdMap{Float64, Float32}
end
*/
extern "C" std::map<double,float> * std_map_double_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,float>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{ComplexF64})
    res = ccall("std_map_double_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, ComplexF64}(res)::Main.StdMaps.StdMap{Float64, ComplexF64}
end
*/
extern "C" std::map<double,std::complex<double>> * std_map_double_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{UInt8})
    res = ccall("std_map_double_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, UInt8}(res)::Main.StdMaps.StdMap{Float64, UInt8}
end
*/
extern "C" std::map<double,uint8_t> * std_map_double_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,uint8_t>;
}


/*
function StdMap_new(key::Type{Float64}, type::Type{UInt16})
    res = ccall("std_map_double_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float64, UInt16}(res)::Main.StdMaps.StdMap{Float64, UInt16}
end
*/
extern "C" std::map<double,uint16_t> * std_map_double_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<double,uint16_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Int8})
    res = ccall("std_map_int32_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Int8}(res)::Main.StdMaps.StdMap{Int32, Int8}
end
*/
extern "C" std::map<int32_t,int8_t> * std_map_int32_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,int8_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Int16})
    res = ccall("std_map_int32_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Int16}(res)::Main.StdMaps.StdMap{Int32, Int16}
end
*/
extern "C" std::map<int32_t,int16_t> * std_map_int32_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,int16_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Int64})
    res = ccall("std_map_int32_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Int64}(res)::Main.StdMaps.StdMap{Int32, Int64}
end
*/
extern "C" std::map<int32_t,int64_t> * std_map_int32_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,int64_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{UInt32})
    res = ccall("std_map_int32_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, UInt32}(res)::Main.StdMaps.StdMap{Int32, UInt32}
end
*/
extern "C" std::map<int32_t,uint32_t> * std_map_int32_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,uint32_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Float64})
    res = ccall("std_map_int32_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Float64}(res)::Main.StdMaps.StdMap{Int32, Float64}
end
*/
extern "C" std::map<int32_t,double> * std_map_int32_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,double>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Int32})
    res = ccall("std_map_int32_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Int32}(res)::Main.StdMaps.StdMap{Int32, Int32}
end
*/
extern "C" std::map<int32_t,int32_t> * std_map_int32_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,int32_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{ComplexF32})
    res = ccall("std_map_int32_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, ComplexF32}(res)::Main.StdMaps.StdMap{Int32, ComplexF32}
end
*/
extern "C" std::map<int32_t,std::complex<float>> * std_map_int32_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{UInt64})
    res = ccall("std_map_int32_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, UInt64}(res)::Main.StdMaps.StdMap{Int32, UInt64}
end
*/
extern "C" std::map<int32_t,uint64_t> * std_map_int32_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,uint64_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{Float32})
    res = ccall("std_map_int32_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, Float32}(res)::Main.StdMaps.StdMap{Int32, Float32}
end
*/
extern "C" std::map<int32_t,float> * std_map_int32_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,float>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{ComplexF64})
    res = ccall("std_map_int32_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, ComplexF64}(res)::Main.StdMaps.StdMap{Int32, ComplexF64}
end
*/
extern "C" std::map<int32_t,std::complex<double>> * std_map_int32_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{UInt8})
    res = ccall("std_map_int32_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, UInt8}(res)::Main.StdMaps.StdMap{Int32, UInt8}
end
*/
extern "C" std::map<int32_t,uint8_t> * std_map_int32_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,uint8_t>;
}


/*
function StdMap_new(key::Type{Int32}, type::Type{UInt16})
    res = ccall("std_map_int32_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Int32, UInt16}(res)::Main.StdMaps.StdMap{Int32, UInt16}
end
*/
extern "C" std::map<int32_t,uint16_t> * std_map_int32_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<int32_t,uint16_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Int8})
    res = ccall("std_map_std__complex_float__int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Int8}(res)::Main.StdMaps.StdMap{ComplexF32, Int8}
end
*/
extern "C" std::map<std::complex<float>,int8_t> * std_map_std__complex_float__int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,int8_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Int16})
    res = ccall("std_map_std__complex_float__int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Int16}(res)::Main.StdMaps.StdMap{ComplexF32, Int16}
end
*/
extern "C" std::map<std::complex<float>,int16_t> * std_map_std__complex_float__int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,int16_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Int64})
    res = ccall("std_map_std__complex_float__int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Int64}(res)::Main.StdMaps.StdMap{ComplexF32, Int64}
end
*/
extern "C" std::map<std::complex<float>,int64_t> * std_map_std__complex_float__int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,int64_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{UInt32})
    res = ccall("std_map_std__complex_float__uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, UInt32}(res)::Main.StdMaps.StdMap{ComplexF32, UInt32}
end
*/
extern "C" std::map<std::complex<float>,uint32_t> * std_map_std__complex_float__uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,uint32_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Float64})
    res = ccall("std_map_std__complex_float__double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Float64}(res)::Main.StdMaps.StdMap{ComplexF32, Float64}
end
*/
extern "C" std::map<std::complex<float>,double> * std_map_std__complex_float__double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,double>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Int32})
    res = ccall("std_map_std__complex_float__int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Int32}(res)::Main.StdMaps.StdMap{ComplexF32, Int32}
end
*/
extern "C" std::map<std::complex<float>,int32_t> * std_map_std__complex_float__int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,int32_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{ComplexF32})
    res = ccall("std_map_std__complex_float__std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, ComplexF32}(res)::Main.StdMaps.StdMap{ComplexF32, ComplexF32}
end
*/
extern "C" std::map<std::complex<float>,std::complex<float>> * std_map_std__complex_float__std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,std::complex<float>>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{UInt64})
    res = ccall("std_map_std__complex_float__uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, UInt64}(res)::Main.StdMaps.StdMap{ComplexF32, UInt64}
end
*/
extern "C" std::map<std::complex<float>,uint64_t> * std_map_std__complex_float__uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,uint64_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{Float32})
    res = ccall("std_map_std__complex_float__float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, Float32}(res)::Main.StdMaps.StdMap{ComplexF32, Float32}
end
*/
extern "C" std::map<std::complex<float>,float> * std_map_std__complex_float__float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,float>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{ComplexF64})
    res = ccall("std_map_std__complex_float__std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, ComplexF64}(res)::Main.StdMaps.StdMap{ComplexF32, ComplexF64}
end
*/
extern "C" std::map<std::complex<float>,std::complex<double>> * std_map_std__complex_float__std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,std::complex<double>>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{UInt8})
    res = ccall("std_map_std__complex_float__uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, UInt8}(res)::Main.StdMaps.StdMap{ComplexF32, UInt8}
end
*/
extern "C" std::map<std::complex<float>,uint8_t> * std_map_std__complex_float__uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,uint8_t>;
}


/*
function StdMap_new(key::Type{ComplexF32}, type::Type{UInt16})
    res = ccall("std_map_std__complex_float__uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF32, UInt16}(res)::Main.StdMaps.StdMap{ComplexF32, UInt16}
end
*/
extern "C" std::map<std::complex<float>,uint16_t> * std_map_std__complex_float__uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<float>,uint16_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Int8})
    res = ccall("std_map_uint64_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Int8}(res)::Main.StdMaps.StdMap{UInt64, Int8}
end
*/
extern "C" std::map<uint64_t,int8_t> * std_map_uint64_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,int8_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Int16})
    res = ccall("std_map_uint64_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Int16}(res)::Main.StdMaps.StdMap{UInt64, Int16}
end
*/
extern "C" std::map<uint64_t,int16_t> * std_map_uint64_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,int16_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Int64})
    res = ccall("std_map_uint64_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Int64}(res)::Main.StdMaps.StdMap{UInt64, Int64}
end
*/
extern "C" std::map<uint64_t,int64_t> * std_map_uint64_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,int64_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt32})
    res = ccall("std_map_uint64_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, UInt32}(res)::Main.StdMaps.StdMap{UInt64, UInt32}
end
*/
extern "C" std::map<uint64_t,uint32_t> * std_map_uint64_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,uint32_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Float64})
    res = ccall("std_map_uint64_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Float64}(res)::Main.StdMaps.StdMap{UInt64, Float64}
end
*/
extern "C" std::map<uint64_t,double> * std_map_uint64_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,double>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Int32})
    res = ccall("std_map_uint64_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Int32}(res)::Main.StdMaps.StdMap{UInt64, Int32}
end
*/
extern "C" std::map<uint64_t,int32_t> * std_map_uint64_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,int32_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{ComplexF32})
    res = ccall("std_map_uint64_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, ComplexF32}(res)::Main.StdMaps.StdMap{UInt64, ComplexF32}
end
*/
extern "C" std::map<uint64_t,std::complex<float>> * std_map_uint64_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt64})
    res = ccall("std_map_uint64_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, UInt64}(res)::Main.StdMaps.StdMap{UInt64, UInt64}
end
*/
extern "C" std::map<uint64_t,uint64_t> * std_map_uint64_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,uint64_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{Float32})
    res = ccall("std_map_uint64_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, Float32}(res)::Main.StdMaps.StdMap{UInt64, Float32}
end
*/
extern "C" std::map<uint64_t,float> * std_map_uint64_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,float>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{ComplexF64})
    res = ccall("std_map_uint64_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, ComplexF64}(res)::Main.StdMaps.StdMap{UInt64, ComplexF64}
end
*/
extern "C" std::map<uint64_t,std::complex<double>> * std_map_uint64_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt8})
    res = ccall("std_map_uint64_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, UInt8}(res)::Main.StdMaps.StdMap{UInt64, UInt8}
end
*/
extern "C" std::map<uint64_t,uint8_t> * std_map_uint64_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,uint8_t>;
}


/*
function StdMap_new(key::Type{UInt64}, type::Type{UInt16})
    res = ccall("std_map_uint64_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt64, UInt16}(res)::Main.StdMaps.StdMap{UInt64, UInt16}
end
*/
extern "C" std::map<uint64_t,uint16_t> * std_map_uint64_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint64_t,uint16_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Int8})
    res = ccall("std_map_float_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Int8}(res)::Main.StdMaps.StdMap{Float32, Int8}
end
*/
extern "C" std::map<float,int8_t> * std_map_float_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,int8_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Int16})
    res = ccall("std_map_float_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Int16}(res)::Main.StdMaps.StdMap{Float32, Int16}
end
*/
extern "C" std::map<float,int16_t> * std_map_float_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,int16_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Int64})
    res = ccall("std_map_float_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Int64}(res)::Main.StdMaps.StdMap{Float32, Int64}
end
*/
extern "C" std::map<float,int64_t> * std_map_float_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,int64_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{UInt32})
    res = ccall("std_map_float_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, UInt32}(res)::Main.StdMaps.StdMap{Float32, UInt32}
end
*/
extern "C" std::map<float,uint32_t> * std_map_float_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,uint32_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Float64})
    res = ccall("std_map_float_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Float64}(res)::Main.StdMaps.StdMap{Float32, Float64}
end
*/
extern "C" std::map<float,double> * std_map_float_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,double>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Int32})
    res = ccall("std_map_float_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Int32}(res)::Main.StdMaps.StdMap{Float32, Int32}
end
*/
extern "C" std::map<float,int32_t> * std_map_float_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,int32_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{ComplexF32})
    res = ccall("std_map_float_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, ComplexF32}(res)::Main.StdMaps.StdMap{Float32, ComplexF32}
end
*/
extern "C" std::map<float,std::complex<float>> * std_map_float_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,std::complex<float>>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{UInt64})
    res = ccall("std_map_float_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, UInt64}(res)::Main.StdMaps.StdMap{Float32, UInt64}
end
*/
extern "C" std::map<float,uint64_t> * std_map_float_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,uint64_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{Float32})
    res = ccall("std_map_float_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, Float32}(res)::Main.StdMaps.StdMap{Float32, Float32}
end
*/
extern "C" std::map<float,float> * std_map_float_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,float>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{ComplexF64})
    res = ccall("std_map_float_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, ComplexF64}(res)::Main.StdMaps.StdMap{Float32, ComplexF64}
end
*/
extern "C" std::map<float,std::complex<double>> * std_map_float_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,std::complex<double>>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{UInt8})
    res = ccall("std_map_float_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, UInt8}(res)::Main.StdMaps.StdMap{Float32, UInt8}
end
*/
extern "C" std::map<float,uint8_t> * std_map_float_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,uint8_t>;
}


/*
function StdMap_new(key::Type{Float32}, type::Type{UInt16})
    res = ccall("std_map_float_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{Float32, UInt16}(res)::Main.StdMaps.StdMap{Float32, UInt16}
end
*/
extern "C" std::map<float,uint16_t> * std_map_float_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<float,uint16_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Int8})
    res = ccall("std_map_std__complex_double__int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Int8}(res)::Main.StdMaps.StdMap{ComplexF64, Int8}
end
*/
extern "C" std::map<std::complex<double>,int8_t> * std_map_std__complex_double__int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,int8_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Int16})
    res = ccall("std_map_std__complex_double__int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Int16}(res)::Main.StdMaps.StdMap{ComplexF64, Int16}
end
*/
extern "C" std::map<std::complex<double>,int16_t> * std_map_std__complex_double__int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,int16_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Int64})
    res = ccall("std_map_std__complex_double__int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Int64}(res)::Main.StdMaps.StdMap{ComplexF64, Int64}
end
*/
extern "C" std::map<std::complex<double>,int64_t> * std_map_std__complex_double__int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,int64_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{UInt32})
    res = ccall("std_map_std__complex_double__uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, UInt32}(res)::Main.StdMaps.StdMap{ComplexF64, UInt32}
end
*/
extern "C" std::map<std::complex<double>,uint32_t> * std_map_std__complex_double__uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,uint32_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Float64})
    res = ccall("std_map_std__complex_double__double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Float64}(res)::Main.StdMaps.StdMap{ComplexF64, Float64}
end
*/
extern "C" std::map<std::complex<double>,double> * std_map_std__complex_double__double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,double>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Int32})
    res = ccall("std_map_std__complex_double__int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Int32}(res)::Main.StdMaps.StdMap{ComplexF64, Int32}
end
*/
extern "C" std::map<std::complex<double>,int32_t> * std_map_std__complex_double__int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,int32_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{ComplexF32})
    res = ccall("std_map_std__complex_double__std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, ComplexF32}(res)::Main.StdMaps.StdMap{ComplexF64, ComplexF32}
end
*/
extern "C" std::map<std::complex<double>,std::complex<float>> * std_map_std__complex_double__std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,std::complex<float>>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{UInt64})
    res = ccall("std_map_std__complex_double__uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, UInt64}(res)::Main.StdMaps.StdMap{ComplexF64, UInt64}
end
*/
extern "C" std::map<std::complex<double>,uint64_t> * std_map_std__complex_double__uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,uint64_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{Float32})
    res = ccall("std_map_std__complex_double__float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, Float32}(res)::Main.StdMaps.StdMap{ComplexF64, Float32}
end
*/
extern "C" std::map<std::complex<double>,float> * std_map_std__complex_double__float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,float>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{ComplexF64})
    res = ccall("std_map_std__complex_double__std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, ComplexF64}(res)::Main.StdMaps.StdMap{ComplexF64, ComplexF64}
end
*/
extern "C" std::map<std::complex<double>,std::complex<double>> * std_map_std__complex_double__std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,std::complex<double>>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{UInt8})
    res = ccall("std_map_std__complex_double__uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, UInt8}(res)::Main.StdMaps.StdMap{ComplexF64, UInt8}
end
*/
extern "C" std::map<std::complex<double>,uint8_t> * std_map_std__complex_double__uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,uint8_t>;
}


/*
function StdMap_new(key::Type{ComplexF64}, type::Type{UInt16})
    res = ccall("std_map_std__complex_double__uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{ComplexF64, UInt16}(res)::Main.StdMaps.StdMap{ComplexF64, UInt16}
end
*/
extern "C" std::map<std::complex<double>,uint16_t> * std_map_std__complex_double__uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<std::complex<double>,uint16_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Int8})
    res = ccall("std_map_uint8_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Int8}(res)::Main.StdMaps.StdMap{UInt8, Int8}
end
*/
extern "C" std::map<uint8_t,int8_t> * std_map_uint8_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,int8_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Int16})
    res = ccall("std_map_uint8_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Int16}(res)::Main.StdMaps.StdMap{UInt8, Int16}
end
*/
extern "C" std::map<uint8_t,int16_t> * std_map_uint8_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,int16_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Int64})
    res = ccall("std_map_uint8_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Int64}(res)::Main.StdMaps.StdMap{UInt8, Int64}
end
*/
extern "C" std::map<uint8_t,int64_t> * std_map_uint8_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,int64_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt32})
    res = ccall("std_map_uint8_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, UInt32}(res)::Main.StdMaps.StdMap{UInt8, UInt32}
end
*/
extern "C" std::map<uint8_t,uint32_t> * std_map_uint8_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,uint32_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Float64})
    res = ccall("std_map_uint8_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Float64}(res)::Main.StdMaps.StdMap{UInt8, Float64}
end
*/
extern "C" std::map<uint8_t,double> * std_map_uint8_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,double>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Int32})
    res = ccall("std_map_uint8_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Int32}(res)::Main.StdMaps.StdMap{UInt8, Int32}
end
*/
extern "C" std::map<uint8_t,int32_t> * std_map_uint8_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,int32_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{ComplexF32})
    res = ccall("std_map_uint8_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, ComplexF32}(res)::Main.StdMaps.StdMap{UInt8, ComplexF32}
end
*/
extern "C" std::map<uint8_t,std::complex<float>> * std_map_uint8_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt64})
    res = ccall("std_map_uint8_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, UInt64}(res)::Main.StdMaps.StdMap{UInt8, UInt64}
end
*/
extern "C" std::map<uint8_t,uint64_t> * std_map_uint8_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,uint64_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{Float32})
    res = ccall("std_map_uint8_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, Float32}(res)::Main.StdMaps.StdMap{UInt8, Float32}
end
*/
extern "C" std::map<uint8_t,float> * std_map_uint8_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,float>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{ComplexF64})
    res = ccall("std_map_uint8_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, ComplexF64}(res)::Main.StdMaps.StdMap{UInt8, ComplexF64}
end
*/
extern "C" std::map<uint8_t,std::complex<double>> * std_map_uint8_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt8})
    res = ccall("std_map_uint8_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, UInt8}(res)::Main.StdMaps.StdMap{UInt8, UInt8}
end
*/
extern "C" std::map<uint8_t,uint8_t> * std_map_uint8_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,uint8_t>;
}


/*
function StdMap_new(key::Type{UInt8}, type::Type{UInt16})
    res = ccall("std_map_uint8_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt8, UInt16}(res)::Main.StdMaps.StdMap{UInt8, UInt16}
end
*/
extern "C" std::map<uint8_t,uint16_t> * std_map_uint8_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint8_t,uint16_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Int8})
    res = ccall("std_map_uint16_t_int8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Int8}(res)::Main.StdMaps.StdMap{UInt16, Int8}
end
*/
extern "C" std::map<uint16_t,int8_t> * std_map_uint16_t_int8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,int8_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Int16})
    res = ccall("std_map_uint16_t_int16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Int16}(res)::Main.StdMaps.StdMap{UInt16, Int16}
end
*/
extern "C" std::map<uint16_t,int16_t> * std_map_uint16_t_int16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,int16_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Int64})
    res = ccall("std_map_uint16_t_int64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Int64}(res)::Main.StdMaps.StdMap{UInt16, Int64}
end
*/
extern "C" std::map<uint16_t,int64_t> * std_map_uint16_t_int64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,int64_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt32})
    res = ccall("std_map_uint16_t_uint32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, UInt32}(res)::Main.StdMaps.StdMap{UInt16, UInt32}
end
*/
extern "C" std::map<uint16_t,uint32_t> * std_map_uint16_t_uint32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,uint32_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Float64})
    res = ccall("std_map_uint16_t_double_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Float64}(res)::Main.StdMaps.StdMap{UInt16, Float64}
end
*/
extern "C" std::map<uint16_t,double> * std_map_uint16_t_double_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,double>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Int32})
    res = ccall("std_map_uint16_t_int32_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Int32}(res)::Main.StdMaps.StdMap{UInt16, Int32}
end
*/
extern "C" std::map<uint16_t,int32_t> * std_map_uint16_t_int32_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,int32_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{ComplexF32})
    res = ccall("std_map_uint16_t_std__complex_float__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, ComplexF32}(res)::Main.StdMaps.StdMap{UInt16, ComplexF32}
end
*/
extern "C" std::map<uint16_t,std::complex<float>> * std_map_uint16_t_std__complex_float__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,std::complex<float>>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt64})
    res = ccall("std_map_uint16_t_uint64_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, UInt64}(res)::Main.StdMaps.StdMap{UInt16, UInt64}
end
*/
extern "C" std::map<uint16_t,uint64_t> * std_map_uint16_t_uint64_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,uint64_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{Float32})
    res = ccall("std_map_uint16_t_float_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, Float32}(res)::Main.StdMaps.StdMap{UInt16, Float32}
end
*/
extern "C" std::map<uint16_t,float> * std_map_uint16_t_float_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,float>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{ComplexF64})
    res = ccall("std_map_uint16_t_std__complex_double__new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, ComplexF64}(res)::Main.StdMaps.StdMap{UInt16, ComplexF64}
end
*/
extern "C" std::map<uint16_t,std::complex<double>> * std_map_uint16_t_std__complex_double__new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,std::complex<double>>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt8})
    res = ccall("std_map_uint16_t_uint8_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, UInt8}(res)::Main.StdMaps.StdMap{UInt16, UInt8}
end
*/
extern "C" std::map<uint16_t,uint8_t> * std_map_uint16_t_uint8_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,uint8_t>;
}


/*
function StdMap_new(key::Type{UInt16}, type::Type{UInt16})
    res = ccall("std_map_uint16_t_uint16_t_new", Ptr{Nothing}, (Nothing, Nothing), nothing, nothing)
    return StdMap{UInt16, UInt16}(res)::Main.StdMaps.StdMap{UInt16, UInt16}
end
*/
extern "C" std::map<uint16_t,uint16_t> * std_map_uint16_t_uint16_t_new(
    std::tuple<> key,
    std::tuple<> type
) {
    return new std::map<uint16_t,uint16_t>;
}


