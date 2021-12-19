module StdSharedPtrs

using CxxInterface
using STL_jll
using ..STL

const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble, Complex{Cfloat}, Complex{Cdouble}])

################################################################################

eval(cxxprelude("""
    #include <complex>
    #include <cstddef>
    #include <cstdint>
    #include <memory>
    """))

struct StdSharedPtr{T}
    cxx::Ptr{Cvoid}
    StdSharedPtr{T}() where {T} = new{T}(C_NULL)
    StdSharedPtr{T}(cxx::Ptr{Cvoid}) where {T} = new{T}(cxx)
end
export StdSharedPtr
Base.cconvert(::Type{Ptr{Cvoid}}, ptr::StdSharedPtr) = ptr.cxx

for T in types
    CT = cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdSharedPtr_new), "std_shared_ptr_$(NT)_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::shared_ptr<$CT>;"))

    eval(cxxfunction(FnName(:StdSharedPtr_delete, "std_shared_ptr_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)], "delete ptr;"))

    eval(cxxfunction(FnName(:(Base.isempty), "std_shared_ptr_$(NT)_isempty", libSTL),
                     FnResult(Cint, "int", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return !*ptr;"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_shared_ptr_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return **ptr;"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_shared_ptr_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity),
                      FnArg(:elt, T, "elt", "const $CT&")], "**ptr = elt;"))
end

STL.allocate(::Type{StdSharedPtr{T}}) where {T} = StdSharedPtr_new(T)
STL.free(ptr::StdSharedPtr) = StdSharedPtr_delete(ptr)

Base.eltype(::StdSharedPtr{T}) where {T} = T

################################################################################

mutable struct GCStdSharedPtr{T}
    managed::StdSharedPtr{T}
    function GCStdSharedPtr{T}() where {T}
        res = new{T}(allocate(StdSharedPtr{T}))
        finalizer(free, res)
        return res
    end
end
export GCStdSharedPtr
Base.cconvert(ptr::GCStdSharedPtr) = cconvert(ptr.managed)

Base.isempty(ptr::GCStdSharedPtr) = isempty(ptr.managed)
Base.getindex(ptr::GCStdSharedPtr) = getindex(ptr.managed)
Base.setindex!(ptr::GCStdSharedPtr, elt) = setindex!(ptr.managed, elt)
Base.eltype(::GCStdSharedPtr{T}) where {T} = eltype(StdSharedPtr{T})

end