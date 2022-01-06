#include <ccomplex>
#include <cstdint>

#include <memory>


/*
function StdSharedPtr_new(type::Type{Bool})
    res = ccall(("std_shared_ptr_bool_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Bool}}, ())
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtr{Bool}
end
*/
extern "C" std::shared_ptr<bool> * std_shared_ptr_bool_new(
    
) {
    return new std::shared_ptr<bool>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_bool_delete(
    std::shared_ptr<bool> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Bool}}, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtr{Bool}
end
*/
extern "C" std::shared_ptr<bool> * std_shared_ptr_bool_copy(
    std::shared_ptr<bool> * restrict ptr
) {
    return new std::shared_ptr<bool>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_bool_empty_(
    std::shared_ptr<bool> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_bool_isempty(
    const std::shared_ptr<bool> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_getindex", "libSTL.dylib"), Ptr{Bool}, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return convert_result(Bool, res)::Bool
end
*/
extern "C" bool * std_shared_ptr_bool_getindex(
    std::shared_ptr<bool> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{Bool}, val::Any)
    res = ccall(("std_shared_ptr_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Bool}}, Ptr{Bool}), ptr, convert_arg(Ptr{Bool}, convert(Bool, val)))
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
function use_count(ptr::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{Bool}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_bool_use_count(
    const std::shared_ptr<bool> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{Bool}, ptr2::STL.StdSharedPtr{Bool})
    res = ccall(("std_shared_ptr_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Bool}}, Ptr{STL.StdSharedPtr{Bool}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_bool", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Bool}}, (Ptr{Bool},), convert_arg(Ptr{Bool}, convert(Bool, val)))
    return StdSharedPtr{Bool}(res)::STL.StdSharedPtr{Bool}
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
function StdSharedPtr_new(type::Type{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{ComplexF64}}, ())
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_new(
    
) {
    return new std::shared_ptr<double _Complex>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_delete(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{ComplexF64}}, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_copy(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    return new std::shared_ptr<double _Complex>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_empty_(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double__Complex_isempty(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_getindex", "libSTL.dylib"), Ptr{ComplexF64}, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return convert_result(ComplexF64, res)::ComplexF64
end
*/
extern "C" double _Complex * std_shared_ptr_double__Complex_getindex(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{ComplexF64}, val::Any)
    res = ccall(("std_shared_ptr_double__Complex_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{ComplexF64}}, Ptr{ComplexF64}), ptr, convert_arg(Ptr{ComplexF64}, convert(ComplexF64, val)))
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
function use_count(ptr::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{ComplexF64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double__Complex_use_count(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{ComplexF64}, ptr2::STL.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{ComplexF64}}, Ptr{STL.StdSharedPtr{ComplexF64}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_double__Complex", "libSTL.dylib"), Ptr{STL.StdSharedPtr{ComplexF64}}, (Ptr{ComplexF64},), convert_arg(Ptr{ComplexF64}, convert(ComplexF64, val)))
    return StdSharedPtr{ComplexF64}(res)::STL.StdSharedPtr{ComplexF64}
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
function StdSharedPtr_new(type::Type{Float64})
    res = ccall(("std_shared_ptr_double_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Float64}}, ())
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_new(
    
) {
    return new std::shared_ptr<double>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_delete(
    std::shared_ptr<double> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Float64}}, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_copy(
    std::shared_ptr<double> * restrict ptr
) {
    return new std::shared_ptr<double>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_empty_(
    std::shared_ptr<double> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_double_isempty(
    const std::shared_ptr<double> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return convert_result(Float64, res)::Float64
end
*/
extern "C" double * std_shared_ptr_double_getindex(
    std::shared_ptr<double> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{Float64}, val::Any)
    res = ccall(("std_shared_ptr_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Float64}}, Ptr{Float64}), ptr, convert_arg(Ptr{Float64}, convert(Float64, val)))
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
function use_count(ptr::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{Float64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double_use_count(
    const std::shared_ptr<double> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{Float64}, ptr2::STL.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Float64}}, Ptr{STL.StdSharedPtr{Float64}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_double", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Float64}}, (Ptr{Float64},), convert_arg(Ptr{Float64}, convert(Float64, val)))
    return StdSharedPtr{Float64}(res)::STL.StdSharedPtr{Float64}
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
function StdSharedPtr_new(type::Type{Int64})
    res = ccall(("std_shared_ptr_int64_t_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int64}}, ())
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_new(
    
) {
    return new std::shared_ptr<int64_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_delete(
    std::shared_ptr<int64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int64}}, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_copy(
    std::shared_ptr<int64_t> * restrict ptr
) {
    return new std::shared_ptr<int64_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_empty_(
    std::shared_ptr<int64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int64_t_isempty(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return convert_result(Int64, res)::Int64
end
*/
extern "C" int64_t * std_shared_ptr_int64_t_getindex(
    std::shared_ptr<int64_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{Int64}, val::Any)
    res = ccall(("std_shared_ptr_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int64}}, Ptr{Int64}), ptr, convert_arg(Ptr{Int64}, convert(Int64, val)))
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
function use_count(ptr::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{Int64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int64_t_use_count(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{Int64}, ptr2::STL.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Int64}}, Ptr{STL.StdSharedPtr{Int64}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_int64_t", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int64}}, (Ptr{Int64},), convert_arg(Ptr{Int64}, convert(Int64, val)))
    return StdSharedPtr{Int64}(res)::STL.StdSharedPtr{Int64}
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
    res = ccall(("std_shared_ptr_int8_t_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int8}}, ())
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_new(
    
) {
    return new std::shared_ptr<int8_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_delete(
    std::shared_ptr<int8_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int8}}, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_copy(
    std::shared_ptr<int8_t> * restrict ptr
) {
    return new std::shared_ptr<int8_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_empty_(
    std::shared_ptr<int8_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_int8_t_isempty(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return convert_result(Int8, res)::Int8
end
*/
extern "C" int8_t * std_shared_ptr_int8_t_getindex(
    std::shared_ptr<int8_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{Int8}, val::Any)
    res = ccall(("std_shared_ptr_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Int8}}, Ptr{Int8}), ptr, convert_arg(Ptr{Int8}, convert(Int8, val)))
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
function use_count(ptr::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{Int8}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int8_t_use_count(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{Int8}, ptr2::STL.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Int8}}, Ptr{STL.StdSharedPtr{Int8}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_int8_t", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Int8}}, (Ptr{Int8},), convert_arg(Ptr{Int8}, convert(Int8, val)))
    return StdSharedPtr{Int8}(res)::STL.StdSharedPtr{Int8}
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
    res = ccall(("std_shared_ptr_void___new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Ptr{Nothing}}}, ())
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtr{Ptr{Nothing}}
end
*/
extern "C" std::shared_ptr<void *> * std_shared_ptr_void___new(
    
) {
    return new std::shared_ptr<void *>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_void___delete(
    std::shared_ptr<void *> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Ptr{Nothing}}}, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtr{Ptr{Nothing}}
end
*/
extern "C" std::shared_ptr<void *> * std_shared_ptr_void___copy(
    std::shared_ptr<void *> * restrict ptr
) {
    return new std::shared_ptr<void *>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_void___empty_(
    std::shared_ptr<void *> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_void___isempty(
    const std::shared_ptr<void *> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return convert_result(Ptr{Nothing}, res)::Ptr{Nothing}
end
*/
extern "C" void * * std_shared_ptr_void___getindex(
    std::shared_ptr<void *> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{Ptr{Nothing}}, val::Any)
    res = ccall(("std_shared_ptr_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}}, Ptr{Ptr{Nothing}}), ptr, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, val)))
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
function use_count(ptr::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_void___use_count(
    const std::shared_ptr<void *> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{Ptr{Nothing}}, ptr2::STL.StdSharedPtr{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{Ptr{Nothing}}}, Ptr{STL.StdSharedPtr{Ptr{Nothing}}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_void__", "libSTL.dylib"), Ptr{STL.StdSharedPtr{Ptr{Nothing}}}, (Ptr{Ptr{Nothing}},), convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, val)))
    return StdSharedPtr{Ptr{Nothing}}(res)::STL.StdSharedPtr{Ptr{Nothing}}
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
function StdSharedPtr_new(type::Type{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdSharedPtr{UInt64}}, ())
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_new(
    
) {
    return new std::shared_ptr<uint64_t>;
}

/*
function StdSharedPtr_delete(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_delete(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdSharedPtr{UInt64}}, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_copy(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    return new std::shared_ptr<uint64_t>(*ptr);
}

/*
function Base.empty!(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_empty_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_empty_(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_isempty", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return res::Bool
end
*/
extern "C" bool std_shared_ptr_uint64_t_isempty(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return convert_result(UInt64, res)::UInt64
end
*/
extern "C" uint64_t * std_shared_ptr_uint64_t_getindex(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    return &**ptr;
}

/*
function Base.setindex!(ptr::STL.StdSharedPtr{UInt64}, val::Any)
    res = ccall(("std_shared_ptr_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdSharedPtr{UInt64}}, Ptr{UInt64}), ptr, convert_arg(Ptr{UInt64}, convert(UInt64, val)))
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
function use_count(ptr::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_use_count", "libSTL.dylib"), UInt64, (Ptr{STL.StdSharedPtr{UInt64}},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint64_t_use_count(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function Base.:(==)(ptr1::STL.StdSharedPtr{UInt64}, ptr2::STL.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdSharedPtr{UInt64}}, Ptr{STL.StdSharedPtr{UInt64}}), ptr1, ptr2)
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
    res = ccall(("std_make_shared_uint64_t", "libSTL.dylib"), Ptr{STL.StdSharedPtr{UInt64}}, (Ptr{UInt64},), convert_arg(Ptr{UInt64}, convert(UInt64, val)))
    return StdSharedPtr{UInt64}(res)::STL.StdSharedPtr{UInt64}
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

