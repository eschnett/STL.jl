#include <ccomplex>
#include <cstdint>

#include <string>
#include <memory>
#include <vector>

static_assert(sizeof(bool) == 1, "");


/*
function RefStdVector_new(type::Type{Bool})
    res = ccall(("std_vector_bool_new", "libSTL.dylib"), Ptr{STL.StdVector{Bool}}, ())
    return RefStdVector{Bool}(res)::STL.RefStdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_new(
    
) {
    return new std::vector<bool>;
}

/*
function RefStdVector_new(type::Type{Bool}, size::Integer)
    res = ccall(("std_vector_bool_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Bool}}, (UInt64,), size)
    return RefStdVector{Bool}(res)::STL.RefStdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_new_std_size_t(
    std::size_t size
) {
    return new std::vector<bool>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Bool})
    res = ccall(("std_vector_bool_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_delete(
    std::vector<bool> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Bool})
    res = ccall(("std_vector_bool_copy", "libSTL.dylib"), Ptr{STL.StdVector{Bool}}, (Ptr{STL.StdVector{Bool}},), vec)
    return RefStdVector{Bool}(res)::STL.RefStdVector{Bool}
end
*/
extern "C" std::vector<bool> * std_vector_bool_copy(
    const std::vector<bool> * restrict vec
) {
    return new std::vector<bool>(*vec);
}

static_assert(sizeof(std::vector<bool>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Bool})
    res = ccall(("std_vector_bool_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_construct(
    void * ptr
) {
    new(ptr) std::vector<bool>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Bool}, size::Integer)
    res = ccall(("std_vector_bool_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<bool>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Bool})
    res = ccall(("std_vector_bool_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_destruct(
    std::vector<bool> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Bool}, vec::STL.GCStdVector{Bool})
    res = ccall(("std_vector_bool_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}}, Ptr{STL.StdVector{Bool}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_copy_construct(
    std::vector<bool> * restrict ptr,
    const std::vector<bool> * restrict vec
) {
    new(ptr) std::vector<bool>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<bool>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Bool})
    res = ccall(("std_shared_ptr_std_vector_bool_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_bool_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<bool>>;
*res = std::make_shared<std::vector<bool>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Bool}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_bool_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_bool_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<bool>>;
*res = std::make_shared<std::vector<bool>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Bool})
    res = ccall(("std_shared_ptr_std_vector_bool_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_bool_placement_delete(
    std::shared_ptr<std::vector<bool>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Bool}, vec::STL.SharedStdVector{Bool})
    res = ccall(("std_shared_ptr_std_vector_bool_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Bool}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_bool_placement_copy(
    void * ptr,
    const std::vector<bool> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<bool>>;
*res = std::make_shared<std::vector<bool>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Bool})
    res = ccall(("std_shared_ptr_std_vector_bool_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<bool> * std_shared_ptr_std_vector_bool_get(
    std::shared_ptr<std::vector<bool>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Bool}, size::Integer)
    res = ccall(("std_vector_bool_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Bool})
    res = ccall(("std_vector_bool_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Bool}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_bool_length(
    const std::vector<bool> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Bool}, idx::Integer)
    res = ccall(("std_vector_bool_getindex", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Bool}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Bool}, elt::Any, idx::Integer)
    res = ccall(("std_vector_bool_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}}, Ptr{Bool}, UInt64), vec, convert_arg(Ptr{Bool}, convert(Bool, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Bool}, vec2::STL.StdVector{Bool})
    res = ccall(("std_vector_bool_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Bool}}, Ptr{STL.StdVector{Bool}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Bool}, elt::Any)
    res = ccall(("std_vector_bool_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}}, Ptr{Bool}), vec, convert_arg(Ptr{Bool}, convert(Bool, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_bool_push_(
    std::vector<bool> * restrict vec,
    bool const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Bool})
    res = ccall(("std_vector_bool_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Bool}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_bool_pop_back_(
    std::vector<bool> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{ComplexF32})
    res = ccall(("std_vector_float__Complex_new", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF32}}, ())
    return RefStdVector{ComplexF32}(res)::STL.RefStdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new(
    
) {
    return new std::vector<float _Complex>;
}

/*
function RefStdVector_new(type::Type{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF32}}, (UInt64,), size)
    return RefStdVector{ComplexF32}(res)::STL.RefStdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float _Complex>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_delete(
    std::vector<float _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_copy", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF32}}, (Ptr{STL.StdVector{ComplexF32}},), vec)
    return RefStdVector{ComplexF32}(res)::STL.RefStdVector{ComplexF32}
end
*/
extern "C" std::vector<float _Complex> * std_vector_float__Complex_copy(
    const std::vector<float _Complex> * restrict vec
) {
    return new std::vector<float _Complex>(*vec);
}

static_assert(sizeof(std::vector<float _Complex>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_construct(
    void * ptr
) {
    new(ptr) std::vector<float _Complex>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<float _Complex>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_destruct(
    std::vector<float _Complex> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{ComplexF32}, vec::STL.GCStdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}}, Ptr{STL.StdVector{ComplexF32}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_copy_construct(
    std::vector<float _Complex> * restrict ptr,
    const std::vector<float _Complex> * restrict vec
) {
    new(ptr) std::vector<float _Complex>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<float _Complex>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{ComplexF32})
    res = ccall(("std_shared_ptr_std_vector_float__Complex_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float__Complex_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float _Complex>>;
*res = std::make_shared<std::vector<float _Complex>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{ComplexF32}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_float__Complex_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float__Complex_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float _Complex>>;
*res = std::make_shared<std::vector<float _Complex>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{ComplexF32})
    res = ccall(("std_shared_ptr_std_vector_float__Complex_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float__Complex_placement_delete(
    std::shared_ptr<std::vector<float _Complex>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{ComplexF32}, vec::STL.SharedStdVector{ComplexF32})
    res = ccall(("std_shared_ptr_std_vector_float__Complex_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{ComplexF32}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float__Complex_placement_copy(
    void * ptr,
    const std::vector<float _Complex> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float _Complex>>;
*res = std::make_shared<std::vector<float _Complex>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{ComplexF32})
    res = ccall(("std_shared_ptr_std_vector_float__Complex_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<float _Complex> * std_shared_ptr_std_vector_float__Complex_get(
    std::shared_ptr<std::vector<float _Complex>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{ComplexF32}, size::Integer)
    res = ccall(("std_vector_float__Complex_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{ComplexF32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float__Complex_length(
    const std::vector<float _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{ComplexF32}, idx::Integer)
    res = ccall(("std_vector_float__Complex_getindex", "libSTL.dylib"), Ptr{ComplexF32}, (Ptr{STL.StdVector{ComplexF32}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{ComplexF32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float__Complex_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}}, Ptr{ComplexF32}, UInt64), vec, convert_arg(Ptr{ComplexF32}, convert(ComplexF32, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{ComplexF32}, vec2::STL.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{ComplexF32}}, Ptr{STL.StdVector{ComplexF32}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{ComplexF32}, elt::Any)
    res = ccall(("std_vector_float__Complex_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}}, Ptr{ComplexF32}), vec, convert_arg(Ptr{ComplexF32}, convert(ComplexF32, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_push_(
    std::vector<float _Complex> * restrict vec,
    float _Complex const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{ComplexF32})
    res = ccall(("std_vector_float__Complex_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float__Complex_pop_back_(
    std::vector<float _Complex> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{ComplexF64})
    res = ccall(("std_vector_double__Complex_new", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF64}}, ())
    return RefStdVector{ComplexF64}(res)::STL.RefStdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new(
    
) {
    return new std::vector<double _Complex>;
}

/*
function RefStdVector_new(type::Type{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF64}}, (UInt64,), size)
    return RefStdVector{ComplexF64}(res)::STL.RefStdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double _Complex>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_delete(
    std::vector<double _Complex> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_copy", "libSTL.dylib"), Ptr{STL.StdVector{ComplexF64}}, (Ptr{STL.StdVector{ComplexF64}},), vec)
    return RefStdVector{ComplexF64}(res)::STL.RefStdVector{ComplexF64}
end
*/
extern "C" std::vector<double _Complex> * std_vector_double__Complex_copy(
    const std::vector<double _Complex> * restrict vec
) {
    return new std::vector<double _Complex>(*vec);
}

static_assert(sizeof(std::vector<double _Complex>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_construct(
    void * ptr
) {
    new(ptr) std::vector<double _Complex>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<double _Complex>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_destruct(
    std::vector<double _Complex> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{ComplexF64}, vec::STL.GCStdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}}, Ptr{STL.StdVector{ComplexF64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_copy_construct(
    std::vector<double _Complex> * restrict ptr,
    const std::vector<double _Complex> * restrict vec
) {
    new(ptr) std::vector<double _Complex>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<double _Complex>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{ComplexF64})
    res = ccall(("std_shared_ptr_std_vector_double__Complex_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double__Complex_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double _Complex>>;
*res = std::make_shared<std::vector<double _Complex>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{ComplexF64}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_double__Complex_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double__Complex_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double _Complex>>;
*res = std::make_shared<std::vector<double _Complex>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{ComplexF64})
    res = ccall(("std_shared_ptr_std_vector_double__Complex_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double__Complex_placement_delete(
    std::shared_ptr<std::vector<double _Complex>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{ComplexF64}, vec::STL.SharedStdVector{ComplexF64})
    res = ccall(("std_shared_ptr_std_vector_double__Complex_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{ComplexF64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double__Complex_placement_copy(
    void * ptr,
    const std::vector<double _Complex> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double _Complex>>;
*res = std::make_shared<std::vector<double _Complex>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{ComplexF64})
    res = ccall(("std_shared_ptr_std_vector_double__Complex_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<double _Complex> * std_shared_ptr_std_vector_double__Complex_get(
    std::shared_ptr<std::vector<double _Complex>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{ComplexF64}, size::Integer)
    res = ccall(("std_vector_double__Complex_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{ComplexF64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double__Complex_length(
    const std::vector<double _Complex> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{ComplexF64}, idx::Integer)
    res = ccall(("std_vector_double__Complex_getindex", "libSTL.dylib"), Ptr{ComplexF64}, (Ptr{STL.StdVector{ComplexF64}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{ComplexF64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double__Complex_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}}, Ptr{ComplexF64}, UInt64), vec, convert_arg(Ptr{ComplexF64}, convert(ComplexF64, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{ComplexF64}, vec2::STL.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{ComplexF64}}, Ptr{STL.StdVector{ComplexF64}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{ComplexF64}, elt::Any)
    res = ccall(("std_vector_double__Complex_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}}, Ptr{ComplexF64}), vec, convert_arg(Ptr{ComplexF64}, convert(ComplexF64, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_push_(
    std::vector<double _Complex> * restrict vec,
    double _Complex const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{ComplexF64})
    res = ccall(("std_vector_double__Complex_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{ComplexF64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double__Complex_pop_back_(
    std::vector<double _Complex> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Float32})
    res = ccall(("std_vector_float_new", "libSTL.dylib"), Ptr{STL.StdVector{Float32}}, ())
    return RefStdVector{Float32}(res)::STL.RefStdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new(
    
) {
    return new std::vector<float>;
}

/*
function RefStdVector_new(type::Type{Float32}, size::Integer)
    res = ccall(("std_vector_float_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Float32}}, (UInt64,), size)
    return RefStdVector{Float32}(res)::STL.RefStdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_new_std_size_t(
    std::size_t size
) {
    return new std::vector<float>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Float32})
    res = ccall(("std_vector_float_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float_delete(
    std::vector<float> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Float32})
    res = ccall(("std_vector_float_copy", "libSTL.dylib"), Ptr{STL.StdVector{Float32}}, (Ptr{STL.StdVector{Float32}},), vec)
    return RefStdVector{Float32}(res)::STL.RefStdVector{Float32}
end
*/
extern "C" std::vector<float> * std_vector_float_copy(
    const std::vector<float> * restrict vec
) {
    return new std::vector<float>(*vec);
}

static_assert(sizeof(std::vector<float>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Float32})
    res = ccall(("std_vector_float_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_float_construct(
    void * ptr
) {
    new(ptr) std::vector<float>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Float32}, size::Integer)
    res = ccall(("std_vector_float_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_float_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<float>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Float32})
    res = ccall(("std_vector_float_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_float_destruct(
    std::vector<float> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Float32}, vec::STL.GCStdVector{Float32})
    res = ccall(("std_vector_float_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}}, Ptr{STL.StdVector{Float32}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float_copy_construct(
    std::vector<float> * restrict ptr,
    const std::vector<float> * restrict vec
) {
    new(ptr) std::vector<float>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<float>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Float32})
    res = ccall(("std_shared_ptr_std_vector_float_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float>>;
*res = std::make_shared<std::vector<float>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Float32}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_float_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float>>;
*res = std::make_shared<std::vector<float>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Float32})
    res = ccall(("std_shared_ptr_std_vector_float_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float_placement_delete(
    std::shared_ptr<std::vector<float>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Float32}, vec::STL.SharedStdVector{Float32})
    res = ccall(("std_shared_ptr_std_vector_float_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Float32}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_float_placement_copy(
    void * ptr,
    const std::vector<float> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<float>>;
*res = std::make_shared<std::vector<float>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Float32})
    res = ccall(("std_shared_ptr_std_vector_float_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<float> * std_shared_ptr_std_vector_float_get(
    std::shared_ptr<std::vector<float>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Float32}, size::Integer)
    res = ccall(("std_vector_float_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Float32})
    res = ccall(("std_vector_float_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Float32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_float_length(
    const std::vector<float> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Float32}, idx::Integer)
    res = ccall(("std_vector_float_getindex", "libSTL.dylib"), Ptr{Float32}, (Ptr{STL.StdVector{Float32}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Float32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_float_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}}, Ptr{Float32}, UInt64), vec, convert_arg(Ptr{Float32}, convert(Float32, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Float32}, vec2::STL.StdVector{Float32})
    res = ccall(("std_vector_float_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Float32}}, Ptr{STL.StdVector{Float32}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Float32}, elt::Any)
    res = ccall(("std_vector_float_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}}, Ptr{Float32}), vec, convert_arg(Ptr{Float32}, convert(Float32, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_float_push_(
    std::vector<float> * restrict vec,
    float const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Float32})
    res = ccall(("std_vector_float_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_float_pop_back_(
    std::vector<float> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Float64})
    res = ccall(("std_vector_double_new", "libSTL.dylib"), Ptr{STL.StdVector{Float64}}, ())
    return RefStdVector{Float64}(res)::STL.RefStdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new(
    
) {
    return new std::vector<double>;
}

/*
function RefStdVector_new(type::Type{Float64}, size::Integer)
    res = ccall(("std_vector_double_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Float64}}, (UInt64,), size)
    return RefStdVector{Float64}(res)::STL.RefStdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_new_std_size_t(
    std::size_t size
) {
    return new std::vector<double>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Float64})
    res = ccall(("std_vector_double_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double_delete(
    std::vector<double> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Float64})
    res = ccall(("std_vector_double_copy", "libSTL.dylib"), Ptr{STL.StdVector{Float64}}, (Ptr{STL.StdVector{Float64}},), vec)
    return RefStdVector{Float64}(res)::STL.RefStdVector{Float64}
end
*/
extern "C" std::vector<double> * std_vector_double_copy(
    const std::vector<double> * restrict vec
) {
    return new std::vector<double>(*vec);
}

static_assert(sizeof(std::vector<double>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Float64})
    res = ccall(("std_vector_double_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_double_construct(
    void * ptr
) {
    new(ptr) std::vector<double>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Float64}, size::Integer)
    res = ccall(("std_vector_double_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_double_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<double>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Float64})
    res = ccall(("std_vector_double_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_double_destruct(
    std::vector<double> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Float64}, vec::STL.GCStdVector{Float64})
    res = ccall(("std_vector_double_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}}, Ptr{STL.StdVector{Float64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double_copy_construct(
    std::vector<double> * restrict ptr,
    const std::vector<double> * restrict vec
) {
    new(ptr) std::vector<double>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<double>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Float64})
    res = ccall(("std_shared_ptr_std_vector_double_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double>>;
*res = std::make_shared<std::vector<double>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Float64}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_double_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double>>;
*res = std::make_shared<std::vector<double>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Float64})
    res = ccall(("std_shared_ptr_std_vector_double_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double_placement_delete(
    std::shared_ptr<std::vector<double>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Float64}, vec::STL.SharedStdVector{Float64})
    res = ccall(("std_shared_ptr_std_vector_double_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Float64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_double_placement_copy(
    void * ptr,
    const std::vector<double> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<double>>;
*res = std::make_shared<std::vector<double>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Float64})
    res = ccall(("std_shared_ptr_std_vector_double_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<double> * std_shared_ptr_std_vector_double_get(
    std::shared_ptr<std::vector<double>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Float64}, size::Integer)
    res = ccall(("std_vector_double_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Float64})
    res = ccall(("std_vector_double_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Float64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_double_length(
    const std::vector<double> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Float64}, idx::Integer)
    res = ccall(("std_vector_double_getindex", "libSTL.dylib"), Ptr{Float64}, (Ptr{STL.StdVector{Float64}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Float64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_double_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}}, Ptr{Float64}, UInt64), vec, convert_arg(Ptr{Float64}, convert(Float64, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Float64}, vec2::STL.StdVector{Float64})
    res = ccall(("std_vector_double_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Float64}}, Ptr{STL.StdVector{Float64}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Float64}, elt::Any)
    res = ccall(("std_vector_double_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}}, Ptr{Float64}), vec, convert_arg(Ptr{Float64}, convert(Float64, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_double_push_(
    std::vector<double> * restrict vec,
    double const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Float64})
    res = ccall(("std_vector_double_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Float64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_double_pop_back_(
    std::vector<double> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Int16})
    res = ccall(("std_vector_int16_t_new", "libSTL.dylib"), Ptr{STL.StdVector{Int16}}, ())
    return RefStdVector{Int16}(res)::STL.RefStdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new(
    
) {
    return new std::vector<int16_t>;
}

/*
function RefStdVector_new(type::Type{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Int16}}, (UInt64,), size)
    return RefStdVector{Int16}(res)::STL.RefStdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int16_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Int16})
    res = ccall(("std_vector_int16_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_delete(
    std::vector<int16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Int16})
    res = ccall(("std_vector_int16_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{Int16}}, (Ptr{STL.StdVector{Int16}},), vec)
    return RefStdVector{Int16}(res)::STL.RefStdVector{Int16}
end
*/
extern "C" std::vector<int16_t> * std_vector_int16_t_copy(
    const std::vector<int16_t> * restrict vec
) {
    return new std::vector<int16_t>(*vec);
}

static_assert(sizeof(std::vector<int16_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int16})
    res = ccall(("std_vector_int16_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_construct(
    void * ptr
) {
    new(ptr) std::vector<int16_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<int16_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Int16})
    res = ccall(("std_vector_int16_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_destruct(
    std::vector<int16_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Int16}, vec::STL.GCStdVector{Int16})
    res = ccall(("std_vector_int16_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}}, Ptr{STL.StdVector{Int16}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_copy_construct(
    std::vector<int16_t> * restrict ptr,
    const std::vector<int16_t> * restrict vec
) {
    new(ptr) std::vector<int16_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<int16_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int16})
    res = ccall(("std_shared_ptr_std_vector_int16_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int16_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int16_t>>;
*res = std::make_shared<std::vector<int16_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int16}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_int16_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int16_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int16_t>>;
*res = std::make_shared<std::vector<int16_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Int16})
    res = ccall(("std_shared_ptr_std_vector_int16_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int16_t_placement_delete(
    std::shared_ptr<std::vector<int16_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Int16}, vec::STL.SharedStdVector{Int16})
    res = ccall(("std_shared_ptr_std_vector_int16_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Int16}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int16_t_placement_copy(
    void * ptr,
    const std::vector<int16_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int16_t>>;
*res = std::make_shared<std::vector<int16_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Int16})
    res = ccall(("std_shared_ptr_std_vector_int16_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<int16_t> * std_shared_ptr_std_vector_int16_t_get(
    std::shared_ptr<std::vector<int16_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Int16}, size::Integer)
    res = ccall(("std_vector_int16_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Int16})
    res = ccall(("std_vector_int16_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Int16}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int16_t_length(
    const std::vector<int16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Int16}, idx::Integer)
    res = ccall(("std_vector_int16_t_getindex", "libSTL.dylib"), Ptr{Int16}, (Ptr{STL.StdVector{Int16}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Int16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int16_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}}, Ptr{Int16}, UInt64), vec, convert_arg(Ptr{Int16}, convert(Int16, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Int16}, vec2::STL.StdVector{Int16})
    res = ccall(("std_vector_int16_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Int16}}, Ptr{STL.StdVector{Int16}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Int16}, elt::Any)
    res = ccall(("std_vector_int16_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}}, Ptr{Int16}), vec, convert_arg(Ptr{Int16}, convert(Int16, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_push_(
    std::vector<int16_t> * restrict vec,
    int16_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Int16})
    res = ccall(("std_vector_int16_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int16_t_pop_back_(
    std::vector<int16_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Int32})
    res = ccall(("std_vector_int32_t_new", "libSTL.dylib"), Ptr{STL.StdVector{Int32}}, ())
    return RefStdVector{Int32}(res)::STL.RefStdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new(
    
) {
    return new std::vector<int32_t>;
}

/*
function RefStdVector_new(type::Type{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Int32}}, (UInt64,), size)
    return RefStdVector{Int32}(res)::STL.RefStdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int32_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Int32})
    res = ccall(("std_vector_int32_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_delete(
    std::vector<int32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Int32})
    res = ccall(("std_vector_int32_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{Int32}}, (Ptr{STL.StdVector{Int32}},), vec)
    return RefStdVector{Int32}(res)::STL.RefStdVector{Int32}
end
*/
extern "C" std::vector<int32_t> * std_vector_int32_t_copy(
    const std::vector<int32_t> * restrict vec
) {
    return new std::vector<int32_t>(*vec);
}

static_assert(sizeof(std::vector<int32_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int32})
    res = ccall(("std_vector_int32_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_construct(
    void * ptr
) {
    new(ptr) std::vector<int32_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<int32_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Int32})
    res = ccall(("std_vector_int32_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_destruct(
    std::vector<int32_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Int32}, vec::STL.GCStdVector{Int32})
    res = ccall(("std_vector_int32_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}}, Ptr{STL.StdVector{Int32}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_copy_construct(
    std::vector<int32_t> * restrict ptr,
    const std::vector<int32_t> * restrict vec
) {
    new(ptr) std::vector<int32_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<int32_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int32})
    res = ccall(("std_shared_ptr_std_vector_int32_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int32_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int32_t>>;
*res = std::make_shared<std::vector<int32_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int32}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_int32_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int32_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int32_t>>;
*res = std::make_shared<std::vector<int32_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Int32})
    res = ccall(("std_shared_ptr_std_vector_int32_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int32_t_placement_delete(
    std::shared_ptr<std::vector<int32_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Int32}, vec::STL.SharedStdVector{Int32})
    res = ccall(("std_shared_ptr_std_vector_int32_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Int32}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int32_t_placement_copy(
    void * ptr,
    const std::vector<int32_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int32_t>>;
*res = std::make_shared<std::vector<int32_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Int32})
    res = ccall(("std_shared_ptr_std_vector_int32_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<int32_t> * std_shared_ptr_std_vector_int32_t_get(
    std::shared_ptr<std::vector<int32_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Int32}, size::Integer)
    res = ccall(("std_vector_int32_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Int32})
    res = ccall(("std_vector_int32_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Int32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int32_t_length(
    const std::vector<int32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Int32}, idx::Integer)
    res = ccall(("std_vector_int32_t_getindex", "libSTL.dylib"), Ptr{Int32}, (Ptr{STL.StdVector{Int32}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Int32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int32_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}}, Ptr{Int32}, UInt64), vec, convert_arg(Ptr{Int32}, convert(Int32, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Int32}, vec2::STL.StdVector{Int32})
    res = ccall(("std_vector_int32_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Int32}}, Ptr{STL.StdVector{Int32}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Int32}, elt::Any)
    res = ccall(("std_vector_int32_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}}, Ptr{Int32}), vec, convert_arg(Ptr{Int32}, convert(Int32, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_push_(
    std::vector<int32_t> * restrict vec,
    int32_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Int32})
    res = ccall(("std_vector_int32_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int32_t_pop_back_(
    std::vector<int32_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Int64})
    res = ccall(("std_vector_int64_t_new", "libSTL.dylib"), Ptr{STL.StdVector{Int64}}, ())
    return RefStdVector{Int64}(res)::STL.RefStdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new(
    
) {
    return new std::vector<int64_t>;
}

/*
function RefStdVector_new(type::Type{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Int64}}, (UInt64,), size)
    return RefStdVector{Int64}(res)::STL.RefStdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int64_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Int64})
    res = ccall(("std_vector_int64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_delete(
    std::vector<int64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Int64})
    res = ccall(("std_vector_int64_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{Int64}}, (Ptr{STL.StdVector{Int64}},), vec)
    return RefStdVector{Int64}(res)::STL.RefStdVector{Int64}
end
*/
extern "C" std::vector<int64_t> * std_vector_int64_t_copy(
    const std::vector<int64_t> * restrict vec
) {
    return new std::vector<int64_t>(*vec);
}

static_assert(sizeof(std::vector<int64_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int64})
    res = ccall(("std_vector_int64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_construct(
    void * ptr
) {
    new(ptr) std::vector<int64_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<int64_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Int64})
    res = ccall(("std_vector_int64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_destruct(
    std::vector<int64_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Int64}, vec::STL.GCStdVector{Int64})
    res = ccall(("std_vector_int64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}}, Ptr{STL.StdVector{Int64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_copy_construct(
    std::vector<int64_t> * restrict ptr,
    const std::vector<int64_t> * restrict vec
) {
    new(ptr) std::vector<int64_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<int64_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int64})
    res = ccall(("std_shared_ptr_std_vector_int64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int64_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int64_t>>;
*res = std::make_shared<std::vector<int64_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int64}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_int64_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int64_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int64_t>>;
*res = std::make_shared<std::vector<int64_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Int64})
    res = ccall(("std_shared_ptr_std_vector_int64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int64_t_placement_delete(
    std::shared_ptr<std::vector<int64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Int64}, vec::STL.SharedStdVector{Int64})
    res = ccall(("std_shared_ptr_std_vector_int64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Int64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int64_t_placement_copy(
    void * ptr,
    const std::vector<int64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int64_t>>;
*res = std::make_shared<std::vector<int64_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Int64})
    res = ccall(("std_shared_ptr_std_vector_int64_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<int64_t> * std_shared_ptr_std_vector_int64_t_get(
    std::shared_ptr<std::vector<int64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Int64}, size::Integer)
    res = ccall(("std_vector_int64_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Int64})
    res = ccall(("std_vector_int64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Int64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int64_t_length(
    const std::vector<int64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Int64}, idx::Integer)
    res = ccall(("std_vector_int64_t_getindex", "libSTL.dylib"), Ptr{Int64}, (Ptr{STL.StdVector{Int64}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Int64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}}, Ptr{Int64}, UInt64), vec, convert_arg(Ptr{Int64}, convert(Int64, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Int64}, vec2::STL.StdVector{Int64})
    res = ccall(("std_vector_int64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Int64}}, Ptr{STL.StdVector{Int64}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Int64}, elt::Any)
    res = ccall(("std_vector_int64_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}}, Ptr{Int64}), vec, convert_arg(Ptr{Int64}, convert(Int64, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_push_(
    std::vector<int64_t> * restrict vec,
    int64_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Int64})
    res = ccall(("std_vector_int64_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int64_t_pop_back_(
    std::vector<int64_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Int8})
    res = ccall(("std_vector_int8_t_new", "libSTL.dylib"), Ptr{STL.StdVector{Int8}}, ())
    return RefStdVector{Int8}(res)::STL.RefStdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new(
    
) {
    return new std::vector<int8_t>;
}

/*
function RefStdVector_new(type::Type{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Int8}}, (UInt64,), size)
    return RefStdVector{Int8}(res)::STL.RefStdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<int8_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Int8})
    res = ccall(("std_vector_int8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_delete(
    std::vector<int8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Int8})
    res = ccall(("std_vector_int8_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{Int8}}, (Ptr{STL.StdVector{Int8}},), vec)
    return RefStdVector{Int8}(res)::STL.RefStdVector{Int8}
end
*/
extern "C" std::vector<int8_t> * std_vector_int8_t_copy(
    const std::vector<int8_t> * restrict vec
) {
    return new std::vector<int8_t>(*vec);
}

static_assert(sizeof(std::vector<int8_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int8})
    res = ccall(("std_vector_int8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_construct(
    void * ptr
) {
    new(ptr) std::vector<int8_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<int8_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Int8})
    res = ccall(("std_vector_int8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_destruct(
    std::vector<int8_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Int8}, vec::STL.GCStdVector{Int8})
    res = ccall(("std_vector_int8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}}, Ptr{STL.StdVector{Int8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_copy_construct(
    std::vector<int8_t> * restrict ptr,
    const std::vector<int8_t> * restrict vec
) {
    new(ptr) std::vector<int8_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<int8_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int8})
    res = ccall(("std_shared_ptr_std_vector_int8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int8_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int8_t>>;
*res = std::make_shared<std::vector<int8_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Int8}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_int8_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int8_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int8_t>>;
*res = std::make_shared<std::vector<int8_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Int8})
    res = ccall(("std_shared_ptr_std_vector_int8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int8_t_placement_delete(
    std::shared_ptr<std::vector<int8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Int8}, vec::STL.SharedStdVector{Int8})
    res = ccall(("std_shared_ptr_std_vector_int8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Int8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_int8_t_placement_copy(
    void * ptr,
    const std::vector<int8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<int8_t>>;
*res = std::make_shared<std::vector<int8_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Int8})
    res = ccall(("std_shared_ptr_std_vector_int8_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<int8_t> * std_shared_ptr_std_vector_int8_t_get(
    std::shared_ptr<std::vector<int8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Int8}, size::Integer)
    res = ccall(("std_vector_int8_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Int8})
    res = ccall(("std_vector_int8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Int8}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_int8_t_length(
    const std::vector<int8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Int8}, idx::Integer)
    res = ccall(("std_vector_int8_t_getindex", "libSTL.dylib"), Ptr{Int8}, (Ptr{STL.StdVector{Int8}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Int8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_int8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}}, Ptr{Int8}, UInt64), vec, convert_arg(Ptr{Int8}, convert(Int8, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Int8}, vec2::STL.StdVector{Int8})
    res = ccall(("std_vector_int8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Int8}}, Ptr{STL.StdVector{Int8}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Int8}, elt::Any)
    res = ccall(("std_vector_int8_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}}, Ptr{Int8}), vec, convert_arg(Ptr{Int8}, convert(Int8, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_push_(
    std::vector<int8_t> * restrict vec,
    int8_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Int8})
    res = ccall(("std_vector_int8_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Int8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_int8_t_pop_back_(
    std::vector<int8_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{Ptr{Nothing}})
    res = ccall(("std_vector_void___new", "libSTL.dylib"), Ptr{STL.StdVector{Ptr{Nothing}}}, ())
    return RefStdVector{Ptr{Nothing}}(res)::STL.RefStdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___new(
    
) {
    return new std::vector<void *>;
}

/*
function RefStdVector_new(type::Type{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_vector_void___new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{Ptr{Nothing}}}, (UInt64,), size)
    return RefStdVector{Ptr{Nothing}}(res)::STL.RefStdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___new_std_size_t(
    std::size_t size
) {
    return new std::vector<void *>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_void___delete(
    std::vector<void *> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___copy", "libSTL.dylib"), Ptr{STL.StdVector{Ptr{Nothing}}}, (Ptr{STL.StdVector{Ptr{Nothing}}},), vec)
    return RefStdVector{Ptr{Nothing}}(res)::STL.RefStdVector{Ptr{Nothing}}
end
*/
extern "C" std::vector<void *> * std_vector_void___copy(
    const std::vector<void *> * restrict vec
) {
    return new std::vector<void *>(*vec);
}

static_assert(sizeof(std::vector<void *>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_void___construct(
    void * ptr
) {
    new(ptr) std::vector<void *>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_vector_void___construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_void___construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<void *>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_void___destruct(
    std::vector<void *> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{Ptr{Nothing}}, vec::STL.GCStdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}}, Ptr{STL.StdVector{Ptr{Nothing}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_void___copy_construct(
    std::vector<void *> * restrict ptr,
    const std::vector<void *> * restrict vec
) {
    new(ptr) std::vector<void *>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<void *>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_vector_void___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_void___placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<void *>>;
*res = std::make_shared<std::vector<void *>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_void___placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_void___placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<void *>>;
*res = std::make_shared<std::vector<void *>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_vector_void___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_void___placement_delete(
    std::shared_ptr<std::vector<void *>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{Ptr{Nothing}}, vec::STL.SharedStdVector{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_vector_void___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{Ptr{Nothing}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_void___placement_copy(
    void * ptr,
    const std::vector<void *> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<void *>>;
*res = std::make_shared<std::vector<void *>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{Ptr{Nothing}})
    res = ccall(("std_shared_ptr_std_vector_void___get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<void *> * std_shared_ptr_std_vector_void___get(
    std::shared_ptr<std::vector<void *>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{Ptr{Nothing}}, size::Integer)
    res = ccall(("std_vector_void___resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{Ptr{Nothing}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_void___length(
    const std::vector<void *> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{Ptr{Nothing}}, idx::Integer)
    res = ccall(("std_vector_void___getindex", "libSTL.dylib"), Ptr{Ptr{Nothing}}, (Ptr{STL.StdVector{Ptr{Nothing}}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{Ptr{Nothing}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_void___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}}, Ptr{Ptr{Nothing}}, UInt64), vec, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{Ptr{Nothing}}, vec2::STL.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{Ptr{Nothing}}}, Ptr{STL.StdVector{Ptr{Nothing}}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{Ptr{Nothing}}, elt::Any)
    res = ccall(("std_vector_void___push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}}, Ptr{Ptr{Nothing}}), vec, convert_arg(Ptr{Ptr{Nothing}}, convert(Ptr{Nothing}, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_void___push_(
    std::vector<void *> * restrict vec,
    void * const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{Ptr{Nothing}})
    res = ccall(("std_vector_void___pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{Ptr{Nothing}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_void___pop_back_(
    std::vector<void *> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.StdString})
    res = ccall(("std_vector_std__string_new", "libSTL.dylib"), Ptr{STL.StdVector{STL.StdString}}, ())
    return RefStdVector{STL.StdString}(res)::STL.RefStdVector{STL.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new(
    
) {
    return new std::vector<std::string>;
}

/*
function RefStdVector_new(type::Type{STL.StdString}, size::Integer)
    res = ccall(("std_vector_std__string_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.StdString}}, (UInt64,), size)
    return RefStdVector{STL.StdString}(res)::STL.RefStdVector{STL.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::string>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.StdString})
    res = ccall(("std_vector_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_delete(
    std::vector<std::string> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.StdString})
    res = ccall(("std_vector_std__string_copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.StdString}}, (Ptr{STL.StdVector{STL.StdString}},), vec)
    return RefStdVector{STL.StdString}(res)::STL.RefStdVector{STL.StdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_copy(
    const std::vector<std::string> * restrict vec
) {
    return new std::vector<std::string>(*vec);
}

static_assert(sizeof(std::vector<std::string>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.StdString})
    res = ccall(("std_vector_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_construct(
    void * ptr
) {
    new(ptr) std::vector<std::string>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.StdString}, size::Integer)
    res = ccall(("std_vector_std__string_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::string>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.StdString})
    res = ccall(("std_vector_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_destruct(
    std::vector<std::string> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.StdString}, vec::STL.GCStdVector{STL.StdString})
    res = ccall(("std_vector_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}}, Ptr{STL.StdVector{STL.StdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_copy_construct(
    std::vector<std::string> * restrict ptr,
    const std::vector<std::string> * restrict vec
) {
    new(ptr) std::vector<std::string>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::string>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.StdString})
    res = ccall(("std_shared_ptr_std_vector_std__string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__string_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::string>>;
*res = std::make_shared<std::vector<std::string>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.StdString}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__string_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__string_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::string>>;
*res = std::make_shared<std::vector<std::string>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.StdString})
    res = ccall(("std_shared_ptr_std_vector_std__string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__string_placement_delete(
    std::shared_ptr<std::vector<std::string>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.StdString}, vec::STL.SharedStdVector{STL.StdString})
    res = ccall(("std_shared_ptr_std_vector_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.StdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__string_placement_copy(
    void * ptr,
    const std::vector<std::string> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::string>>;
*res = std::make_shared<std::vector<std::string>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.StdString})
    res = ccall(("std_shared_ptr_std_vector_std__string_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::string> * std_shared_ptr_std_vector_std__string_get(
    std::shared_ptr<std::vector<std::string>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.StdString}, size::Integer)
    res = ccall(("std_vector_std__string_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{STL.StdString})
    res = ccall(("std_vector_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.StdString}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__string_length(
    const std::vector<std::string> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.StdString}, idx::Integer)
    res = ccall(("std_vector_std__string_getindex", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{STL.StdVector{STL.StdString}}, UInt64), vec, idx)
    return convert_result(STL.StdString, res)::STL.StdString
end
*/
extern "C" std::string * std_vector_std__string_getindex(
    std::vector<std::string> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.StdString}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}}, Ptr{STL.StdString}, UInt64), vec, convert_arg(Ptr{STL.StdString}, convert(STL.StdString, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{STL.StdString}, vec2::STL.StdVector{STL.StdString})
    res = ccall(("std_vector_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.StdString}}, Ptr{STL.StdVector{STL.StdString}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{STL.StdString}, elt::Any)
    res = ccall(("std_vector_std__string_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}}, Ptr{STL.StdString}), vec, convert_arg(Ptr{STL.StdString}, convert(STL.StdString, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_push_(
    std::vector<std::string> * restrict vec,
    std::string const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.StdString})
    res = ccall(("std_vector_std__string_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.StdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_pop_back_(
    std::vector<std::string> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{UInt16})
    res = ccall(("std_vector_uint16_t_new", "libSTL.dylib"), Ptr{STL.StdVector{UInt16}}, ())
    return RefStdVector{UInt16}(res)::STL.RefStdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new(
    
) {
    return new std::vector<uint16_t>;
}

/*
function RefStdVector_new(type::Type{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{UInt16}}, (UInt64,), size)
    return RefStdVector{UInt16}(res)::STL.RefStdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint16_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{UInt16})
    res = ccall(("std_vector_uint16_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_delete(
    std::vector<uint16_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{UInt16})
    res = ccall(("std_vector_uint16_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{UInt16}}, (Ptr{STL.StdVector{UInt16}},), vec)
    return RefStdVector{UInt16}(res)::STL.RefStdVector{UInt16}
end
*/
extern "C" std::vector<uint16_t> * std_vector_uint16_t_copy(
    const std::vector<uint16_t> * restrict vec
) {
    return new std::vector<uint16_t>(*vec);
}

static_assert(sizeof(std::vector<uint16_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt16})
    res = ccall(("std_vector_uint16_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_construct(
    void * ptr
) {
    new(ptr) std::vector<uint16_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<uint16_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{UInt16})
    res = ccall(("std_vector_uint16_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_destruct(
    std::vector<uint16_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{UInt16}, vec::STL.GCStdVector{UInt16})
    res = ccall(("std_vector_uint16_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}}, Ptr{STL.StdVector{UInt16}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_copy_construct(
    std::vector<uint16_t> * restrict ptr,
    const std::vector<uint16_t> * restrict vec
) {
    new(ptr) std::vector<uint16_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<uint16_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt16})
    res = ccall(("std_shared_ptr_std_vector_uint16_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint16_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint16_t>>;
*res = std::make_shared<std::vector<uint16_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt16}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_uint16_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint16_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint16_t>>;
*res = std::make_shared<std::vector<uint16_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{UInt16})
    res = ccall(("std_shared_ptr_std_vector_uint16_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint16_t_placement_delete(
    std::shared_ptr<std::vector<uint16_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{UInt16}, vec::STL.SharedStdVector{UInt16})
    res = ccall(("std_shared_ptr_std_vector_uint16_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{UInt16}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint16_t_placement_copy(
    void * ptr,
    const std::vector<uint16_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint16_t>>;
*res = std::make_shared<std::vector<uint16_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{UInt16})
    res = ccall(("std_shared_ptr_std_vector_uint16_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<uint16_t> * std_shared_ptr_std_vector_uint16_t_get(
    std::shared_ptr<std::vector<uint16_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{UInt16}, size::Integer)
    res = ccall(("std_vector_uint16_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{UInt16}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint16_t_length(
    const std::vector<uint16_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{UInt16}, idx::Integer)
    res = ccall(("std_vector_uint16_t_getindex", "libSTL.dylib"), Ptr{UInt16}, (Ptr{STL.StdVector{UInt16}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{UInt16}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint16_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}}, Ptr{UInt16}, UInt64), vec, convert_arg(Ptr{UInt16}, convert(UInt16, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{UInt16}, vec2::STL.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{UInt16}}, Ptr{STL.StdVector{UInt16}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{UInt16}, elt::Any)
    res = ccall(("std_vector_uint16_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}}, Ptr{UInt16}), vec, convert_arg(Ptr{UInt16}, convert(UInt16, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_push_(
    std::vector<uint16_t> * restrict vec,
    uint16_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{UInt16})
    res = ccall(("std_vector_uint16_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt16}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint16_t_pop_back_(
    std::vector<uint16_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{UInt32})
    res = ccall(("std_vector_uint32_t_new", "libSTL.dylib"), Ptr{STL.StdVector{UInt32}}, ())
    return RefStdVector{UInt32}(res)::STL.RefStdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new(
    
) {
    return new std::vector<uint32_t>;
}

/*
function RefStdVector_new(type::Type{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{UInt32}}, (UInt64,), size)
    return RefStdVector{UInt32}(res)::STL.RefStdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint32_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{UInt32})
    res = ccall(("std_vector_uint32_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_delete(
    std::vector<uint32_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{UInt32})
    res = ccall(("std_vector_uint32_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{UInt32}}, (Ptr{STL.StdVector{UInt32}},), vec)
    return RefStdVector{UInt32}(res)::STL.RefStdVector{UInt32}
end
*/
extern "C" std::vector<uint32_t> * std_vector_uint32_t_copy(
    const std::vector<uint32_t> * restrict vec
) {
    return new std::vector<uint32_t>(*vec);
}

static_assert(sizeof(std::vector<uint32_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt32})
    res = ccall(("std_vector_uint32_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_construct(
    void * ptr
) {
    new(ptr) std::vector<uint32_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<uint32_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{UInt32})
    res = ccall(("std_vector_uint32_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_destruct(
    std::vector<uint32_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{UInt32}, vec::STL.GCStdVector{UInt32})
    res = ccall(("std_vector_uint32_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}}, Ptr{STL.StdVector{UInt32}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_copy_construct(
    std::vector<uint32_t> * restrict ptr,
    const std::vector<uint32_t> * restrict vec
) {
    new(ptr) std::vector<uint32_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<uint32_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt32})
    res = ccall(("std_shared_ptr_std_vector_uint32_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint32_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint32_t>>;
*res = std::make_shared<std::vector<uint32_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt32}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_uint32_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint32_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint32_t>>;
*res = std::make_shared<std::vector<uint32_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{UInt32})
    res = ccall(("std_shared_ptr_std_vector_uint32_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint32_t_placement_delete(
    std::shared_ptr<std::vector<uint32_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{UInt32}, vec::STL.SharedStdVector{UInt32})
    res = ccall(("std_shared_ptr_std_vector_uint32_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{UInt32}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint32_t_placement_copy(
    void * ptr,
    const std::vector<uint32_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint32_t>>;
*res = std::make_shared<std::vector<uint32_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{UInt32})
    res = ccall(("std_shared_ptr_std_vector_uint32_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<uint32_t> * std_shared_ptr_std_vector_uint32_t_get(
    std::shared_ptr<std::vector<uint32_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{UInt32}, size::Integer)
    res = ccall(("std_vector_uint32_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{UInt32}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint32_t_length(
    const std::vector<uint32_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{UInt32}, idx::Integer)
    res = ccall(("std_vector_uint32_t_getindex", "libSTL.dylib"), Ptr{UInt32}, (Ptr{STL.StdVector{UInt32}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{UInt32}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint32_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}}, Ptr{UInt32}, UInt64), vec, convert_arg(Ptr{UInt32}, convert(UInt32, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{UInt32}, vec2::STL.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{UInt32}}, Ptr{STL.StdVector{UInt32}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{UInt32}, elt::Any)
    res = ccall(("std_vector_uint32_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}}, Ptr{UInt32}), vec, convert_arg(Ptr{UInt32}, convert(UInt32, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_push_(
    std::vector<uint32_t> * restrict vec,
    uint32_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{UInt32})
    res = ccall(("std_vector_uint32_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt32}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint32_t_pop_back_(
    std::vector<uint32_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{UInt64})
    res = ccall(("std_vector_uint64_t_new", "libSTL.dylib"), Ptr{STL.StdVector{UInt64}}, ())
    return RefStdVector{UInt64}(res)::STL.RefStdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new(
    
) {
    return new std::vector<uint64_t>;
}

/*
function RefStdVector_new(type::Type{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{UInt64}}, (UInt64,), size)
    return RefStdVector{UInt64}(res)::STL.RefStdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint64_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{UInt64})
    res = ccall(("std_vector_uint64_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_delete(
    std::vector<uint64_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{UInt64})
    res = ccall(("std_vector_uint64_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{UInt64}}, (Ptr{STL.StdVector{UInt64}},), vec)
    return RefStdVector{UInt64}(res)::STL.RefStdVector{UInt64}
end
*/
extern "C" std::vector<uint64_t> * std_vector_uint64_t_copy(
    const std::vector<uint64_t> * restrict vec
) {
    return new std::vector<uint64_t>(*vec);
}

static_assert(sizeof(std::vector<uint64_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt64})
    res = ccall(("std_vector_uint64_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_construct(
    void * ptr
) {
    new(ptr) std::vector<uint64_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<uint64_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{UInt64})
    res = ccall(("std_vector_uint64_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_destruct(
    std::vector<uint64_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{UInt64}, vec::STL.GCStdVector{UInt64})
    res = ccall(("std_vector_uint64_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}}, Ptr{STL.StdVector{UInt64}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_copy_construct(
    std::vector<uint64_t> * restrict ptr,
    const std::vector<uint64_t> * restrict vec
) {
    new(ptr) std::vector<uint64_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<uint64_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt64})
    res = ccall(("std_shared_ptr_std_vector_uint64_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint64_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint64_t>>;
*res = std::make_shared<std::vector<uint64_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt64}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_uint64_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint64_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint64_t>>;
*res = std::make_shared<std::vector<uint64_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{UInt64})
    res = ccall(("std_shared_ptr_std_vector_uint64_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint64_t_placement_delete(
    std::shared_ptr<std::vector<uint64_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{UInt64}, vec::STL.SharedStdVector{UInt64})
    res = ccall(("std_shared_ptr_std_vector_uint64_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{UInt64}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint64_t_placement_copy(
    void * ptr,
    const std::vector<uint64_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint64_t>>;
*res = std::make_shared<std::vector<uint64_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{UInt64})
    res = ccall(("std_shared_ptr_std_vector_uint64_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<uint64_t> * std_shared_ptr_std_vector_uint64_t_get(
    std::shared_ptr<std::vector<uint64_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{UInt64}, size::Integer)
    res = ccall(("std_vector_uint64_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{UInt64}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint64_t_length(
    const std::vector<uint64_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{UInt64}, idx::Integer)
    res = ccall(("std_vector_uint64_t_getindex", "libSTL.dylib"), Ptr{UInt64}, (Ptr{STL.StdVector{UInt64}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{UInt64}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint64_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}}, Ptr{UInt64}, UInt64), vec, convert_arg(Ptr{UInt64}, convert(UInt64, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{UInt64}, vec2::STL.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{UInt64}}, Ptr{STL.StdVector{UInt64}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{UInt64}, elt::Any)
    res = ccall(("std_vector_uint64_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}}, Ptr{UInt64}), vec, convert_arg(Ptr{UInt64}, convert(UInt64, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_push_(
    std::vector<uint64_t> * restrict vec,
    uint64_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{UInt64})
    res = ccall(("std_vector_uint64_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt64}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint64_t_pop_back_(
    std::vector<uint64_t> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{UInt8})
    res = ccall(("std_vector_uint8_t_new", "libSTL.dylib"), Ptr{STL.StdVector{UInt8}}, ())
    return RefStdVector{UInt8}(res)::STL.RefStdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new(
    
) {
    return new std::vector<uint8_t>;
}

/*
function RefStdVector_new(type::Type{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{UInt8}}, (UInt64,), size)
    return RefStdVector{UInt8}(res)::STL.RefStdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_new_std_size_t(
    std::size_t size
) {
    return new std::vector<uint8_t>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{UInt8})
    res = ccall(("std_vector_uint8_t_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_delete(
    std::vector<uint8_t> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{UInt8})
    res = ccall(("std_vector_uint8_t_copy", "libSTL.dylib"), Ptr{STL.StdVector{UInt8}}, (Ptr{STL.StdVector{UInt8}},), vec)
    return RefStdVector{UInt8}(res)::STL.RefStdVector{UInt8}
end
*/
extern "C" std::vector<uint8_t> * std_vector_uint8_t_copy(
    const std::vector<uint8_t> * restrict vec
) {
    return new std::vector<uint8_t>(*vec);
}

static_assert(sizeof(std::vector<uint8_t>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt8})
    res = ccall(("std_vector_uint8_t_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_construct(
    void * ptr
) {
    new(ptr) std::vector<uint8_t>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<uint8_t>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{UInt8})
    res = ccall(("std_vector_uint8_t_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_destruct(
    std::vector<uint8_t> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{UInt8}, vec::STL.GCStdVector{UInt8})
    res = ccall(("std_vector_uint8_t_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}}, Ptr{STL.StdVector{UInt8}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_copy_construct(
    std::vector<uint8_t> * restrict ptr,
    const std::vector<uint8_t> * restrict vec
) {
    new(ptr) std::vector<uint8_t>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<uint8_t>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt8})
    res = ccall(("std_shared_ptr_std_vector_uint8_t_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint8_t_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint8_t>>;
*res = std::make_shared<std::vector<uint8_t>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{UInt8}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_uint8_t_placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint8_t_placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint8_t>>;
*res = std::make_shared<std::vector<uint8_t>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{UInt8})
    res = ccall(("std_shared_ptr_std_vector_uint8_t_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint8_t_placement_delete(
    std::shared_ptr<std::vector<uint8_t>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{UInt8}, vec::STL.SharedStdVector{UInt8})
    res = ccall(("std_shared_ptr_std_vector_uint8_t_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{UInt8}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_uint8_t_placement_copy(
    void * ptr,
    const std::vector<uint8_t> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<uint8_t>>;
*res = std::make_shared<std::vector<uint8_t>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{UInt8})
    res = ccall(("std_shared_ptr_std_vector_uint8_t_get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<uint8_t> * std_shared_ptr_std_vector_uint8_t_get(
    std::shared_ptr<std::vector<uint8_t>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{UInt8}, size::Integer)
    res = ccall(("std_vector_uint8_t_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{UInt8}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_uint8_t_length(
    const std::vector<uint8_t> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{UInt8}, idx::Integer)
    res = ccall(("std_vector_uint8_t_getindex", "libSTL.dylib"), Ptr{UInt8}, (Ptr{STL.StdVector{UInt8}}, UInt64), vec, idx)
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
function Base.setindex!(vec::STL.StdVector{UInt8}, elt::Any, idx::Integer)
    res = ccall(("std_vector_uint8_t_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}}, Ptr{UInt8}, UInt64), vec, convert_arg(Ptr{UInt8}, convert(UInt8, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{UInt8}, vec2::STL.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{UInt8}}, Ptr{STL.StdVector{UInt8}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_uint8_t_equals(
    const std::vector<uint8_t> * restrict vec1,
    const std::vector<uint8_t> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{UInt8}, elt::Any)
    res = ccall(("std_vector_uint8_t_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}}, Ptr{UInt8}), vec, convert_arg(Ptr{UInt8}, convert(UInt8, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_push_(
    std::vector<uint8_t> * restrict vec,
    uint8_t const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{UInt8})
    res = ccall(("std_vector_uint8_t_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{UInt8}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_uint8_t_pop_back_(
    std::vector<uint8_t> * restrict vec
) {
    vec->pop_back();
}

