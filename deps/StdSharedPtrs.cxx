#include <memory>

static_assert(sizeof(bool) == 1, "");


/*
function StdSharedPtr_new(type::Type{Bool})
    res = ccall(("std_shared_ptr_bool_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}, ())
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtrs.StdSharedPtr{Bool}
end
*/
extern "C" std::shared_ptr<bool> * std_shared_ptr_bool_new(
    
) {
    return new std::shared_ptr<bool>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_bool_delete(
    std::shared_ptr<bool> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtrs.StdSharedPtr{Bool}
end
*/
extern "C" std::shared_ptr<bool> * std_shared_ptr_bool_copy(
    std::shared_ptr<bool> * restrict ptr
) {
    return new std::shared_ptr<bool>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_bool_empty_(
    std::shared_ptr<bool> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_bool_isempty(
    const std::shared_ptr<bool> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_shared_ptr_bool_getindex(
    std::shared_ptr<bool> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool}, val::Any)
    res = ccall(("std_shared_ptr_bool_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}, Ptr{Bool}), ptr, convert_arg(Ptr{Bool}, convert(Bool, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_bool_setindex_(
    std::shared_ptr<bool> * restrict ptr,
    bool const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_bool_use_count(
    const std::shared_ptr<bool> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Bool}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_bool_equals(
    const std::shared_ptr<bool> * restrict ptr1,
    const std::shared_ptr<bool> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Bool}, val::Any)
    res = ccall(("std_make_shared_bool", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Bool}}, (Ptr{Bool},), convert_arg(Ptr{Bool}, convert(Bool, val)))
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtrs.StdSharedPtr{Bool}
end
*/
extern "C" std::shared_ptr<bool> * std_make_shared_bool(
    bool const * val
) {
    auto valptr = std::make_shared<bool>(*val);
auto ptr = new std::shared_ptr<bool>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}, ())
    return StdSharedPtr{ComplexF32}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_shared_ptr_float__Complex_new(
    
) {
    return new std::shared_ptr<float _Complex>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_delete(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return StdSharedPtr{ComplexF32}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_shared_ptr_float__Complex_copy(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    return new std::shared_ptr<float _Complex>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_empty_(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_float__Complex_isempty(
    const std::shared_ptr<float _Complex> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{ComplexF32}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return convert_result(ComplexF32, res)::ComplexF32
end
*/
extern "C" float _Complex * std_shared_ptr_float__Complex_getindex(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32}, val::Any)
    res = ccall(("std_shared_ptr_float__Complex_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}, Ptr{ComplexF32}), ptr, convert_arg(Ptr{ComplexF32}, convert(ComplexF32, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_setindex_(
    std::shared_ptr<float _Complex> * restrict ptr,
    float _Complex const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_float__Complex_use_count(
    const std::shared_ptr<float _Complex> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{ComplexF32}, ptr2::STL.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_float__Complex_equals(
    const std::shared_ptr<float _Complex> * restrict ptr1,
    const std::shared_ptr<float _Complex> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{ComplexF32}, val::Any)
    res = ccall(("std_make_shared_float__Complex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF32}}, (Ptr{ComplexF32},), convert_arg(Ptr{ComplexF32}, convert(ComplexF32, val)))
    return StdSharedPtr{ComplexF32}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_make_shared_float__Complex(
    float _Complex const * val
) {
    auto valptr = std::make_shared<float _Complex>(*val);
auto ptr = new std::shared_ptr<float _Complex>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}, ())
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_new(
    
) {
    return new std::shared_ptr<double _Complex>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_delete(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_copy(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    return new std::shared_ptr<double _Complex>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_empty_(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double__Complex_isempty(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{ComplexF64}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return convert_result(ComplexF64, res)::ComplexF64
end
*/
extern "C" double _Complex * std_shared_ptr_double__Complex_getindex(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64}, val::Any)
    res = ccall(("std_shared_ptr_double__Complex_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}, Ptr{ComplexF64}), ptr, convert_arg(Ptr{ComplexF64}, convert(ComplexF64, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_setindex_(
    std::shared_ptr<double _Complex> * restrict ptr,
    double _Complex const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double__Complex_use_count(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{ComplexF64}, ptr2::STL.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double__Complex_equals(
    const std::shared_ptr<double _Complex> * restrict ptr1,
    const std::shared_ptr<double _Complex> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{ComplexF64}, val::Any)
    res = ccall(("std_make_shared_double__Complex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{ComplexF64}}, (Ptr{ComplexF64},), convert_arg(Ptr{ComplexF64}, convert(ComplexF64, val)))
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_make_shared_double__Complex(
    double _Complex const * val
) {
    auto valptr = std::make_shared<double _Complex>(*val);
auto ptr = new std::shared_ptr<double _Complex>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Float32})
    res = ccall(("std_shared_ptr_float_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}, ())
    return StdSharedPtr{Float32}(res)::STL.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_shared_ptr_float_new(
    
) {
    return new std::shared_ptr<float>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_delete(
    std::shared_ptr<float> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return StdSharedPtr{Float32}(res)::STL.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_shared_ptr_float_copy(
    std::shared_ptr<float> * restrict ptr
) {
    return new std::shared_ptr<float>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_empty_(
    std::shared_ptr<float> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_float_isempty(
    const std::shared_ptr<float> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Float32}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return convert_result(Float32, res)::Float32
end
*/
extern "C" float * std_shared_ptr_float_getindex(
    std::shared_ptr<float> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32}, val::Any)
    res = ccall(("std_shared_ptr_float_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}, Ptr{Float32}), ptr, convert_arg(Ptr{Float32}, convert(Float32, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_setindex_(
    std::shared_ptr<float> * restrict ptr,
    float const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_float_use_count(
    const std::shared_ptr<float> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Float32}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_float_equals(
    const std::shared_ptr<float> * restrict ptr1,
    const std::shared_ptr<float> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Float32}, val::Any)
    res = ccall(("std_make_shared_float", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float32}}, (Ptr{Float32},), convert_arg(Ptr{Float32}, convert(Float32, val)))
    return StdSharedPtr{Float32}(res)::STL.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_make_shared_float(
    float const * val
) {
    auto valptr = std::make_shared<float>(*val);
auto ptr = new std::shared_ptr<float>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Float64})
    res = ccall(("std_shared_ptr_double_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}, ())
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_new(
    
) {
    return new std::shared_ptr<double>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_delete(
    std::shared_ptr<double> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_copy(
    std::shared_ptr<double> * restrict ptr
) {
    return new std::shared_ptr<double>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_empty_(
    std::shared_ptr<double> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double_isempty(
    const std::shared_ptr<double> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_shared_ptr_double_getindex(
    std::shared_ptr<double> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64}, val::Any)
    res = ccall(("std_shared_ptr_double_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}, Ptr{Float64}), ptr, convert_arg(Ptr{Float64}, convert(Float64, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_setindex_(
    std::shared_ptr<double> * restrict ptr,
    double const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double_use_count(
    const std::shared_ptr<double> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Float64}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double_equals(
    const std::shared_ptr<double> * restrict ptr1,
    const std::shared_ptr<double> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Float64}, val::Any)
    res = ccall(("std_make_shared_double", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Float64}}, (Ptr{Float64},), convert_arg(Ptr{Float64}, convert(Float64, val)))
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_make_shared_double(
    double const * val
) {
    auto valptr = std::make_shared<double>(*val);
auto ptr = new std::shared_ptr<double>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int16})
    res = ccall(("std_shared_ptr_int16_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}, ())
    return StdSharedPtr{Int16}(res)::STL.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_shared_ptr_int16_t_new(
    
) {
    return new std::shared_ptr<int16_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_delete(
    std::shared_ptr<int16_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return StdSharedPtr{Int16}(res)::STL.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_shared_ptr_int16_t_copy(
    std::shared_ptr<int16_t> * restrict ptr
) {
    return new std::shared_ptr<int16_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_empty_(
    std::shared_ptr<int16_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int16_t_isempty(
    const std::shared_ptr<int16_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int16}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return convert_result(Int16, res)::Int16
end
*/
extern "C" int16_t * std_shared_ptr_int16_t_getindex(
    std::shared_ptr<int16_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16}, val::Any)
    res = ccall(("std_shared_ptr_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}, Ptr{Int16}), ptr, convert_arg(Ptr{Int16}, convert(Int16, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_setindex_(
    std::shared_ptr<int16_t> * restrict ptr,
    int16_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int16_t_use_count(
    const std::shared_ptr<int16_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Int16}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int16_t_equals(
    const std::shared_ptr<int16_t> * restrict ptr1,
    const std::shared_ptr<int16_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Int16}, val::Any)
    res = ccall(("std_make_shared_int16_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int16}}, (Ptr{Int16},), convert_arg(Ptr{Int16}, convert(Int16, val)))
    return StdSharedPtr{Int16}(res)::STL.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_make_shared_int16_t(
    int16_t const * val
) {
    auto valptr = std::make_shared<int16_t>(*val);
auto ptr = new std::shared_ptr<int16_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int32})
    res = ccall(("std_shared_ptr_int32_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}, ())
    return StdSharedPtr{Int32}(res)::STL.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_shared_ptr_int32_t_new(
    
) {
    return new std::shared_ptr<int32_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_delete(
    std::shared_ptr<int32_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return StdSharedPtr{Int32}(res)::STL.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_shared_ptr_int32_t_copy(
    std::shared_ptr<int32_t> * restrict ptr
) {
    return new std::shared_ptr<int32_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_empty_(
    std::shared_ptr<int32_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int32_t_isempty(
    const std::shared_ptr<int32_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int32}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return convert_result(Int32, res)::Int32
end
*/
extern "C" int32_t * std_shared_ptr_int32_t_getindex(
    std::shared_ptr<int32_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32}, val::Any)
    res = ccall(("std_shared_ptr_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}, Ptr{Int32}), ptr, convert_arg(Ptr{Int32}, convert(Int32, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_setindex_(
    std::shared_ptr<int32_t> * restrict ptr,
    int32_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int32_t_use_count(
    const std::shared_ptr<int32_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Int32}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int32_t_equals(
    const std::shared_ptr<int32_t> * restrict ptr1,
    const std::shared_ptr<int32_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Int32}, val::Any)
    res = ccall(("std_make_shared_int32_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int32}}, (Ptr{Int32},), convert_arg(Ptr{Int32}, convert(Int32, val)))
    return StdSharedPtr{Int32}(res)::STL.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_make_shared_int32_t(
    int32_t const * val
) {
    auto valptr = std::make_shared<int32_t>(*val);
auto ptr = new std::shared_ptr<int32_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int64})
    res = ccall(("std_shared_ptr_int64_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}, ())
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_new(
    
) {
    return new std::shared_ptr<int64_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_delete(
    std::shared_ptr<int64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_copy(
    std::shared_ptr<int64_t> * restrict ptr
) {
    return new std::shared_ptr<int64_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_empty_(
    std::shared_ptr<int64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int64_t_isempty(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_shared_ptr_int64_t_getindex(
    std::shared_ptr<int64_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64}, val::Any)
    res = ccall(("std_shared_ptr_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}, Ptr{Int64}), ptr, convert_arg(Ptr{Int64}, convert(Int64, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_setindex_(
    std::shared_ptr<int64_t> * restrict ptr,
    int64_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int64_t_use_count(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Int64}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int64_t_equals(
    const std::shared_ptr<int64_t> * restrict ptr1,
    const std::shared_ptr<int64_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Int64}, val::Any)
    res = ccall(("std_make_shared_int64_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int64}}, (Ptr{Int64},), convert_arg(Ptr{Int64}, convert(Int64, val)))
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_make_shared_int64_t(
    int64_t const * val
) {
    auto valptr = std::make_shared<int64_t>(*val);
auto ptr = new std::shared_ptr<int64_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int8})
    res = ccall(("std_shared_ptr_int8_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}, ())
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_new(
    
) {
    return new std::shared_ptr<int8_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_delete(
    std::shared_ptr<int8_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_copy(
    std::shared_ptr<int8_t> * restrict ptr
) {
    return new std::shared_ptr<int8_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_empty_(
    std::shared_ptr<int8_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int8_t_isempty(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_shared_ptr_int8_t_getindex(
    std::shared_ptr<int8_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8}, val::Any)
    res = ccall(("std_shared_ptr_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}, Ptr{Int8}), ptr, convert_arg(Ptr{Int8}, convert(Int8, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_setindex_(
    std::shared_ptr<int8_t> * restrict ptr,
    int8_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int8_t_use_count(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Int8}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int8_t_equals(
    const std::shared_ptr<int8_t> * restrict ptr1,
    const std::shared_ptr<int8_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Int8}, val::Any)
    res = ccall(("std_make_shared_int8_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Int8}}, (Ptr{Int8},), convert_arg(Ptr{Int8}, convert(Int8, val)))
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_make_shared_int8_t(
    int8_t const * val
) {
    auto valptr = std::make_shared<int8_t>(*val);
auto ptr = new std::shared_ptr<int8_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}, ())
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}
end
*/
extern "C" std::shared_ptr<void *> * std_shared_ptr_void___new(
    
) {
    return new std::shared_ptr<void *>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_void___delete(
    std::shared_ptr<void *> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}
end
*/
extern "C" std::shared_ptr<void *> * std_shared_ptr_void___copy(
    std::shared_ptr<void *> * restrict ptr
) {
    return new std::shared_ptr<void *>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_void___empty_(
    std::shared_ptr<void *> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_void___isempty(
    const std::shared_ptr<void *> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_shared_ptr_void___getindex(
    std::shared_ptr<void *> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}, val::Any)
    res = ccall(("std_shared_ptr_void___setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}, Ptr{Ptr{Nothing}}), ptr, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_void___setindex_(
    std::shared_ptr<void *> * restrict ptr,
    void * const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_void___use_count(
    const std::shared_ptr<void *> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}, ptr2::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_void___equals(
    const std::shared_ptr<void *> * restrict ptr1,
    const std::shared_ptr<void *> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{Ptr{Nothing}}, val::Any)
    res = ccall(("std_make_shared_void__", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}}, (Ptr{Ptr{Nothing}},), convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, val)))
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtrs.StdSharedPtr{Ptr{Nothing}}
end
*/
extern "C" std::shared_ptr<void *> * std_make_shared_void__(
    void * const * val
) {
    auto valptr = std::make_shared<void *>(*val);
auto ptr = new std::shared_ptr<void *>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}, ())
    return StdSharedPtr{UInt16}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_shared_ptr_uint16_t_new(
    
) {
    return new std::shared_ptr<uint16_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_delete(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return StdSharedPtr{UInt16}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_shared_ptr_uint16_t_copy(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    return new std::shared_ptr<uint16_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_empty_(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint16_t_isempty(
    const std::shared_ptr<uint16_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt16}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return convert_result(UInt16, res)::UInt16
end
*/
extern "C" uint16_t * std_shared_ptr_uint16_t_getindex(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16}, val::Any)
    res = ccall(("std_shared_ptr_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}, Ptr{UInt16}), ptr, convert_arg(Ptr{UInt16}, convert(UInt16, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_setindex_(
    std::shared_ptr<uint16_t> * restrict ptr,
    uint16_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint16_t_use_count(
    const std::shared_ptr<uint16_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{UInt16}, ptr2::STL.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint16_t_equals(
    const std::shared_ptr<uint16_t> * restrict ptr1,
    const std::shared_ptr<uint16_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{UInt16}, val::Any)
    res = ccall(("std_make_shared_uint16_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt16}}, (Ptr{UInt16},), convert_arg(Ptr{UInt16}, convert(UInt16, val)))
    return StdSharedPtr{UInt16}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_make_shared_uint16_t(
    uint16_t const * val
) {
    auto valptr = std::make_shared<uint16_t>(*val);
auto ptr = new std::shared_ptr<uint16_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}, ())
    return StdSharedPtr{UInt32}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_shared_ptr_uint32_t_new(
    
) {
    return new std::shared_ptr<uint32_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_delete(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return StdSharedPtr{UInt32}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_shared_ptr_uint32_t_copy(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    return new std::shared_ptr<uint32_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_empty_(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint32_t_isempty(
    const std::shared_ptr<uint32_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt32}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return convert_result(UInt32, res)::UInt32
end
*/
extern "C" uint32_t * std_shared_ptr_uint32_t_getindex(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32}, val::Any)
    res = ccall(("std_shared_ptr_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}, Ptr{UInt32}), ptr, convert_arg(Ptr{UInt32}, convert(UInt32, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_setindex_(
    std::shared_ptr<uint32_t> * restrict ptr,
    uint32_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint32_t_use_count(
    const std::shared_ptr<uint32_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{UInt32}, ptr2::STL.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint32_t_equals(
    const std::shared_ptr<uint32_t> * restrict ptr1,
    const std::shared_ptr<uint32_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{UInt32}, val::Any)
    res = ccall(("std_make_shared_uint32_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt32}}, (Ptr{UInt32},), convert_arg(Ptr{UInt32}, convert(UInt32, val)))
    return StdSharedPtr{UInt32}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_make_shared_uint32_t(
    uint32_t const * val
) {
    auto valptr = std::make_shared<uint32_t>(*val);
auto ptr = new std::shared_ptr<uint32_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}, ())
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_new(
    
) {
    return new std::shared_ptr<uint64_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_delete(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_copy(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    return new std::shared_ptr<uint64_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_empty_(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint64_t_isempty(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_shared_ptr_uint64_t_getindex(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64}, val::Any)
    res = ccall(("std_shared_ptr_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}, Ptr{UInt64}), ptr, convert_arg(Ptr{UInt64}, convert(UInt64, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_setindex_(
    std::shared_ptr<uint64_t> * restrict ptr,
    uint64_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint64_t_use_count(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{UInt64}, ptr2::STL.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint64_t_equals(
    const std::shared_ptr<uint64_t> * restrict ptr1,
    const std::shared_ptr<uint64_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{UInt64}, val::Any)
    res = ccall(("std_make_shared_uint64_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt64}}, (Ptr{UInt64},), convert_arg(Ptr{UInt64}, convert(UInt64, val)))
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_make_shared_uint64_t(
    uint64_t const * val
) {
    auto valptr = std::make_shared<uint64_t>(*val);
auto ptr = new std::shared_ptr<uint64_t>;
ptr->swap(valptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_new", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}, ())
    return StdSharedPtr{UInt8}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_shared_ptr_uint8_t_new(
    
) {
    return new std::shared_ptr<uint8_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_delete", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_delete(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_copy", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return StdSharedPtr{UInt8}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_shared_ptr_uint8_t_copy(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    return new std::shared_ptr<uint8_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_empty_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_empty_(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_isempty", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint8_t_isempty(
    const std::shared_ptr<uint8_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{UInt8}, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return convert_result(UInt8, res)::UInt8
end
*/
extern "C" uint8_t * std_shared_ptr_uint8_t_getindex(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8}, val::Any)
    res = ccall(("std_shared_ptr_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}, Ptr{UInt8}), ptr, convert_arg(Ptr{UInt8}, convert(UInt8, val)))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_setindex_(
    std::shared_ptr<uint8_t> * restrict ptr,
    uint8_t const * val
) {
    **ptr = *val;
}

/*
function use_count(ptr::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_use_count", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint8_t_use_count(
    const std::shared_ptr<uint8_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtrs.StdSharedPtr{UInt8}, ptr2::STL.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_equals", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}, Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}), ptr1, ptr2)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint8_t_equals(
    const std::shared_ptr<uint8_t> * restrict ptr1,
    const std::shared_ptr<uint8_t> * restrict ptr2
) {
    return *ptr1 == *ptr2;
}

/*
function make_shared(type::Type{UInt8}, val::Any)
    res = ccall(("std_make_shared_uint8_t", "/Users/eschnett/.julia/artifacts/22925fb8ad6d21c160844920eed53ac7663b368c/lib/libSTL.dylib"), Ptr{STL.StdSharedPtrs.StdSharedPtr{UInt8}}, (Ptr{UInt8},), convert_arg(Ptr{UInt8}, convert(UInt8, val)))
    return StdSharedPtr{UInt8}(res)::STL.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_make_shared_uint8_t(
    uint8_t const * val
) {
    auto valptr = std::make_shared<uint8_t>(*val);
auto ptr = new std::shared_ptr<uint8_t>;
ptr->swap(valptr);
return ptr;

}


