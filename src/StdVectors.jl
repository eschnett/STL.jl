module StdVectors

using ..StdStrings
using ..Stds
using CxxInterface
using STL_jll

################################################################################

eval(cxxprelude("""
    #include <string>
    #include <vector>
    """))

abstract type AbstractStdVector{T} <: AbstractVector{T} end

struct StdVector{T} <: AbstractStdVector{T}
    cxx::Ptr{StdVector{T}}
    StdVector{T}(cxx::Ptr{StdVector{T}}) where {T} = new{T}(cxx)
end
export StdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::StdVector{T}) where {T} = vec.cxx

Stds.convert_arg(::Type{Ptr{StdVector{T}}}, vec::StdVector{T}) where {T} = vec.cxx
Stds.convert_result(::Type{StdVector{T}}, ptr::Ptr{StdVector{T}}) where {T} = StdVector{T}(ptr)

StdVector{T}() where {T} = StdVector_new(T)
StdVector{T}(size::Integer) where {T} = StdVector_new(T, size)
# Base.convert(::Type{Vector}, vec::StdVector) = ...
# Base.convert(::Type{Vector{T}}, vec::StdVector) = ...

function generate(::Type{StdVector{T}}) where {T}
    CT = T == Bool ? "bool" : T == StdString ? "std::string" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(:StdVector_new, "std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::vector<$CT>;"))
    eval(cxxfunction(FnName(:StdVector_new, "std_vector_$(NT)_new_std_size_t", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::vector<$CT>(size);"))

    eval(cxxfunction(FnName(:StdVector_delete, "std_vector_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity)], "delete vec;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_vector_$(NT)_copy", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", StdVector{T}, expr -> :(StdVector{$T}($expr))),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return new std::vector<$CT>(*vec);"))

    eval(cxxfunction(FnName(:(Base.resize!), "std_vector_$(NT)_resize_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "vec->resize(size);"))

    eval(cxxfunction(FnName(:(Base.length), "std_vector_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return vec->size();"))

    if T == Bool
        eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL), FnResult(T, CT),
                         [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                          FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*vec)[idx];"))
    else
        eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL),
                         FnResult(Ptr{T}, "$CT *", T, expr -> :(convert_result($T, $expr))),
                         [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                          FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return &(*vec)[idx];"))
    end

    eval(cxxfunction(FnName(:(Base.setindex!), "std_vector_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:elt, Ptr{T}, "elt", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr)))),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "(*vec)[idx] = *elt;"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_vector_$(NT)_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:vec1, Ptr{StdVector{T}}, "vec1", "const std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:vec2, Ptr{StdVector{T}}, "vec2", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "return *vec1 == *vec2;"))

    return nothing
end

const types = Stds.value_types ∪ Set([StdString])
for T in sort!(collect(types); by=string)
    generate(StdVector{T})
end

Stds.free(vec::StdVector) = StdVector_delete(vec)

Base.empty!(vec::StdVector) = resize!(vec, 0)
Base.isempty(vec::StdVector) = length(vec) == 0
Base.size(vec::StdVector) = (length(vec),)

Base.eltype(::StdVector{T}) where {T} = T

################################################################################

mutable struct GCStdVector{T} <: AbstractStdVector{T}
    managed::StdVector{T}
    function GCStdVector{T}(vec::StdVector{T}) where {T}
        res = new{T}(vec)
        finalizer(free, res)
        return res
    end
end
export GCStdVector

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
