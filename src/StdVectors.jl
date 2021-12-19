module StdVectors

using CxxInterface
using STL_jll
using ..STL

const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble, Complex{Cfloat}, Complex{Cdouble}])

################################################################################

eval(cxxprelude("""
    #include <complex>
    #include <cstddef>
    #include <cstdint>
    #include <vector>
    """))

struct StdVector{T} <: AbstractVector{T}
    cxx::Ptr{Cvoid}
    StdVector{T}() where {T} = new{T}(C_NULL)
    StdVector{T}(cxx::Ptr{Cvoid}) where {T} = new{T}(cxx)
end
export StdVector
Base.cconvert(::Type{Ptr{Cvoid}}, vec::StdVector) = vec.cxx

for T in types
    CT = cxxtype[T]
    NT = cxxname(CT)

    # TODO: allocate with size, resize, clear
    # TODO: for shared ptr, allocated with object, reset

    eval(cxxfunction(FnName(:StdVector_new, "std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::vector<$CT>;"))

    eval(cxxfunction(FnName(:StdVector_delete, "std_vector_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity)], "delete vec;"))

    eval(cxxfunction(FnName(:(Base.length), "std_vector_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return vec->size();"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*vec)[idx];"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_vector_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{Cvoid}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:elt, T, "elt", "const $CT&"), FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)],
                     "(*vec)[idx] = elt;"))
end

STL.allocate(::Type{StdVector{T}}) where {T} = StdVector_new(T)
STL.free(vec::StdVector) = StdVector_delete(vec)

Base.size(vec::StdVector) = (length(vec),)

Base.eltype(::StdVector{T}) where {T} = T

################################################################################

mutable struct GCStdVector{T} <: AbstractVector{T}
    managed::StdVector{T}
    function GCStdVector{T}() where {T}
        res = new{T}(allocate(StdVector{T}))
        finalizer(free, res)
        return res
    end
end
export GCStdVector
Base.cconvert(vec::GCStdVector) = cconvert(vec.managed)

Base.length(vec::GCStdVector) = length(vec.managed)
Base.getindex(vec::GCStdVector, idx) = getindex(vec.managed, idx)
Base.setindex!(vec::GCStdVector, elt, idx) = setindex!(vec.managed, elt, idx)
Base.size(vec::GCStdVector) = size(vec.managed)
Base.eltype(::GCStdVector{T}) where {T} = eltype(StdVector{T})

end
