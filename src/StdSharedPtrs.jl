module StdSharedPtrs

using ..Stds
using CxxInterface
using STL_jll

################################################################################

eval(cxxprelude("""
    #include <memory>

    static_assert(sizeof(bool) == 1, "");
    """))

struct StdSharedPtr{T}
    cxx::Ptr{StdSharedPtr{T}}
    StdSharedPtr{T}(cxx::Ptr{StdSharedPtr{T}}) where {T} = new{T}(cxx)
end
export StdSharedPtr
Base.cconvert(::Type{Ptr{StdSharedPtr{T}}}, ptr::StdSharedPtr{T}) where {T} = ptr.cxx

Stds.convert_arg(::Type{Ptr{StdSharedPtr{T}}}, ptr::StdSharedPtr{T}) where {T} = ptr.cxx
Stds.convert_result(::Type{StdSharedPtr{T}}, ptr::Ptr{StdSharedPtr{T}}) where {T} = StdSharedPtr{T}(ptr)

StdSharedPtr{T}() where {T} = StdSharedPtr_new(T)

const types = Stds.value_types
for T in types
    CT = T == Bool ? "bool" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(Symbol(:StdSharedPtr_new), "std_shared_ptr_$(NT)_new", libSTL),
                     FnResult(Ptr{StdSharedPtr{T}}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::shared_ptr<$CT>;"))

    eval(cxxfunction(FnName(:StdSharedPtr_delete, "std_shared_ptr_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "delete ptr;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_shared_ptr_$(NT)_copy", libSTL),
                     FnResult(Ptr{StdSharedPtr{T}}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return new std::shared_ptr<$CT>(*ptr);"))

    eval(cxxfunction(FnName(:(Base.empty!), "std_shared_ptr_$(NT)_empty_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "ptr->reset();"))

    eval(cxxfunction(FnName(:(Base.isempty), "std_shared_ptr_$(NT)_isempty", libSTL), FnResult(Bool, "uint8_t"),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return !*ptr;"))

    # if T == Bool
    #     eval(cxxfunction(FnName(:(Base.getindex), "std_shared_ptr_$(NT)_getindex", libSTL), FnResult(T, CT),
    #                      [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
    #                      "return **ptr;"))
    # else
    eval(cxxfunction(FnName(:(Base.getindex), "std_shared_ptr_$(NT)_getindex", libSTL),
                     FnResult(Ptr{T}, "$CT *", T, expr -> :(convert_result($T, $expr))),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return &**ptr;"))
    # end

    eval(cxxfunction(FnName(:(Base.setindex!), "std_shared_ptr_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity),
                      FnArg(:val, Ptr{T}, "val", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr))))],
                     "**ptr = *val;"))

    eval(cxxfunction(FnName(:use_count, "std_shared_ptr_$(NT)_use_count", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:ptr, Ptr{StdSharedPtr{T}}, "ptr", "const std::shared_ptr<$CT> * restrict", StdSharedPtr{T}, identity)],
                     "return ptr->use_count();"))
    export use_count

    eval(cxxfunction(FnName(:make_shared, "std_make_shared_$(NT)", libSTL),
                     FnResult(Ptr{StdSharedPtr{T}}, "std::shared_ptr<$CT> *", StdSharedPtr{T}, expr -> :(StdSharedPtr{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:val, Ptr{T}, "val", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr))))],
                     """
                     auto valptr = std::make_shared<$CT>(*val);
                     auto ptr = new std::shared_ptr<$CT>;
                     ptr->swap(valptr);
                     return ptr;
                     """))
    export make_shared
end

Stds.free(ptr::StdSharedPtr) = StdSharedPtr_delete(ptr)

Base.eltype(::StdSharedPtr{T}) where {T} = T

################################################################################

mutable struct GCStdSharedPtr{T}
    managed::StdSharedPtr{T}
    function GCStdSharedPtr{T}(ptr::StdSharedPtr{T}) where {T}
        res = new{T}(ptr)
        finalizer(free, res)
        return res
    end
end
export GCStdSharedPtr

GCStdSharedPtr{T}() where {T} = GCStdSharedPtr{T}(StdSharedPtr{T}())

Stds.free(ptr::GCStdSharedPtr) = free(vec.managed)

Base.empty(ptr::GCStdSharedPtr) = empty!(ptr.managed)
Base.isempty(ptr::GCStdSharedPtr) = isempty(ptr.managed)
Base.getindex(ptr::GCStdSharedPtr) = getindex(ptr.managed)
Base.setindex!(ptr::GCStdSharedPtr, val) = setindex!(ptr.managed, val)
Base.eltype(::GCStdSharedPtr{T}) where {T} = eltype(StdSharedPtr{T})

end
