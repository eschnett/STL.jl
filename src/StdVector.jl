# StdVector

eval(cxxnewfile("StdVector.cxx", """
    #include <string>
    #include <memory>
    #include <vector>

    static_assert(sizeof(bool) == 1, "");
    """))

function generate(::Type{StdVector{T}}) where {T}
    CT = T == Bool ? "bool" : T == StdString ? "std::string" : cxxtype[T]
    NT = cxxname(CT)

    # RefStdVector

    eval(cxxfunction(FnName(:RefStdVector_new, "std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::vector<$CT>;"))
    eval(cxxfunction(FnName(:RefStdVector_new, "std_vector_$(NT)_new_std_size_t", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::vector<$CT>(size);"))

    eval(cxxfunction(FnName(:RefStdVector_delete, "std_vector_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "delete vec;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_vector_$(NT)_copy", libSTL),
                     FnResult(Ptr{StdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "const std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "return new std::vector<$CT>(*vec);"))

    # GCStdVector

    eval(cxxcode("static_assert(sizeof(std::vector<$CT>) <= $GCStdVector_size, \"\");"))

    eval(cxxfunction(FnName(:GCStdVector_construct, "std_vector_$(NT)_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdVector{T}}, "ptr", "void *", GCStdVector{T}, identity)], "new(ptr) std::vector<$CT>;"))
    eval(cxxfunction(FnName(:GCStdVector_construct, "std_vector_$(NT)_construct_std_size_t", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdVector{T}}, "ptr", "void *", GCStdVector{T}, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "new(ptr) std::vector<$CT>(size);"))

    eval(cxxfunction(FnName(:GCStdVector_destruct, "std_vector_$(NT)_destruct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdVector{T}}, "ptr", "std::vector<$CT> * restrict", GCStdVector{T}, identity)],
                     "ptr->~vector();"))

    eval(cxxfunction(FnName(:GCStdVector_copy_construct, "std_vector_$(NT)_copy_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdVector{T}}, "ptr", "std::vector<$CT> * restrict", GCStdVector{T}, identity),
                      FnArg(:vec, Ptr{StdVector{T}}, "vec", "const std::vector<$CT> * restrict", GCStdVector{T}, identity)],
                     "new(ptr) std::vector<$CT>(*vec);"))
    @eval Base.copy(vec::GCStdVector{$T}) = GCStdVector{$T}(Base.copy, vec)

    # SharedStdVector

    eval(cxxcode("static_assert(sizeof(std::shared_ptr<std::vector<$CT>>) <= $SharedStdVector_size, \"\");"))

    eval(cxxfunction(FnName(:SharedStdVector_construct, "std_shared_ptr_std_vector_$(NT)_placement_new", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdVector{T}, expr -> :(pointer_from_objref($expr)))],
                     """
                     auto res = new(ptr) std::shared_ptr<std::vector<$CT>>;
                     *res = std::make_shared<std::vector<$CT>>();
                     """))
    eval(cxxfunction(FnName(:SharedStdVector_construct, "std_shared_ptr_std_vector_$(NT)_placement_new_std_size_t", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdVector{T}, expr -> :(pointer_from_objref($expr))),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)],
                     """
                     auto res = new(ptr) std::shared_ptr<std::vector<$CT>>;
                     *res = std::make_shared<std::vector<$CT>>(size);
                     """))

    eval(cxxfunction(FnName(:SharedStdVector_destruct, "std_shared_ptr_std_vector_$(NT)_placement_delete", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::vector<$CT>> * restrict", SharedStdVector{T},
                            expr -> :(pointer_from_objref($expr)))], "ptr->~shared_ptr();"))

    eval(cxxfunction(FnName(:SharedStdVector_copy_construct, "std_shared_ptr_std_vector_$(NT)_placement_copy", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdVector{T}, expr -> :(pointer_from_objref($expr))),
                      FnArg(:vec, Ptr{StdVector{T}}, "vec", "const std::vector<$CT> * restrict", SharedStdVector{T}, identity)],
                     """
                     auto res = new(ptr) std::shared_ptr<std::vector<$CT>>;
                     *res = std::make_shared<std::vector<$CT>>(*vec);
                     """))
    @eval Base.copy(vec::SharedStdVector{$T}) = SharedStdVector{$T}(Base.copy, vec)

    eval(cxxfunction(FnName(:SharedStdVector_get, "std_shared_ptr_std_vector_$(NT)_get", libSTL),
                     FnResult(Ptr{StdVector}, "std::vector<$CT> *"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::vector<$CT>> * restrict", SharedStdVector{T},
                            expr -> :(pointer_from_objref($expr)))], "return ptr->get();"))

    # StdVector

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
    # eval(cxxfunction(FnName(:(Base.:(<)), "std_vector_$(NT)_less", libSTL), FnResult(Bool, "bool"),
    #                  [FnArg(:vec1, Ptr{StdVector{T}}, "vec1", "const std::vector<$CT> * restrict", StdVector{T}, identity),
    #                   FnArg(:vec2, Ptr{StdVector{T}}, "vec2", "const std::vector<$CT> * restrict", StdVector{T}, identity)],
    #                  "return *vec1 < *vec2;"))

    eval(cxxfunction(FnName(:(Base.push!), "std_vector_$(NT)_push_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity),
                      FnArg(:elt, Ptr{T}, "elt", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr))))],
                     "vec->push_back(*elt);"))
    eval(cxxfunction(FnName(:pop_back!, "std_vector_$(NT)_pop_back_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{StdVector{T}}, "vec", "std::vector<$CT> * restrict", StdVector{T}, identity)],
                     "vec->pop_back();"))
    @eval Base.pop!(vec::StdVector) = (elt = vec[end]; pop_back!(vec); elt)

    return nothing
end

const StdVector_types = value_types ∪ Set([StdString])
for T in sort!(collect(StdVector_types); by=string)
    generate(StdVector{T})
end

free(vec::RefStdVector) = RefStdVector_delete(vec)

################################################################################

Base.convert(::Type{Vector{T}}, vec::StdVector{T}) where {T} = T[elt for elt in vec]
Base.convert(::Type{Vector}, vec::StdVector{T}) where {T} = convert(Vector{T}, vec)

Base.empty!(vec::StdVector) = resize!(vec, 0)
Base.isempty(vec::StdVector) = length(vec) == 0
Base.size(vec::StdVector) = (length(vec),)
Base.firstindex(vec::StdVector) = 0
Base.lastindex(vec::StdVector) = length(vec) - 1

Base.eltype(::StdVector{T}) where {T} = T

function Base.iterate(vec::StdVector, pos::Int=0)
    pos ≥ length(vec) && return nothing
    return vec[pos], pos + 1
end
