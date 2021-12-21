#include <ccomplex>
#include <cstdint>

#include <memory>
#include <utility>


/*
function StdSharedPtr_new(type::Type{Int8})
    res = ccall(("std_shared_ptr_int8_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Int8}(res)::Main.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_new(
    
) {
    return new std::shared_ptr<int8_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_delete(
    std::shared_ptr<int8_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Int8}(res)::Main.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_shared_ptr_int8_t_copy(
    std::shared_ptr<int8_t> * restrict ptr
) {
    return new std::shared_ptr<int8_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_empty_(
    std::shared_ptr<int8_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_int8_t_isempty(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int8, (Ptr{Nothing},), ptr)
    return res::Int8
end
*/
extern "C" int8_t std_shared_ptr_int8_t_getindex(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8}, val::Int8)
    res = ccall(("std_shared_ptr_int8_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int8_t_setindex_(
    std::shared_ptr<int8_t> * restrict ptr,
    int8_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<int8_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Int8})
    res = ccall(("std_shared_ptr_int8_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int8_t_use_count(
    const std::shared_ptr<int8_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Int8)
    res = ccall(("std_make_shared_int8_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Int8, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Int8}
end
*/
extern "C" std::shared_ptr<int8_t> * std_make_shared_int8_t(
    int8_t val
) {
    auto ptr = new std::shared_ptr<int8_t>;
auto newptr = std::make_shared<int8_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int16})
    res = ccall(("std_shared_ptr_int16_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Int16}(res)::Main.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_shared_ptr_int16_t_new(
    
) {
    return new std::shared_ptr<int16_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_delete(
    std::shared_ptr<int16_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Int16}(res)::Main.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_shared_ptr_int16_t_copy(
    std::shared_ptr<int16_t> * restrict ptr
) {
    return new std::shared_ptr<int16_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_empty_(
    std::shared_ptr<int16_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_int16_t_isempty(
    const std::shared_ptr<int16_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int16, (Ptr{Nothing},), ptr)
    return res::Int16
end
*/
extern "C" int16_t std_shared_ptr_int16_t_getindex(
    const std::shared_ptr<int16_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16}, val::Int16)
    res = ccall(("std_shared_ptr_int16_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int16), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int16_t_setindex_(
    std::shared_ptr<int16_t> * restrict ptr,
    int16_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<int16_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Int16})
    res = ccall(("std_shared_ptr_int16_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int16_t_use_count(
    const std::shared_ptr<int16_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Int16)
    res = ccall(("std_make_shared_int16_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Int16, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Int16}
end
*/
extern "C" std::shared_ptr<int16_t> * std_make_shared_int16_t(
    int16_t val
) {
    auto ptr = new std::shared_ptr<int16_t>;
auto newptr = std::make_shared<int16_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int64})
    res = ccall(("std_shared_ptr_int64_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Int64}(res)::Main.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_new(
    
) {
    return new std::shared_ptr<int64_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_delete(
    std::shared_ptr<int64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Int64}(res)::Main.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_shared_ptr_int64_t_copy(
    std::shared_ptr<int64_t> * restrict ptr
) {
    return new std::shared_ptr<int64_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_empty_(
    std::shared_ptr<int64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_int64_t_isempty(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int64, (Ptr{Nothing},), ptr)
    return res::Int64
end
*/
extern "C" int64_t std_shared_ptr_int64_t_getindex(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64}, val::Int64)
    res = ccall(("std_shared_ptr_int64_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int64), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int64_t_setindex_(
    std::shared_ptr<int64_t> * restrict ptr,
    int64_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<int64_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Int64})
    res = ccall(("std_shared_ptr_int64_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int64_t_use_count(
    const std::shared_ptr<int64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Int64)
    res = ccall(("std_make_shared_int64_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Int64, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Int64}
end
*/
extern "C" std::shared_ptr<int64_t> * std_make_shared_int64_t(
    int64_t val
) {
    auto ptr = new std::shared_ptr<int64_t>;
auto newptr = std::make_shared<int64_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{UInt32}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_shared_ptr_uint32_t_new(
    
) {
    return new std::shared_ptr<uint32_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_delete(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{UInt32}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_shared_ptr_uint32_t_copy(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    return new std::shared_ptr<uint32_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_empty_(
    std::shared_ptr<uint32_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_uint32_t_isempty(
    const std::shared_ptr<uint32_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt32, (Ptr{Nothing},), ptr)
    return res::UInt32
end
*/
extern "C" uint32_t std_shared_ptr_uint32_t_getindex(
    const std::shared_ptr<uint32_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32}, val::UInt32)
    res = ccall(("std_shared_ptr_uint32_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt32), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint32_t_setindex_(
    std::shared_ptr<uint32_t> * restrict ptr,
    uint32_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<uint32_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt32})
    res = ccall(("std_shared_ptr_uint32_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint32_t_use_count(
    const std::shared_ptr<uint32_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::UInt32)
    res = ccall(("std_make_shared_uint32_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(UInt32, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{UInt32}
end
*/
extern "C" std::shared_ptr<uint32_t> * std_make_shared_uint32_t(
    uint32_t val
) {
    auto ptr = new std::shared_ptr<uint32_t>;
auto newptr = std::make_shared<uint32_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Float64})
    res = ccall(("std_shared_ptr_double_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Float64}(res)::Main.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_new(
    
) {
    return new std::shared_ptr<double>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_delete(
    std::shared_ptr<double> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Float64}(res)::Main.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_shared_ptr_double_copy(
    std::shared_ptr<double> * restrict ptr
) {
    return new std::shared_ptr<double>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_empty_(
    std::shared_ptr<double> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_double_isempty(
    const std::shared_ptr<double> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Float64, (Ptr{Nothing},), ptr)
    return res::Float64
end
*/
extern "C" double std_shared_ptr_double_getindex(
    const std::shared_ptr<double> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64}, val::Float64)
    res = ccall(("std_shared_ptr_double_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float64), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double_setindex_(
    std::shared_ptr<double> * restrict ptr,
    double val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<double>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Float64})
    res = ccall(("std_shared_ptr_double_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double_use_count(
    const std::shared_ptr<double> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Float64)
    res = ccall(("std_make_shared_double", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Float64, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Float64}
end
*/
extern "C" std::shared_ptr<double> * std_make_shared_double(
    double val
) {
    auto ptr = new std::shared_ptr<double>;
auto newptr = std::make_shared<double>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Int32})
    res = ccall(("std_shared_ptr_int32_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Int32}(res)::Main.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_shared_ptr_int32_t_new(
    
) {
    return new std::shared_ptr<int32_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_delete(
    std::shared_ptr<int32_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Int32}(res)::Main.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_shared_ptr_int32_t_copy(
    std::shared_ptr<int32_t> * restrict ptr
) {
    return new std::shared_ptr<int32_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_empty_(
    std::shared_ptr<int32_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_int32_t_isempty(
    const std::shared_ptr<int32_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return res::Int32
end
*/
extern "C" int32_t std_shared_ptr_int32_t_getindex(
    const std::shared_ptr<int32_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32}, val::Int32)
    res = ccall(("std_shared_ptr_int32_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int32), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_int32_t_setindex_(
    std::shared_ptr<int32_t> * restrict ptr,
    int32_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<int32_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Int32})
    res = ccall(("std_shared_ptr_int32_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_int32_t_use_count(
    const std::shared_ptr<int32_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Int32)
    res = ccall(("std_make_shared_int32_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Int32, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Int32}
end
*/
extern "C" std::shared_ptr<int32_t> * std_make_shared_int32_t(
    int32_t val
) {
    auto ptr = new std::shared_ptr<int32_t>;
auto newptr = std::make_shared<int32_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{ComplexF32}(res)::Main.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_shared_ptr_float__Complex_new(
    
) {
    return new std::shared_ptr<float _Complex>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_delete(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{ComplexF32}(res)::Main.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_shared_ptr_float__Complex_copy(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    return new std::shared_ptr<float _Complex>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_empty_(
    std::shared_ptr<float _Complex> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_float__Complex_isempty(
    const std::shared_ptr<float _Complex> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), ComplexF32, (Ptr{Nothing},), ptr)
    return res::ComplexF32
end
*/
extern "C" float _Complex std_shared_ptr_float__Complex_getindex(
    const std::shared_ptr<float _Complex> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32}, val::ComplexF32)
    res = ccall(("std_shared_ptr_float__Complex_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, ComplexF32), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float__Complex_setindex_(
    std::shared_ptr<float _Complex> * restrict ptr,
    float _Complex val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<float _Complex>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF32})
    res = ccall(("std_shared_ptr_float__Complex_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_float__Complex_use_count(
    const std::shared_ptr<float _Complex> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::ComplexF32)
    res = ccall(("std_make_shared_float__Complex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(ComplexF32, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{ComplexF32}
end
*/
extern "C" std::shared_ptr<float _Complex> * std_make_shared_float__Complex(
    float _Complex val
) {
    auto ptr = new std::shared_ptr<float _Complex>;
auto newptr = std::make_shared<float _Complex>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{UInt64}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_new(
    
) {
    return new std::shared_ptr<uint64_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_delete(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{UInt64}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_shared_ptr_uint64_t_copy(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    return new std::shared_ptr<uint64_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_empty_(
    std::shared_ptr<uint64_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_uint64_t_isempty(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return res::UInt64
end
*/
extern "C" uint64_t std_shared_ptr_uint64_t_getindex(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64}, val::UInt64)
    res = ccall(("std_shared_ptr_uint64_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint64_t_setindex_(
    std::shared_ptr<uint64_t> * restrict ptr,
    uint64_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<uint64_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt64})
    res = ccall(("std_shared_ptr_uint64_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint64_t_use_count(
    const std::shared_ptr<uint64_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::UInt64)
    res = ccall(("std_make_shared_uint64_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(UInt64, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{UInt64}
end
*/
extern "C" std::shared_ptr<uint64_t> * std_make_shared_uint64_t(
    uint64_t val
) {
    auto ptr = new std::shared_ptr<uint64_t>;
auto newptr = std::make_shared<uint64_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{Float32})
    res = ccall(("std_shared_ptr_float_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{Float32}(res)::Main.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_shared_ptr_float_new(
    
) {
    return new std::shared_ptr<float>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_delete(
    std::shared_ptr<float> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{Float32}(res)::Main.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_shared_ptr_float_copy(
    std::shared_ptr<float> * restrict ptr
) {
    return new std::shared_ptr<float>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_empty_(
    std::shared_ptr<float> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_float_isempty(
    const std::shared_ptr<float> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Float32, (Ptr{Nothing},), ptr)
    return res::Float32
end
*/
extern "C" float std_shared_ptr_float_getindex(
    const std::shared_ptr<float> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32}, val::Float32)
    res = ccall(("std_shared_ptr_float_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Float32), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_float_setindex_(
    std::shared_ptr<float> * restrict ptr,
    float val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<float>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{Float32})
    res = ccall(("std_shared_ptr_float_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_float_use_count(
    const std::shared_ptr<float> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::Float32)
    res = ccall(("std_make_shared_float", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(Float32, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{Float32}
end
*/
extern "C" std::shared_ptr<float> * std_make_shared_float(
    float val
) {
    auto ptr = new std::shared_ptr<float>;
auto newptr = std::make_shared<float>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{ComplexF64}(res)::Main.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_new(
    
) {
    return new std::shared_ptr<double _Complex>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_delete(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{ComplexF64}(res)::Main.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_shared_ptr_double__Complex_copy(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    return new std::shared_ptr<double _Complex>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_empty_(
    std::shared_ptr<double _Complex> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_double__Complex_isempty(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), ComplexF64, (Ptr{Nothing},), ptr)
    return res::ComplexF64
end
*/
extern "C" double _Complex std_shared_ptr_double__Complex_getindex(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64}, val::ComplexF64)
    res = ccall(("std_shared_ptr_double__Complex_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, ComplexF64), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_double__Complex_setindex_(
    std::shared_ptr<double _Complex> * restrict ptr,
    double _Complex val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<double _Complex>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{ComplexF64})
    res = ccall(("std_shared_ptr_double__Complex_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_double__Complex_use_count(
    const std::shared_ptr<double _Complex> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::ComplexF64)
    res = ccall(("std_make_shared_double__Complex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(ComplexF64, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{ComplexF64}
end
*/
extern "C" std::shared_ptr<double _Complex> * std_make_shared_double__Complex(
    double _Complex val
) {
    auto ptr = new std::shared_ptr<double _Complex>;
auto newptr = std::make_shared<double _Complex>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{UInt8}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_shared_ptr_uint8_t_new(
    
) {
    return new std::shared_ptr<uint8_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_delete(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{UInt8}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_shared_ptr_uint8_t_copy(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    return new std::shared_ptr<uint8_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_empty_(
    std::shared_ptr<uint8_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_uint8_t_isempty(
    const std::shared_ptr<uint8_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt8, (Ptr{Nothing},), ptr)
    return res::UInt8
end
*/
extern "C" uint8_t std_shared_ptr_uint8_t_getindex(
    const std::shared_ptr<uint8_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8}, val::UInt8)
    res = ccall(("std_shared_ptr_uint8_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt8), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint8_t_setindex_(
    std::shared_ptr<uint8_t> * restrict ptr,
    uint8_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<uint8_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt8})
    res = ccall(("std_shared_ptr_uint8_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint8_t_use_count(
    const std::shared_ptr<uint8_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::UInt8)
    res = ccall(("std_make_shared_uint8_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(UInt8, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{UInt8}
end
*/
extern "C" std::shared_ptr<uint8_t> * std_make_shared_uint8_t(
    uint8_t val
) {
    auto ptr = new std::shared_ptr<uint8_t>;
auto newptr = std::make_shared<uint8_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}

/*
function StdSharedPtr_new(type::Type{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_new", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdSharedPtr{UInt16}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_shared_ptr_uint16_t_new(
    
) {
    return new std::shared_ptr<uint16_t>;
}

/*
function StdSharedPtr_delete(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_delete", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_delete(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    delete ptr;
}

/*
function Base.copy(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_copy", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), ptr)
    return StdSharedPtr{UInt16}(res)::Main.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_shared_ptr_uint16_t_copy(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    return new std::shared_ptr<uint16_t>(*ptr);
}

/*
function Base.empty!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_empty_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), ptr)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_empty_(
    std::shared_ptr<uint16_t> * restrict ptr
) {
    ptr->reset();
}

/*
function Base.isempty(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_isempty", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Int32, (Ptr{Nothing},), ptr)
    return convert(Bool, res)::Bool
end
*/
extern "C" int std_shared_ptr_uint16_t_isempty(
    const std::shared_ptr<uint16_t> * restrict ptr
) {
    return !*ptr;
}

/*
function Base.getindex(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_getindex", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt16, (Ptr{Nothing},), ptr)
    return res::UInt16
end
*/
extern "C" uint16_t std_shared_ptr_uint16_t_getindex(
    const std::shared_ptr<uint16_t> * restrict ptr
) {
    return **ptr;
}

/*
function Base.setindex!(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16}, val::UInt16)
    res = ccall(("std_shared_ptr_uint16_t_setindex_", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt16), ptr, val)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_uint16_t_setindex_(
    std::shared_ptr<uint16_t> * restrict ptr,
    uint16_t val
) {
    if (*ptr) {
    **ptr = std::move(val);
} else {
    auto newptr = std::make_shared<uint16_t>(std::move(val));
    ptr->swap(newptr);
}

}

/*
function use_count(ptr::Main.StdSharedPtrs.StdSharedPtr{UInt16})
    res = ccall(("std_shared_ptr_uint16_t_use_count", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), ptr)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_shared_ptr_uint16_t_use_count(
    const std::shared_ptr<uint16_t> * restrict ptr
) {
    return ptr->use_count();
}

/*
function make_shared(val::UInt16)
    res = ccall(("std_make_shared_uint16_t", "/Users/eschnett/.julia/artifacts/bc9c0078e4b2a4eab02bf0be1b57640c4f460da7/lib/libSTL.dylib"), Ptr{Nothing}, (Any,), convert(UInt16, val))
    return StdSharedPtr{T}(expr)::Main.StdSharedPtrs.StdSharedPtr{UInt16}
end
*/
extern "C" std::shared_ptr<uint16_t> * std_make_shared_uint16_t(
    uint16_t val
) {
    auto ptr = new std::shared_ptr<uint16_t>;
auto newptr = std::make_shared<uint16_t>(std::move(val));
ptr->swap(newptr);
return ptr;

}


