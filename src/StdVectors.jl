module StdVectors

using ..Stds
using CxxInterface
using STL_jll

const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble, Complex{Cfloat}, Complex{Cdouble}])

################################################################################

eval(cxxprelude("""
    #include <cstddef>
    #include <utility>
    #include <vector>
    """))

struct StdVector{T} <: AbstractVector{T}
    cxx::Ptr{Cvoid}
    StdVector{T}(cxx::Ptr{Cvoid}) where {T} = new{T}(cxx)
end
export StdVector
Base.cconvert(::Type{Ptr{Cvoid}}, vec::StdVector) = vec.cxx

StdVector{T}() where {T} = StdVector_new(T)
StdVector{T}(size::Integer) where {T} = StdVector_new(T, size)

for T in types
    CT = cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(:StdVector_new, "std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::vector<$CT>;"))
    eval(cxxfunction(FnName(:StdVector_new, "std_vector_$(NT)_new_std_size_t", libSTL),
                     FnResult(Ptr{Cvoid}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::vector<$CT>(size);"))

    eval(cxxfunction(FnName(:StdVector_delete, "std_vector_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity)], "delete vec;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_vector_$(NT)_copy", libSTL),
                     FnResult(Ptr{Cvoid}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return new std::vector<$CT>(*ptr);"))

    eval(cxxfunction(FnName(:(Base.resize!), "std_vector_$(NT)_resize_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "vec->resize(size);"))

    eval(cxxfunction(FnName(:(Base.length), "std_vector_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return vec->size();"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*vec)[idx];"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_vector_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:elt, T, "elt", CT, Any, expr -> :(convert($T, $expr))),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "(*vec)[idx] = std::move(elt);"))
end

Stds.free(vec::StdVector) = StdVector_delete(vec)

Base.empty!(vec::StdVector) = resize!(vec, 0)
Base.isempty(vec::StdVector) = length(vec) == 0
Base.size(vec::StdVector) = (length(vec),)

Base.eltype(::StdVector{T}) where {T} = T

################################################################################

mutable struct GCStdVector{T} <: AbstractVector{T}
    managed::StdVector{T}
    function GCStdVector{T}(vec::StdVector{T}) where {T}
        res = new{T}(vec)
        finalizer(free, res)
        return res
    end
end
export GCStdVector
Base.cconvert(::Type{Ptr{Cvoid}}, vec::GCStdVector) = cconvert(vec.managed)

GCStdVector{T}() where {T} = GCStdVector{T}(StdVector{T}())
GCStdVector{T}(size::Integer) where {T} = GCStdVector{T}(StdVector{T}(size))

Stds.free(vec::GCStdVector) = free(vec.managed)

Base.resize!(vec::GCStdVector, size) = resize!(vec.managed, size)
Base.empty!(vec::GCStdVector) = empty!(vec.managed)
Base.length(vec::GCStdVector) = length(vec.managed)
Base.isempty(vec::GCStdVector) = isempty(vec.managed)
Base.getindex(vec::GCStdVector, idx) = getindex(vec.managed, idx)
Base.setindex!(vec::GCStdVector, elt, idx) = setindex!(vec.managed, elt, idx)
Base.size(vec::GCStdVector) = size(vec.managed)
Base.eltype(::GCStdVector{T}) where {T} = eltype(StdVector{T})

end
