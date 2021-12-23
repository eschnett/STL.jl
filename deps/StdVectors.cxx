#include <string>
#include <vector>


/*
function StdVector_new(type::Type{Bool})
    res = ccall(("std_vector_bool_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Bool}}, ())
    return StdVector{Bool}(res)::STL.StdVectors.StdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_new(
    
) {
    return new std::vector<bool>;
}

/*
function StdVector_new(type::Type{Bool}, size::Integer)
    res = ccall(("std_vector_bool_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Bool}}, (UInt64,), size)
    return StdVector{Bool}(res)::STL.StdVectors.StdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_new_std_size_t(
    std::size_t size
) {
    return new std::vector<bool>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Bool})
    res = ccall(("std_vector_bool_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Bool}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_delete(
    std::vector<bool> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Bool})
    res = ccall(("std_vector_bool_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Bool}}, (Ptr{STL.StdVectors.StdVector{Bool}},), vec)
    return StdVector{Bool}(res)::STL.StdVectors.StdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_copy(
    const std::vector<bool> * restrict vec
) {
    return new std::vector<bool>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Bool}, size::Integer)
    res = ccall(("std_vector_bool_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Bool}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_resize_(
    std::vector<bool> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVectors.StdVector{Bool})
    res = ccall(("std_vector_bool_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Bool}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_bool_length(
    const std::vector<bool> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Bool}, idx::Integer)
    res = ccall(("std_vector_bool_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Bool}}, UInt64), vec, idx)
    return res::Bool
end
*/
extern "C" bool std_vector_bool_getindex(
    std::vector<bool> * restrict vec,
    std::size_t idx
) {
    return (*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Bool}, elt::Any, idx::Integer)
    res = ccall(("std_vector_bool_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Bool}}, Ptr{Bool}, UInt64), vec, convert_arg(Ptr{Bool}, convert(Bool, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_setindex_(
    std::vector<bool> * restrict vec,
    bool const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Bool}, vec2::STL.StdVectors.StdVector{Bool})
    res = ccall(("std_vector_bool_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Bool}}, Ptr{STL.StdVectors.StdVector{Bool}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_bool_equals(
    const std::vector<bool> * restrict vec1,
    const std::vector<bool> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{ComplexF32})
    res = ccall(("std_vector_float__Complex_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF32}}, ())
    return StdVector{ComplexF32}(res)::STL.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new(
    
) {
    return new std::vector<float _Complex>;
}

/*
function StdVector_new(type::Type{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF32}}, (UInt64,), size)
    return StdVector{ComplexF32}(res)::STL.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float _Complex>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_delete(
    std::vector<float _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF32}}, (Ptr{STL.StdVectors.StdVector{ComplexF32}},), vec)
    return StdVector{ComplexF32}(res)::STL.StdVectors.StdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_copy(
    const std::vector<float _Complex> * restrict vec
) {
    return new std::vector<float _Complex>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{ComplexF32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float__Complex_length(
    const std::vector<float _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{ComplexF32}, idx::Integer)
    res = ccall(("std_vector_float__Complex_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{ComplexF32}, (Ptr{STL.StdVectors.StdVector{ComplexF32}}, UInt64), vec, idx)
    return convert_result(ComplexF32, res)::ComplexF32
end
*/
extern "C" float _Complex * std_vector_float__Complex_getindex(
    std::vector<float _Complex> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{ComplexF32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float__Complex_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF32}}, Ptr{ComplexF32}, UInt64), vec, convert_arg(Ptr{ComplexF32}, convert(ComplexF32, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_setindex_(
    std::vector<float _Complex> * restrict vec,
    float _Complex const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{ComplexF32}, vec2::STL.StdVectors.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{ComplexF32}}, Ptr{STL.StdVectors.StdVector{ComplexF32}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_float__Complex_equals(
    const std::vector<float _Complex> * restrict vec1,
    const std::vector<float _Complex> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{ComplexF64})
    res = ccall(("std_vector_double__Complex_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF64}}, ())
    return StdVector{ComplexF64}(res)::STL.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new(
    
) {
    return new std::vector<double _Complex>;
}

/*
function StdVector_new(type::Type{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF64}}, (UInt64,), size)
    return StdVector{ComplexF64}(res)::STL.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double _Complex>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_delete(
    std::vector<double _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{ComplexF64}}, (Ptr{STL.StdVectors.StdVector{ComplexF64}},), vec)
    return StdVector{ComplexF64}(res)::STL.StdVectors.StdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_copy(
    const std::vector<double _Complex> * restrict vec
) {
    return new std::vector<double _Complex>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{ComplexF64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double__Complex_length(
    const std::vector<double _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{ComplexF64}, idx::Integer)
    res = ccall(("std_vector_double__Complex_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{ComplexF64}, (Ptr{STL.StdVectors.StdVector{ComplexF64}}, UInt64), vec, idx)
    return convert_result(ComplexF64, res)::ComplexF64
end
*/
extern "C" double _Complex * std_vector_double__Complex_getindex(
    std::vector<double _Complex> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{ComplexF64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double__Complex_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{ComplexF64}}, Ptr{ComplexF64}, UInt64), vec, convert_arg(Ptr{ComplexF64}, convert(ComplexF64, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_setindex_(
    std::vector<double _Complex> * restrict vec,
    double _Complex const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{ComplexF64}, vec2::STL.StdVectors.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{ComplexF64}}, Ptr{STL.StdVectors.StdVector{ComplexF64}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_double__Complex_equals(
    const std::vector<double _Complex> * restrict vec1,
    const std::vector<double _Complex> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Float32})
    res = ccall(("std_vector_float_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float32}}, ())
    return StdVector{Float32}(res)::STL.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new(
    
) {
    return new std::vector<float>;
}

/*
function StdVector_new(type::Type{Float32}, size::Integer)
    res = ccall(("std_vector_float_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float32}}, (UInt64,), size)
    return StdVector{Float32}(res)::STL.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float_delete(
    std::vector<float> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float32}}, (Ptr{STL.StdVectors.StdVector{Float32}},), vec)
    return StdVector{Float32}(res)::STL.StdVectors.StdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_copy(
    const std::vector<float> * restrict vec
) {
    return new std::vector<float>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Float32}, size::Integer)
    res = ccall(("std_vector_float_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Float32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float_length(
    const std::vector<float> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Float32}, idx::Integer)
    res = ccall(("std_vector_float_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Float32}, (Ptr{STL.StdVectors.StdVector{Float32}}, UInt64), vec, idx)
    return convert_result(Float32, res)::Float32
end
*/
extern "C" float * std_vector_float_getindex(
    std::vector<float> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Float32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float32}}, Ptr{Float32}, UInt64), vec, convert_arg(Ptr{Float32}, convert(Float32, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_float_setindex_(
    std::vector<float> * restrict vec,
    float const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Float32}, vec2::STL.StdVectors.StdVector{Float32})
    res = ccall(("std_vector_float_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Float32}}, Ptr{STL.StdVectors.StdVector{Float32}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_float_equals(
    const std::vector<float> * restrict vec1,
    const std::vector<float> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Float64})
    res = ccall(("std_vector_double_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float64}}, ())
    return StdVector{Float64}(res)::STL.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new(
    
) {
    return new std::vector<double>;
}

/*
function StdVector_new(type::Type{Float64}, size::Integer)
    res = ccall(("std_vector_double_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float64}}, (UInt64,), size)
    return StdVector{Float64}(res)::STL.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double_delete(
    std::vector<double> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Float64}}, (Ptr{STL.StdVectors.StdVector{Float64}},), vec)
    return StdVector{Float64}(res)::STL.StdVectors.StdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_copy(
    const std::vector<double> * restrict vec
) {
    return new std::vector<double>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Float64}, size::Integer)
    res = ccall(("std_vector_double_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Float64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double_length(
    const std::vector<double> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Float64}, idx::Integer)
    res = ccall(("std_vector_double_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdVectors.StdVector{Float64}}, UInt64), vec, idx)
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_vector_double_getindex(
    std::vector<double> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Float64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Float64}}, Ptr{Float64}, UInt64), vec, convert_arg(Ptr{Float64}, convert(Float64, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_double_setindex_(
    std::vector<double> * restrict vec,
    double const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Float64}, vec2::STL.StdVectors.StdVector{Float64})
    res = ccall(("std_vector_double_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Float64}}, Ptr{STL.StdVectors.StdVector{Float64}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_double_equals(
    const std::vector<double> * restrict vec1,
    const std::vector<double> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Int16})
    res = ccall(("std_vector_int16_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int16}}, ())
    return StdVector{Int16}(res)::STL.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new(
    
) {
    return new std::vector<int16_t>;
}

/*
function StdVector_new(type::Type{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int16}}, (UInt64,), size)
    return StdVector{Int16}(res)::STL.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int16_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_delete(
    std::vector<int16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int16}}, (Ptr{STL.StdVectors.StdVector{Int16}},), vec)
    return StdVector{Int16}(res)::STL.StdVectors.StdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_copy(
    const std::vector<int16_t> * restrict vec
) {
    return new std::vector<int16_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int16}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Int16}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int16_t_length(
    const std::vector<int16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Int16}, idx::Integer)
    res = ccall(("std_vector_int16_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int16}, (Ptr{STL.StdVectors.StdVector{Int16}}, UInt64), vec, idx)
    return convert_result(Int16, res)::Int16
end
*/
extern "C" int16_t * std_vector_int16_t_getindex(
    std::vector<int16_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Int16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int16}}, Ptr{Int16}, UInt64), vec, convert_arg(Ptr{Int16}, convert(Int16, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_setindex_(
    std::vector<int16_t> * restrict vec,
    int16_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Int16}, vec2::STL.StdVectors.StdVector{Int16})
    res = ccall(("std_vector_int16_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Int16}}, Ptr{STL.StdVectors.StdVector{Int16}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_int16_t_equals(
    const std::vector<int16_t> * restrict vec1,
    const std::vector<int16_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Int32})
    res = ccall(("std_vector_int32_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int32}}, ())
    return StdVector{Int32}(res)::STL.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new(
    
) {
    return new std::vector<int32_t>;
}

/*
function StdVector_new(type::Type{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int32}}, (UInt64,), size)
    return StdVector{Int32}(res)::STL.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int32_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_delete(
    std::vector<int32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int32}}, (Ptr{STL.StdVectors.StdVector{Int32}},), vec)
    return StdVector{Int32}(res)::STL.StdVectors.StdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_copy(
    const std::vector<int32_t> * restrict vec
) {
    return new std::vector<int32_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Int32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int32_t_length(
    const std::vector<int32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Int32}, idx::Integer)
    res = ccall(("std_vector_int32_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int32}, (Ptr{STL.StdVectors.StdVector{Int32}}, UInt64), vec, idx)
    return convert_result(Int32, res)::Int32
end
*/
extern "C" int32_t * std_vector_int32_t_getindex(
    std::vector<int32_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Int32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int32}}, Ptr{Int32}, UInt64), vec, convert_arg(Ptr{Int32}, convert(Int32, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_setindex_(
    std::vector<int32_t> * restrict vec,
    int32_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Int32}, vec2::STL.StdVectors.StdVector{Int32})
    res = ccall(("std_vector_int32_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Int32}}, Ptr{STL.StdVectors.StdVector{Int32}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_int32_t_equals(
    const std::vector<int32_t> * restrict vec1,
    const std::vector<int32_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Int64})
    res = ccall(("std_vector_int64_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int64}}, ())
    return StdVector{Int64}(res)::STL.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new(
    
) {
    return new std::vector<int64_t>;
}

/*
function StdVector_new(type::Type{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int64}}, (UInt64,), size)
    return StdVector{Int64}(res)::STL.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int64_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_delete(
    std::vector<int64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int64}}, (Ptr{STL.StdVectors.StdVector{Int64}},), vec)
    return StdVector{Int64}(res)::STL.StdVectors.StdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_copy(
    const std::vector<int64_t> * restrict vec
) {
    return new std::vector<int64_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Int64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int64_t_length(
    const std::vector<int64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Int64}, idx::Integer)
    res = ccall(("std_vector_int64_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdVectors.StdVector{Int64}}, UInt64), vec, idx)
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_vector_int64_t_getindex(
    std::vector<int64_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Int64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int64}}, Ptr{Int64}, UInt64), vec, convert_arg(Ptr{Int64}, convert(Int64, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_setindex_(
    std::vector<int64_t> * restrict vec,
    int64_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Int64}, vec2::STL.StdVectors.StdVector{Int64})
    res = ccall(("std_vector_int64_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Int64}}, Ptr{STL.StdVectors.StdVector{Int64}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_int64_t_equals(
    const std::vector<int64_t> * restrict vec1,
    const std::vector<int64_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Int8})
    res = ccall(("std_vector_int8_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int8}}, ())
    return StdVector{Int8}(res)::STL.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new(
    
) {
    return new std::vector<int8_t>;
}

/*
function StdVector_new(type::Type{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int8}}, (UInt64,), size)
    return StdVector{Int8}(res)::STL.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int8_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_delete(
    std::vector<int8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Int8}}, (Ptr{STL.StdVectors.StdVector{Int8}},), vec)
    return StdVector{Int8}(res)::STL.StdVectors.StdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_copy(
    const std::vector<int8_t> * restrict vec
) {
    return new std::vector<int8_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int8}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Int8}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int8_t_length(
    const std::vector<int8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Int8}, idx::Integer)
    res = ccall(("std_vector_int8_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdVectors.StdVector{Int8}}, UInt64), vec, idx)
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_vector_int8_t_getindex(
    std::vector<int8_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Int8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Int8}}, Ptr{Int8}, UInt64), vec, convert_arg(Ptr{Int8}, convert(Int8, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_setindex_(
    std::vector<int8_t> * restrict vec,
    int8_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Int8}, vec2::STL.StdVectors.StdVector{Int8})
    res = ccall(("std_vector_int8_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Int8}}, Ptr{STL.StdVectors.StdVector{Int8}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_int8_t_equals(
    const std::vector<int8_t> * restrict vec1,
    const std::vector<int8_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{Ptr{Nothing}})
    res = ccall(("std_vector_void___new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, ())
    return StdVector{Ptr{Nothing}}(res)::STL.StdVectors.StdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___new(
    
) {
    return new std::vector<void *>;
}

/*
function StdVector_new(type::Type{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_vector_void___new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, (UInt64,), size)
    return StdVector{Ptr{Nothing}}(res)::STL.StdVectors.StdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___new_std_size_t(
    std::size_t size
) {
    return new std::vector<void *>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_void___delete(
    std::vector<void *> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}},), vec)
    return StdVector{Ptr{Nothing}}(res)::STL.StdVectors.StdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___copy(
    const std::vector<void *> * restrict vec
) {
    return new std::vector<void *>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_vector_void___resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_void___resize_(
    std::vector<void *> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVectors.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_void___length(
    const std::vector<void *> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{Ptr{Nothing}}, idx::Integer)
    res = ccall(("std_vector_void___getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, UInt64), vec, idx)
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_vector_void___getindex(
    std::vector<void *> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{Ptr{Nothing}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_void___setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, UInt64), vec, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_void___setindex_(
    std::vector<void *> * restrict vec,
    void * const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{Ptr{Nothing}}, vec2::STL.StdVectors.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}, Ptr{STL.StdVectors.StdVector{Ptr{Nothing}}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_void___equals(
    const std::vector<void *> * restrict vec1,
    const std::vector<void *> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{STL.StdStrings.StdString})
    res = ccall(("std_vector_std__string_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, ())
    return StdVector{STL.StdStrings.StdString}(res)::STL.StdVectors.StdVector{STL.StdStrings.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new(
    
) {
    return new std::vector<std::string>;
}

/*
function StdVector_new(type::Type{STL.StdStrings.StdString}, size::Integer)
    res = ccall(("std_vector_std__string_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, (UInt64,), size)
    return StdVector{STL.StdStrings.StdString}(res)::STL.StdVectors.StdVector{STL.StdStrings.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::string>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString})
    res = ccall(("std_vector_std__string_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_delete(
    std::vector<std::string> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString})
    res = ccall(("std_vector_std__string_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}},), vec)
    return StdVector{STL.StdStrings.StdString}(res)::STL.StdVectors.StdVector{STL.StdStrings.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_copy(
    const std::vector<std::string> * restrict vec
) {
    return new std::vector<std::string>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString}, size::Integer)
    res = ccall(("std_vector_std__string_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_resize_(
    std::vector<std::string> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString})
    res = ccall(("std_vector_std__string_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__string_length(
    const std::vector<std::string> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString}, idx::Integer)
    res = ccall(("std_vector_std__string_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdStrings.StdString}, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, UInt64), vec, idx)
    return convert_result(STL.StdStrings.StdString, res)::STL.StdStrings.StdString
end
*/
extern "C" std::string * std_vector_std__string_getindex(
    std::vector<std::string> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{STL.StdStrings.StdString}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__string_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, Ptr{STL.StdStrings.StdString}, UInt64), vec, convert_arg(Ptr{STL.StdStrings.StdString}, convert(STL.StdStrings.StdString, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_setindex_(
    std::vector<std::string> * restrict vec,
    std::string const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{STL.StdStrings.StdString}, vec2::STL.StdVectors.StdVector{STL.StdStrings.StdString})
    res = ccall(("std_vector_std__string_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}, Ptr{STL.StdVectors.StdVector{STL.StdStrings.StdString}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__string_equals(
    const std::vector<std::string> * restrict vec1,
    const std::vector<std::string> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{UInt16})
    res = ccall(("std_vector_uint16_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt16}}, ())
    return StdVector{UInt16}(res)::STL.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new(
    
) {
    return new std::vector<uint16_t>;
}

/*
function StdVector_new(type::Type{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt16}}, (UInt64,), size)
    return StdVector{UInt16}(res)::STL.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint16_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_delete(
    std::vector<uint16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt16}}, (Ptr{STL.StdVectors.StdVector{UInt16}},), vec)
    return StdVector{UInt16}(res)::STL.StdVectors.StdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_copy(
    const std::vector<uint16_t> * restrict vec
) {
    return new std::vector<uint16_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt16}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{UInt16}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint16_t_length(
    const std::vector<uint16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{UInt16}, idx::Integer)
    res = ccall(("std_vector_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt16}, (Ptr{STL.StdVectors.StdVector{UInt16}}, UInt64), vec, idx)
    return convert_result(UInt16, res)::UInt16
end
*/
extern "C" uint16_t * std_vector_uint16_t_getindex(
    std::vector<uint16_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{UInt16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt16}}, Ptr{UInt16}, UInt64), vec, convert_arg(Ptr{UInt16}, convert(UInt16, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_setindex_(
    std::vector<uint16_t> * restrict vec,
    uint16_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{UInt16}, vec2::STL.StdVectors.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{UInt16}}, Ptr{STL.StdVectors.StdVector{UInt16}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_uint16_t_equals(
    const std::vector<uint16_t> * restrict vec1,
    const std::vector<uint16_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{UInt32})
    res = ccall(("std_vector_uint32_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt32}}, ())
    return StdVector{UInt32}(res)::STL.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new(
    
) {
    return new std::vector<uint32_t>;
}

/*
function StdVector_new(type::Type{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt32}}, (UInt64,), size)
    return StdVector{UInt32}(res)::STL.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint32_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_delete(
    std::vector<uint32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt32}}, (Ptr{STL.StdVectors.StdVector{UInt32}},), vec)
    return StdVector{UInt32}(res)::STL.StdVectors.StdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_copy(
    const std::vector<uint32_t> * restrict vec
) {
    return new std::vector<uint32_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{UInt32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint32_t_length(
    const std::vector<uint32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{UInt32}, idx::Integer)
    res = ccall(("std_vector_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt32}, (Ptr{STL.StdVectors.StdVector{UInt32}}, UInt64), vec, idx)
    return convert_result(UInt32, res)::UInt32
end
*/
extern "C" uint32_t * std_vector_uint32_t_getindex(
    std::vector<uint32_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{UInt32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt32}}, Ptr{UInt32}, UInt64), vec, convert_arg(Ptr{UInt32}, convert(UInt32, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_setindex_(
    std::vector<uint32_t> * restrict vec,
    uint32_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{UInt32}, vec2::STL.StdVectors.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{UInt32}}, Ptr{STL.StdVectors.StdVector{UInt32}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_uint32_t_equals(
    const std::vector<uint32_t> * restrict vec1,
    const std::vector<uint32_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{UInt64})
    res = ccall(("std_vector_uint64_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt64}}, ())
    return StdVector{UInt64}(res)::STL.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new(
    
) {
    return new std::vector<uint64_t>;
}

/*
function StdVector_new(type::Type{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt64}}, (UInt64,), size)
    return StdVector{UInt64}(res)::STL.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint64_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_delete(
    std::vector<uint64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt64}}, (Ptr{STL.StdVectors.StdVector{UInt64}},), vec)
    return StdVector{UInt64}(res)::STL.StdVectors.StdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_copy(
    const std::vector<uint64_t> * restrict vec
) {
    return new std::vector<uint64_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{UInt64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint64_t_length(
    const std::vector<uint64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{UInt64}, idx::Integer)
    res = ccall(("std_vector_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdVectors.StdVector{UInt64}}, UInt64), vec, idx)
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_vector_uint64_t_getindex(
    std::vector<uint64_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{UInt64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt64}}, Ptr{UInt64}, UInt64), vec, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_setindex_(
    std::vector<uint64_t> * restrict vec,
    uint64_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{UInt64}, vec2::STL.StdVectors.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{UInt64}}, Ptr{STL.StdVectors.StdVector{UInt64}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_uint64_t_equals(
    const std::vector<uint64_t> * restrict vec1,
    const std::vector<uint64_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function StdVector_new(type::Type{UInt8})
    res = ccall(("std_vector_uint8_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt8}}, ())
    return StdVector{UInt8}(res)::STL.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new(
    
) {
    return new std::vector<uint8_t>;
}

/*
function StdVector_new(type::Type{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_new_std_size_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt8}}, (UInt64,), size)
    return StdVector{UInt8}(res)::STL.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint8_t>(size);
}

/*
function StdVector_delete(vec::STL.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_delete(
    std::vector<uint8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdVectors.StdVector{UInt8}}, (Ptr{STL.StdVectors.StdVector{UInt8}},), vec)
    return StdVector{UInt8}(res)::STL.StdVectors.StdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_copy(
    const std::vector<uint8_t> * restrict vec
) {
    return new std::vector<uint8_t>(*vec);
}

/*
function Base.resize!(vec::STL.StdVectors.StdVector{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_resize_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt8}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_length", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdVectors.StdVector{UInt8}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint8_t_length(
    const std::vector<uint8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVectors.StdVector{UInt8}, idx::Integer)
    res = ccall(("std_vector_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt8}, (Ptr{STL.StdVectors.StdVector{UInt8}}, UInt64), vec, idx)
    return convert_result(UInt8, res)::UInt8
end
*/
extern "C" uint8_t * std_vector_uint8_t_getindex(
    std::vector<uint8_t> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVectors.StdVector{UInt8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdVectors.StdVector{UInt8}}, Ptr{UInt8}, UInt64), vec, convert_arg(Ptr{UInt8}, convert(UInt8, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_setindex_(
    std::vector<uint8_t> * restrict vec,
    uint8_t const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVectors.StdVector{UInt8}, vec2::STL.StdVectors.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdVectors.StdVector{UInt8}}, Ptr{STL.StdVectors.StdVector{UInt8}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_uint8_t_equals(
    const std::vector<uint8_t> * restrict vec1,
    const std::vector<uint8_t> * restrict vec2
) {
    return *vec1 == *vec2;
}


