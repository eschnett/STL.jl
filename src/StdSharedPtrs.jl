module StdSharedPtrs

using ..Stds
using CxxInterface
using STL_jll

const types = Set([Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Cfloat, Cdouble, Complex{Cfloat}, Complex{Cdouble}])

################################################################################

eval(cxxprelude("""
    #include <memory>
    #include <utility>
    """))

struct StdSharedPtr{T}
    cxx::Ptr{Cvoid}
    StdSharedPtr{T}(cxx::Ptr{Cvoid}) where {T} = new{T}(cxx)
end
export StdSharedPtr
Base.cconvert(::Type{Ptr{Cvoid}}, ptr::StdSharedPtr) = ptr.cxx

StdSharedPtr{T}() where {T} = StdSharedPtr_new(T)

for T in types
    CT = cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdSharedPtr_new), "std_shared_ptr_$(NT)_new", libSTL),
                     FnResult(Ptr{Cvoid}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::shared_ptr<$CT>;"))

    eval(cxxfunction(FnName(:StdSharedPtr_delete, "std_shared_ptr_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)], "delete ptr;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_shared_ptr_$(NT)_copy", libSTL),
                     FnResult(Ptr{Cvoid}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return new std::shared_ptr<$CT>(*ptr);"))

    eval(cxxfunction(FnName(:(Base.empty!), "std_shared_ptr_$(NT)_empty_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "ptr->reset();"))

    eval(cxxfunction(FnName(:(Base.isempty), "std_shared_ptr_$(NT)_isempty", libSTL),
                     FnResult(Cint, "int", Bool, expr -> :(convert(Bool, $expr))),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return !*ptr;"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_shared_ptr_$(NT)_getindex", libSTL), FnResult(T, CT),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return **ptr;"))

    # Call `std::make_shared` if the stored pointer is null
    eval(cxxfunction(FnName(:(Base.setindex!), "std_shared_ptr_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity),
                      FnArg(:val, T, "val", CT)], """
                                                      if (*ptr) {
                                                          **ptr = std::move(val);
                                                      } else {
                                                          auto newptr = std::make_shared<$CT>(std::move(val));
                                                          ptr->swap(newptr);
                                                      }
                                                      """))

    eval(cxxfunction(FnName(:use_count, "std_shared_ptr_$(NT)_use_count", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return ptr->use_count();"))
    export use_count

    eval(cxxfunction(FnName(:make_shared, "std_make_shared_$(NT)", libSTL),
                     FnResult(Ptr{Cvoid}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{T}(expr))),
                     [FnArg(:val, Any, "val", CT, T, expr -> :(convert($T, $expr)))],
                     """
                         auto ptr = new std::shared_ptr<$CT>;
                         auto newptr = std::make_shared<$CT>(std::move(val));
                         ptr->swap(newptr);
                         return ptr;
                         """))
    export make_shared
end

Stds.free(ptr::StdSharedPtr) = StdSharedPtr_delete(ptr)

Base.eltype(::StdSharedPtr{T}) where {T} = T

################################################################################

mutable struct GCStdSharedPtr{T}
    managed::StdSharedPtr{T}
    function GCStdSharedPtr{T}() where {T}
        res = new{T}(StdSharedPtr{T}())
        finalizer(free, res)
        return res
    end
end
export GCStdSharedPtr
Base.cconvert(::Type{Ptr{Cvoid}}, ptr::GCStdSharedPtr) = cconvert(ptr.managed)

Stds.free(ptr::GCStdSharedPtr) = free(vec.managed)

Base.empty(ptr::GCStdSharedPtr) = empty!(ptr.managed)
Base.isempty(ptr::GCStdSharedPtr) = isempty(ptr.managed)
Base.getindex(ptr::GCStdSharedPtr) = getindex(ptr.managed)
Base.setindex!(ptr::GCStdSharedPtr, val) = setindex!(ptr.managed, val)
Base.eltype(::GCStdSharedPtr{T}) where {T} = eltype(StdSharedPtr{T})

end
