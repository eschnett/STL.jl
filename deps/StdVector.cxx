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
function RefStdVector_new(type::Type{STL.RefStdString})
    res = ccall(("std_vector_std__string_new", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdString}}, ())
    return RefStdVector{STL.RefStdString}(res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new(
    
) {
    return new std::vector<std::string>;
}

/*
function RefStdVector_new(type::Type{STL.RefStdString}, size::Integer)
    res = ccall(("std_vector_std__string_new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdString}}, (UInt64,), size)
    return RefStdVector{STL.RefStdString}(res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::string>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_delete(
    std::vector<std::string> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdString}}, (Ptr{STL.StdVector{STL.RefStdString}},), vec)
    return RefStdVector{STL.RefStdString}(res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__string_copy(
    const std::vector<std::string> * restrict vec
) {
    return new std::vector<std::string>(*vec);
}

static_assert(sizeof(std::vector<std::string>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_construct(
    void * ptr
) {
    new(ptr) std::vector<std::string>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdString}, size::Integer)
    res = ccall(("std_vector_std__string_construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}}, UInt64), ptr, size)
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
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_destruct(
    std::vector<std::string> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.RefStdString}, vec::STL.GCStdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}}, Ptr{STL.StdVector{STL.RefStdString}}), ptr, vec)
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
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdString})
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
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdString}, size::Integer)
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
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.RefStdString})
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
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.RefStdString}, vec::STL.SharedStdVector{STL.RefStdString})
    res = ccall(("std_shared_ptr_std_vector_std__string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.RefStdString}}), pointer_from_objref(ptr), vec)
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
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.RefStdString})
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
function Base.resize!(vec::STL.StdVector{STL.RefStdString}, size::Integer)
    res = ccall(("std_vector_std__string_resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}}, UInt64), vec, size)
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
function Base.length(vec::STL.StdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.RefStdString}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__string_length(
    const std::vector<std::string> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.RefStdString}, idx::Integer)
    res = ccall(("std_vector_std__string_getindex", "libSTL.dylib"), Ptr{STL.RefStdString}, (Ptr{STL.StdVector{STL.RefStdString}}, UInt64), vec, idx)
    return convert_result(STL.RefStdString, res)::STL.RefStdString
end
*/
extern "C" std::string * std_vector_std__string_getindex(
    std::vector<std::string> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.RefStdString}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}}, Ptr{STL.RefStdString}, UInt64), vec, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)), idx)
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
function Base.:(==)(vec1::STL.StdVector{STL.RefStdString}, vec2::STL.StdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.RefStdString}}, Ptr{STL.StdVector{STL.RefStdString}}), vec1, vec2)
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
function Base.push!(vec::STL.StdVector{STL.RefStdString}, elt::Any)
    res = ccall(("std_vector_std__string_push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}}, Ptr{STL.RefStdString}), vec, convert_arg(Ptr{STL.RefStdString}, convert(STL.RefStdString, elt)))
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
function pop_back!(vec::STL.StdVector{STL.RefStdString})
    res = ccall(("std_vector_std__string_pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__string_pop_back_(
    std::vector<std::string> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__new", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, ())
    return RefStdVector{STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::vector<std::string>> * std_vector_std__vector_std__string__new(
    
) {
    return new std::vector<std::vector<std::string>>;
}

/*
function RefStdVector_new(type::Type{STL.RefStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__string__new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, (UInt64,), size)
    return RefStdVector{STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::vector<std::string>> * std_vector_std__vector_std__string__new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::vector<std::string>>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__delete(
    std::vector<std::vector<std::string>> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), vec)
    return RefStdVector{STL.RefStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::vector<std::string>> * std_vector_std__vector_std__string__copy(
    const std::vector<std::vector<std::string>> * restrict vec
) {
    return new std::vector<std::vector<std::string>>(*vec);
}

static_assert(sizeof(std::vector<std::vector<std::string>>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__construct(
    void * ptr
) {
    new(ptr) std::vector<std::vector<std::string>>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__string__construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::vector<std::string>>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__destruct(
    std::vector<std::vector<std::string>> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.RefStdString}}, vec::STL.GCStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__copy_construct(
    std::vector<std::vector<std::string>> * restrict ptr,
    const std::vector<std::vector<std::string>> * restrict vec
) {
    new(ptr) std::vector<std::vector<std::string>>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::vector<std::string>>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__string__placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::string>>>;
*res = std::make_shared<std::vector<std::vector<std::string>>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__string__placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__string__placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::string>>>;
*res = std::make_shared<std::vector<std::vector<std::string>>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__string__placement_delete(
    std::shared_ptr<std::vector<std::vector<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}}, vec::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__string__placement_copy(
    void * ptr,
    const std::vector<std::vector<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::string>>>;
*res = std::make_shared<std::vector<std::vector<std::string>>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__string__get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::vector<std::string>> * std_shared_ptr_std_vector_std__vector_std__string__get(
    std::shared_ptr<std::vector<std::vector<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__string__resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__resize_(
    std::vector<std::vector<std::string>> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__vector_std__string__length(
    const std::vector<std::vector<std::string>> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}}, idx::Integer)
    res = ccall(("std_vector_std__vector_std__string__getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.RefStdString}}, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, UInt64), vec, idx)
    return convert_result(STL.RefStdVector{STL.RefStdString}, res)::STL.RefStdVector{STL.RefStdString}
end
*/
extern "C" std::vector<std::string> * std_vector_std__vector_std__string__getindex(
    std::vector<std::vector<std::string>> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__vector_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}, UInt64), vec, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__setindex_(
    std::vector<std::vector<std::string>> * restrict vec,
    std::vector<std::string> const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVector{STL.RefStdVector{STL.RefStdString}}, vec2::STL.StdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__vector_std__string__equals(
    const std::vector<std::vector<std::string>> * restrict vec1,
    const std::vector<std::vector<std::string>> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}}, elt::Any)
    res = ccall(("std_vector_std__vector_std__string__push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}}, Ptr{STL.RefStdVector{STL.RefStdString}}), vec, convert_arg(Ptr{STL.RefStdVector{STL.RefStdString}}, convert(STL.RefStdVector{STL.RefStdString}, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__push_(
    std::vector<std::vector<std::string>> * restrict vec,
    std::vector<std::string> const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.RefStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__vector_std__string__pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.RefStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__string__pop_back_(
    std::vector<std::vector<std::string>> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___new", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, ())
    return RefStdVector{STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::vector<std::shared_ptr<std::string>>> * std_vector_std__vector_std__shared_ptr_std__string___new(
    
) {
    return new std::vector<std::vector<std::shared_ptr<std::string>>>;
}

/*
function RefStdVector_new(type::Type{STL.RefStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, (UInt64,), size)
    return RefStdVector{STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::vector<std::shared_ptr<std::string>>> * std_vector_std__vector_std__shared_ptr_std__string___new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::vector<std::shared_ptr<std::string>>>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___delete(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), vec)
    return RefStdVector{STL.RefStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.RefStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::vector<std::shared_ptr<std::string>>> * std_vector_std__vector_std__shared_ptr_std__string___copy(
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    return new std::vector<std::vector<std::shared_ptr<std::string>>>(*vec);
}

static_assert(sizeof(std::vector<std::vector<std::shared_ptr<std::string>>>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___construct(
    void * ptr
) {
    new(ptr) std::vector<std::vector<std::shared_ptr<std::string>>>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::vector<std::shared_ptr<std::string>>>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___destruct(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.RefStdVector{STL.SharedStdString}}, vec::STL.GCStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___copy_construct(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict ptr,
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    new(ptr) std::vector<std::vector<std::shared_ptr<std::string>>>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::vector<std::vector<std::shared_ptr<std::string>>>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::vector<std::vector<std::shared_ptr<std::string>>>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_delete(
    std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}}, vec::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___placement_copy(
    void * ptr,
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>>;
*res = std::make_shared<std::vector<std::vector<std::shared_ptr<std::string>>>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::vector<std::shared_ptr<std::string>>> * std_shared_ptr_std_vector_std__vector_std__shared_ptr_std__string___get(
    std::shared_ptr<std::vector<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___resize_(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__vector_std__shared_ptr_std__string___length(
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}}, idx::Integer)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___getindex", "libSTL.dylib"), Ptr{STL.RefStdVector{STL.SharedStdString}}, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, UInt64), vec, idx)
    return convert_result(STL.RefStdVector{STL.SharedStdString}, res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_vector_std__vector_std__shared_ptr_std__string___getindex(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}, UInt64), vec, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___setindex_(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec,
    std::vector<std::shared_ptr<std::string>> const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVector{STL.RefStdVector{STL.SharedStdString}}, vec2::STL.StdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__vector_std__shared_ptr_std__string___equals(
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec1,
    const std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}}, elt::Any)
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}}, Ptr{STL.RefStdVector{STL.SharedStdString}}), vec, convert_arg(Ptr{STL.RefStdVector{STL.SharedStdString}}, convert(STL.RefStdVector{STL.SharedStdString}, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___push_(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec,
    std::vector<std::shared_ptr<std::string>> const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.RefStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__vector_std__shared_ptr_std__string___pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.RefStdVector{STL.SharedStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__vector_std__shared_ptr_std__string___pop_back_(
    std::vector<std::vector<std::shared_ptr<std::string>>> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__new", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdString}}, ())
    return RefStdVector{STL.SharedStdString}(res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_vector_std__shared_ptr_std__string__new(
    
) {
    return new std::vector<std::shared_ptr<std::string>>;
}

/*
function RefStdVector_new(type::Type{STL.SharedStdString}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__string__new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdString}}, (UInt64,), size)
    return RefStdVector{STL.SharedStdString}(res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_vector_std__shared_ptr_std__string__new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::shared_ptr<std::string>>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__delete(
    std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdString}}, (Ptr{STL.StdVector{STL.SharedStdString}},), vec)
    return RefStdVector{STL.SharedStdString}(res)::STL.RefStdVector{STL.SharedStdString}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_vector_std__shared_ptr_std__string__copy(
    const std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    return new std::vector<std::shared_ptr<std::string>>(*vec);
}

static_assert(sizeof(std::vector<std::shared_ptr<std::string>>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__construct(
    void * ptr
) {
    new(ptr) std::vector<std::shared_ptr<std::string>>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdString}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__string__construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::shared_ptr<std::string>>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__destruct(
    std::vector<std::shared_ptr<std::string>> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.SharedStdString}, vec::STL.GCStdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}}, Ptr{STL.StdVector{STL.SharedStdString}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__copy_construct(
    std::vector<std::shared_ptr<std::string>> * restrict ptr,
    const std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    new(ptr) std::vector<std::shared_ptr<std::string>>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::shared_ptr<std::string>>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::string>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::string>>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdString}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::string>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::string>>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_delete(
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.SharedStdString}, vec::STL.SharedStdVector{STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.SharedStdString}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__string__placement_copy(
    void * ptr,
    const std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::string>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::string>>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.SharedStdString})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__string__get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::shared_ptr<std::string>> * std_shared_ptr_std_vector_std__shared_ptr_std__string__get(
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.SharedStdString}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__string__resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__resize_(
    std::vector<std::shared_ptr<std::string>> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.SharedStdString}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__shared_ptr_std__string__length(
    const std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.SharedStdString}, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__string__getindex", "libSTL.dylib"), Ptr{STL.SharedStdString}, (Ptr{STL.StdVector{STL.SharedStdString}}, UInt64), vec, idx)
    return convert_result(STL.SharedStdString, res)::STL.SharedStdString
end
*/
extern "C" std::shared_ptr<std::string> * std_vector_std__shared_ptr_std__string__getindex(
    std::vector<std::shared_ptr<std::string>> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.SharedStdString}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__string__setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}}, Ptr{STL.SharedStdString}, UInt64), vec, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__setindex_(
    std::vector<std::shared_ptr<std::string>> * restrict vec,
    std::shared_ptr<std::string> const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVector{STL.SharedStdString}, vec2::STL.StdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.SharedStdString}}, Ptr{STL.StdVector{STL.SharedStdString}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__shared_ptr_std__string__equals(
    const std::vector<std::shared_ptr<std::string>> * restrict vec1,
    const std::vector<std::shared_ptr<std::string>> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{STL.SharedStdString}, elt::Any)
    res = ccall(("std_vector_std__shared_ptr_std__string__push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}}, Ptr{STL.SharedStdString}), vec, convert_arg(Ptr{STL.SharedStdString}, convert(STL.SharedStdString, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__push_(
    std::vector<std::shared_ptr<std::string>> * restrict vec,
    std::shared_ptr<std::string> const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.SharedStdString})
    res = ccall(("std_vector_std__shared_ptr_std__string__pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdString}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__string__pop_back_(
    std::vector<std::shared_ptr<std::string>> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___new", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, ())
    return RefStdVector{STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::string>>> * std_vector_std__shared_ptr_std__vector_std__string___new(
    
) {
    return new std::vector<std::shared_ptr<std::vector<std::string>>>;
}

/*
function RefStdVector_new(type::Type{STL.SharedStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, (UInt64,), size)
    return RefStdVector{STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::string>>> * std_vector_std__shared_ptr_std__vector_std__string___new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::shared_ptr<std::vector<std::string>>>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___delete(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), vec)
    return RefStdVector{STL.SharedStdVector{STL.RefStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.RefStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::string>>> * std_vector_std__shared_ptr_std__vector_std__string___copy(
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    return new std::vector<std::shared_ptr<std::vector<std::string>>>(*vec);
}

static_assert(sizeof(std::vector<std::shared_ptr<std::vector<std::string>>>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___construct(
    void * ptr
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::string>>>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::string>>>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___destruct(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.RefStdString}}, vec::STL.GCStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___copy_construct(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict ptr,
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::string>>>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::string>>>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::string>>>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_delete(
    std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}}, vec::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___placement_copy(
    void * ptr,
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::string>>>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::string>>> * std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__string___get(
    std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::string>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___resize_(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__shared_ptr_std__vector_std__string___length(
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}}, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.RefStdString}}, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, UInt64), vec, idx)
    return convert_result(STL.SharedStdVector{STL.RefStdString}, res)::STL.SharedStdVector{STL.RefStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::string>> * std_vector_std__shared_ptr_std__vector_std__string___getindex(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}, UInt64), vec, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___setindex_(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec,
    std::shared_ptr<std::vector<std::string>> const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVector{STL.SharedStdVector{STL.RefStdString}}, vec2::STL.StdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__shared_ptr_std__vector_std__string___equals(
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec1,
    const std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}}, elt::Any)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}}, Ptr{STL.SharedStdVector{STL.RefStdString}}), vec, convert_arg(Ptr{STL.SharedStdVector{STL.RefStdString}}, convert(STL.SharedStdVector{STL.RefStdString}, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___push_(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec,
    std::shared_ptr<std::vector<std::string>> const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.SharedStdVector{STL.RefStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__string___pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.RefStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__string___pop_back_(
    std::vector<std::shared_ptr<std::vector<std::string>>> * restrict vec
) {
    vec->pop_back();
}

/*
function RefStdVector_new(type::Type{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____new", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, ())
    return RefStdVector{STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____new(
    
) {
    return new std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function RefStdVector_new(type::Type{STL.SharedStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____new_std_size_t", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, (UInt64,), size)
    return RefStdVector{STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____new_std_size_t(
    std::size_t size
) {
    return new std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(size);
}

/*
function RefStdVector_delete(vec::STL.RefStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____delete(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    delete vec;
}

/*
function Base.copy(vec::STL.RefStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy", "libSTL.dylib"), Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), vec)
    return RefStdVector{STL.SharedStdVector{STL.SharedStdString}}(res)::STL.RefStdVector{STL.SharedStdVector{STL.SharedStdString}}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy(
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    return new std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

static_assert(sizeof(std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>) <= 40, "");

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct(
    void * ptr
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>;
}

/*
function GCStdVector_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, UInt64), ptr, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____construct_std_size_t(
    void * ptr,
    std::size_t size
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(size);
}

/*
function GCStdVector_destruct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), ptr)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____destruct(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr
) {
    ptr->~vector();
}

/*
function GCStdVector_copy_construct(ptr::STL.GCStdVector{STL.SharedStdVector{STL.SharedStdString}}, vec::STL.GCStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}), ptr, vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____copy_construct(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict ptr,
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    new(ptr) std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>(*vec);
}

static_assert(sizeof(std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>) <= 16, "");

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>();

}

/*
function SharedStdVector_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, UInt64), pointer_from_objref(ptr), size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_new_std_size_t(
    void * ptr,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(size);

}

/*
function SharedStdVector_destruct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_delete(
    std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdVector_copy_construct(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}}, vec::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}), pointer_from_objref(ptr), vec)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____placement_copy(
    void * ptr,
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    auto res = new(ptr) std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>;
*res = std::make_shared<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>>(*vec);

}

/*
function SharedStdVector_get(ptr::STL.SharedStdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____get", "libSTL.dylib"), Ptr{STL.StdVector}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdVector}
end
*/
extern "C" std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * std_shared_ptr_std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____get(
    std::shared_ptr<std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>>> * restrict ptr
) {
    return ptr->get();
}

/*
function Base.resize!(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}, size::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____resize_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, UInt64), vec, size)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____resize_(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec,
    std::size_t size
) {
    vec->resize(size);
}

/*
function Base.length(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____length", "libSTL.dylib"), UInt64, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), vec)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____length(
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
) {
    return vec->size();
}

/*
function Base.getindex(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex", "libSTL.dylib"), Ptr{STL.SharedStdVector{STL.SharedStdString}}, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, UInt64), vec, idx)
    return convert_result(STL.SharedStdVector{STL.SharedStdString}, res)::STL.SharedStdVector{STL.SharedStdString}
end
*/
extern "C" std::shared_ptr<std::vector<std::shared_ptr<std::string>>> * std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____getindex(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec,
    std::size_t idx
) {
    return &(*vec)[idx];
}

/*
function Base.setindex!(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}, elt::Any, idx::Integer)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}, UInt64), vec, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)), idx)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____setindex_(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt,
    std::size_t idx
) {
    (*vec)[idx] = *elt;
}

/*
function Base.:(==)(vec1::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}, vec2::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals", "libSTL.dylib"), Bool, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}), vec1, vec2)
    return res::Bool
end
*/
extern "C" bool std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____equals(
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec1,
    const std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec2
) {
    return *vec1 == *vec2;
}

/*
function Base.push!(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}, elt::Any)
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____push_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}}, Ptr{STL.SharedStdVector{STL.SharedStdString}}), vec, convert_arg(Ptr{STL.SharedStdVector{STL.SharedStdString}}, convert(STL.SharedStdVector{STL.SharedStdString}, elt)))
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____push_(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec,
    std::shared_ptr<std::vector<std::shared_ptr<std::string>>> const * elt
) {
    vec->push_back(*elt);
}

/*
function pop_back!(vec::STL.StdVector{STL.SharedStdVector{STL.SharedStdString}})
    res = ccall(("std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____pop_back_", "libSTL.dylib"), Nothing, (Ptr{STL.StdVector{STL.SharedStdVector{STL.SharedStdString}}},), vec)
    return res::Nothing
end
*/
extern "C" void std_vector_std__shared_ptr_std__vector_std__shared_ptr_std__string____pop_back_(
    std::vector<std::shared_ptr<std::vector<std::shared_ptr<std::string>>>> * restrict vec
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

