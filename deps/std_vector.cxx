#include <ccomplex>
#include <cstdint>

#include <cstddef>
#include <utility>
#include <vector>


/*
function StdVector_new(type::Type{Int8})
    res = ccall(("std_vector_int8_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Int8}(res)::Main.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new(
    
) {
    return new std::vector<int8_t>;
}

/*
function StdVector_new(type::Type{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Int8}(res)::Main.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int8_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_delete(
    std::vector<int8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Int8}(res)::Main.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_copy(
    std::vector<int8_t> * restrict ptr
) {
    return new std::vector<int8_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_resize_(
    std::vector<int8_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int8_t_length(
    const std::vector<int8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Int8}, idx::Integer)
    res = ccall(("std_vector_int8_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Int8
end
*/
extern "C" int8_t std_vector_int8_t_getindex(
    const std::vector<int8_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Int8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt64), vec, convert(Int8, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_setindex_(
    std::vector<int8_t> * restrict vec,
    int8_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{Int16})
    res = ccall(("std_vector_int16_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Int16}(res)::Main.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new(
    
) {
    return new std::vector<int16_t>;
}

/*
function StdVector_new(type::Type{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Int16}(res)::Main.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int16_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_delete(
    std::vector<int16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Int16}(res)::Main.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_copy(
    std::vector<int16_t> * restrict ptr
) {
    return new std::vector<int16_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_resize_(
    std::vector<int16_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int16_t_length(
    const std::vector<int16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Int16}, idx::Integer)
    res = ccall(("std_vector_int16_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int16, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Int16
end
*/
extern "C" int16_t std_vector_int16_t_getindex(
    const std::vector<int16_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Int16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16, UInt64), vec, convert(Int16, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_setindex_(
    std::vector<int16_t> * restrict vec,
    int16_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{Int64})
    res = ccall(("std_vector_int64_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Int64}(res)::Main.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new(
    
) {
    return new std::vector<int64_t>;
}

/*
function StdVector_new(type::Type{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Int64}(res)::Main.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int64_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_delete(
    std::vector<int64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Int64}(res)::Main.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_copy(
    std::vector<int64_t> * restrict ptr
) {
    return new std::vector<int64_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_resize_(
    std::vector<int64_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int64_t_length(
    const std::vector<int64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Int64}, idx::Integer)
    res = ccall(("std_vector_int64_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int64, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Int64
end
*/
extern "C" int64_t std_vector_int64_t_getindex(
    const std::vector<int64_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Int64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64, UInt64), vec, convert(Int64, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_setindex_(
    std::vector<int64_t> * restrict vec,
    int64_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{UInt32})
    res = ccall(("std_vector_uint32_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{UInt32}(res)::Main.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new(
    
) {
    return new std::vector<uint32_t>;
}

/*
function StdVector_new(type::Type{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{UInt32}(res)::Main.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint32_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_delete(
    std::vector<uint32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{UInt32}(res)::Main.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_copy(
    std::vector<uint32_t> * restrict ptr
) {
    return new std::vector<uint32_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_resize_(
    std::vector<uint32_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint32_t_length(
    const std::vector<uint32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{UInt32}, idx::Integer)
    res = ccall(("std_vector_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt32, (Ptr{Nothing}, UInt64), vec, idx)
    return res::UInt32
end
*/
extern "C" uint32_t std_vector_uint32_t_getindex(
    const std::vector<uint32_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{UInt32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32, UInt64), vec, convert(UInt32, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_setindex_(
    std::vector<uint32_t> * restrict vec,
    uint32_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{Float64})
    res = ccall(("std_vector_double_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Float64}(res)::Main.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new(
    
) {
    return new std::vector<double>;
}

/*
function StdVector_new(type::Type{Float64}, size::Integer)
    res = ccall(("std_vector_double_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Float64}(res)::Main.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double_delete(
    std::vector<double> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Float64}(res)::Main.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_copy(
    std::vector<double> * restrict ptr
) {
    return new std::vector<double>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Float64}, size::Integer)
    res = ccall(("std_vector_double_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_double_resize_(
    std::vector<double> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double_length(
    const std::vector<double> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Float64}, idx::Integer)
    res = ccall(("std_vector_double_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Float64, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Float64
end
*/
extern "C" double std_vector_double_getindex(
    const std::vector<double> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Float64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64, UInt64), vec, convert(Float64, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_double_setindex_(
    std::vector<double> * restrict vec,
    double elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{Int32})
    res = ccall(("std_vector_int32_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Int32}(res)::Main.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new(
    
) {
    return new std::vector<int32_t>;
}

/*
function StdVector_new(type::Type{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Int32}(res)::Main.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int32_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_delete(
    std::vector<int32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Int32}(res)::Main.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_copy(
    std::vector<int32_t> * restrict ptr
) {
    return new std::vector<int32_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_resize_(
    std::vector<int32_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int32_t_length(
    const std::vector<int32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Int32}, idx::Integer)
    res = ccall(("std_vector_int32_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Int32
end
*/
extern "C" int32_t std_vector_int32_t_getindex(
    const std::vector<int32_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Int32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32, UInt64), vec, convert(Int32, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_setindex_(
    std::vector<int32_t> * restrict vec,
    int32_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{ComplexF32})
    res = ccall(("std_vector_float__Complex_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{ComplexF32}(res)::Main.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new(
    
) {
    return new std::vector<float _Complex>;
}

/*
function StdVector_new(type::Type{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{ComplexF32}(res)::Main.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float _Complex>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_delete(
    std::vector<float _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{ComplexF32}(res)::Main.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_copy(
    std::vector<float _Complex> * restrict ptr
) {
    return new std::vector<float _Complex>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_resize_(
    std::vector<float _Complex> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float__Complex_length(
    const std::vector<float _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{ComplexF32}, idx::Integer)
    res = ccall(("std_vector_float__Complex_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), ComplexF32, (Ptr{Nothing}, UInt64), vec, idx)
    return res::ComplexF32
end
*/
extern "C" float _Complex std_vector_float__Complex_getindex(
    const std::vector<float _Complex> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{ComplexF32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float__Complex_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, ComplexF32, UInt64), vec, convert(ComplexF32, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_setindex_(
    std::vector<float _Complex> * restrict vec,
    float _Complex elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{UInt64})
    res = ccall(("std_vector_uint64_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{UInt64}(res)::Main.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new(
    
) {
    return new std::vector<uint64_t>;
}

/*
function StdVector_new(type::Type{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{UInt64}(res)::Main.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint64_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_delete(
    std::vector<uint64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{UInt64}(res)::Main.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_copy(
    std::vector<uint64_t> * restrict ptr
) {
    return new std::vector<uint64_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_resize_(
    std::vector<uint64_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint64_t_length(
    const std::vector<uint64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{UInt64}, idx::Integer)
    res = ccall(("std_vector_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing}, UInt64), vec, idx)
    return res::UInt64
end
*/
extern "C" uint64_t std_vector_uint64_t_getindex(
    const std::vector<uint64_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{UInt64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64, UInt64), vec, convert(UInt64, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_setindex_(
    std::vector<uint64_t> * restrict vec,
    uint64_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{Float32})
    res = ccall(("std_vector_float_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{Float32}(res)::Main.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new(
    
) {
    return new std::vector<float>;
}

/*
function StdVector_new(type::Type{Float32}, size::Integer)
    res = ccall(("std_vector_float_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{Float32}(res)::Main.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float_delete(
    std::vector<float> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{Float32}(res)::Main.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_copy(
    std::vector<float> * restrict ptr
) {
    return new std::vector<float>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{Float32}, size::Integer)
    res = ccall(("std_vector_float_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_float_resize_(
    std::vector<float> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float_length(
    const std::vector<float> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{Float32}, idx::Integer)
    res = ccall(("std_vector_float_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Float32, (Ptr{Nothing}, UInt64), vec, idx)
    return res::Float32
end
*/
extern "C" float std_vector_float_getindex(
    const std::vector<float> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{Float32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32, UInt64), vec, convert(Float32, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_float_setindex_(
    std::vector<float> * restrict vec,
    float elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{ComplexF64})
    res = ccall(("std_vector_double__Complex_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{ComplexF64}(res)::Main.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new(
    
) {
    return new std::vector<double _Complex>;
}

/*
function StdVector_new(type::Type{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{ComplexF64}(res)::Main.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double _Complex>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_delete(
    std::vector<double _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{ComplexF64}(res)::Main.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_copy(
    std::vector<double _Complex> * restrict ptr
) {
    return new std::vector<double _Complex>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_resize_(
    std::vector<double _Complex> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double__Complex_length(
    const std::vector<double _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{ComplexF64}, idx::Integer)
    res = ccall(("std_vector_double__Complex_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), ComplexF64, (Ptr{Nothing}, UInt64), vec, idx)
    return res::ComplexF64
end
*/
extern "C" double _Complex std_vector_double__Complex_getindex(
    const std::vector<double _Complex> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{ComplexF64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double__Complex_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, ComplexF64, UInt64), vec, convert(ComplexF64, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_setindex_(
    std::vector<double _Complex> * restrict vec,
    double _Complex elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{UInt8})
    res = ccall(("std_vector_uint8_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{UInt8}(res)::Main.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new(
    
) {
    return new std::vector<uint8_t>;
}

/*
function StdVector_new(type::Type{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{UInt8}(res)::Main.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint8_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_delete(
    std::vector<uint8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{UInt8}(res)::Main.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_copy(
    std::vector<uint8_t> * restrict ptr
) {
    return new std::vector<uint8_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_resize_(
    std::vector<uint8_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint8_t_length(
    const std::vector<uint8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{UInt8}, idx::Integer)
    res = ccall(("std_vector_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt8, (Ptr{Nothing}, UInt64), vec, idx)
    return res::UInt8
end
*/
extern "C" uint8_t std_vector_uint8_t_getindex(
    const std::vector<uint8_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{UInt8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8, UInt64), vec, convert(UInt8, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_setindex_(
    std::vector<uint8_t> * restrict vec,
    uint8_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}

/*
function StdVector_new(type::Type{UInt16})
    res = ccall(("std_vector_uint16_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdVector{UInt16}(res)::Main.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new(
    
) {
    return new std::vector<uint16_t>;
}

/*
function StdVector_new(type::Type{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (UInt64,), size)
    return StdVector{UInt16}(res)::Main.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint16_t>(size);
}

/*
function StdVector_delete(vec::Main.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_delete(
    std::vector<uint16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(ptr::Main.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdVector{UInt16}(res)::Main.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_copy(
    std::vector<uint16_t> * restrict ptr
) {
    return new std::vector<uint16_t>(*ptr);
}

/*
function Base.resize!(vec::Main.StdVectors.StdVector{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_resize_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_resize_(
    std::vector<uint16_t> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::Main.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_length", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint16_t_length(
    const std::vector<uint16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::Main.StdVectors.StdVector{UInt16}, idx::Integer)
    res = ccall(("std_vector_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt16, (Ptr{Nothing}, UInt64), vec, idx)
    return res::UInt16
end
*/
extern "C" uint16_t std_vector_uint16_t_getindex(
    const std::vector<uint16_t> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::Main.StdVectors.StdVector{UInt16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16, UInt64), vec, convert(UInt16, elt), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_setindex_(
    std::vector<uint16_t> * restrict vec,
    uint16_t elt,
    std::size_t idx
) {
    (*vec)[idx] = std::move(elt);
}


