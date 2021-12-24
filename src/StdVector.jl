# StdVector

eval(cxxnewfile("StdVector.cxx", """
    #include <string>
    #include <vector>

    static_assert(sizeof(bool) == 1, "");
    """))

Base.cconvert(::Type{Ptr{RefStdVector{T}}}, vec::RefStdVector{T}) where {T} = vec.cxx

convert_arg(::Type{Ptr{RefStdVector{T}}}, vec::RefStdVector{T}) where {T} = vec.cxx
convert_result(::Type{RefStdVector{T}}, ptr::Ptr{RefStdVector{T}}) where {T} = RefStdVector{T}(ptr)

RefStdVector{T}() where {T} = RefStdVector_new(T)
RefStdVector{T}(size::Integer) where {T} = RefStdVector_new(T, size)

Base.convert(::Type{Vector{T}}, vec::RefStdVector{T}) where {T} = T[elt for elt in vec]
Base.convert(::Type{Vector}, vec::RefStdVector{T}) where {T} = convert(Vector{T}, vec)

function generate(::Type{RefStdVector{T}}) where {T}
    CT = T == Bool ? "bool" : T == StdString ? "std::string" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(:RefStdVector_new, "std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{RefStdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], "return new std::vector<$CT>;"))
    eval(cxxfunction(FnName(:RefStdVector_new, "std_vector_$(NT)_new_std_size_t", libSTL),
                     FnResult(Ptr{RefStdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::vector<$CT>(size);"))

    eval(cxxfunction(FnName(:RefStdVector_delete, "std_vector_$(NT)_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "delete vec;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_vector_$(NT)_copy", libSTL),
                     FnResult(Ptr{RefStdVector{T}}, "std::vector<$CT> *", RefStdVector{T}, expr -> :(RefStdVector{$T}($expr))),
                     [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "const std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "return new std::vector<$CT>(*vec);"))

    eval(cxxfunction(FnName(:(Base.resize!), "std_vector_$(NT)_resize_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "vec->resize(size);"))

    eval(cxxfunction(FnName(:(Base.length), "std_vector_$(NT)_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "const std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "return vec->size();"))

    if T == Bool
        eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL), FnResult(T, CT),
                         [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity),
                          FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*vec)[idx];"))
    else
        eval(cxxfunction(FnName(:(Base.getindex), "std_vector_$(NT)_getindex", libSTL),
                         FnResult(Ptr{T}, "$CT *", T, expr -> :(convert_result($T, $expr))),
                         [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity),
                          FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return &(*vec)[idx];"))
    end

    eval(cxxfunction(FnName(:(Base.setindex!), "std_vector_$(NT)_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:vec, Ptr{RefStdVector{T}}, "vec", "std::vector<$CT> * restrict", RefStdVector{T}, identity),
                      FnArg(:elt, Ptr{T}, "elt", "$CT const *", Any, expr -> :(convert_arg(Ptr{$T}, convert($T, $expr)))),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "(*vec)[idx] = *elt;"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_vector_$(NT)_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:vec1, Ptr{RefStdVector{T}}, "vec1", "const std::vector<$CT> * restrict", RefStdVector{T}, identity),
                      FnArg(:vec2, Ptr{RefStdVector{T}}, "vec2", "const std::vector<$CT> * restrict", RefStdVector{T}, identity)],
                     "return *vec1 == *vec2;"))

    return nothing
end

const StdVector_types = value_types ∪ Set([StdString])
for T in sort!(collect(StdVector_types); by=string)
    generate(RefStdVector{T})
end

free(vec::RefStdVector) = RefStdVector_delete(vec)

Base.empty!(vec::RefStdVector) = resize!(vec, 0)
Base.isempty(vec::RefStdVector) = length(vec) == 0
Base.size(vec::RefStdVector) = (length(vec),)
Base.firstindex(vec::RefStdVector) = 0
Base.lastindex(vec::RefStdVector) = length(vec) - 1

Base.eltype(::RefStdVector{T}) where {T} = T

function Base.iterate(vec::RefStdVector, pos::Int=0)
    pos ≥ length(vec) && return nothing
    return vec[pos], pos + 1
end

################################################################################

GCStdVector{T}() where {T} = GCStdVector{T}(RefStdVector{T}())
GCStdVector{T}(size::Integer) where {T} = GCStdVector{T}(RefStdVector{T}(size))

Base.convert(::Type{Vector{T}}, vec::GCStdVector{T}) where {T} = convert(Vector{T}, vec.managed)
Base.convert(::Type{Vector}, vec::GCStdVector) = convert(Vector, vec.managed)

free(vec::GCStdVector) = free(vec.managed)

Base.resize!(vec::GCStdVector, size) = resize!(vec.managed, size)
Base.empty!(vec::GCStdVector) = empty!(vec.managed)
Base.length(vec::GCStdVector) = length(vec.managed)
Base.isempty(vec::GCStdVector) = isempty(vec.managed)
Base.getindex(vec::GCStdVector, idx) = getindex(vec.managed, idx)
Base.setindex!(vec::GCStdVector, elt, idx) = setindex!(vec.managed, elt, idx)
Base.size(vec::GCStdVector) = size(vec.managed)
Base.firstindex(vec::GCStdVector) = firstindex(vec.managed)
Base.lastindex(vec::GCStdVector) = lastindex(vec.managed)
Base.eltype(::GCStdVector{T}) where {T} = eltype(RefStdVector{T})
Base.iterate(vec::GCStdVector) = iterate(vec.managed)
Base.iterate(vec::GCStdVector, pos::Integer) = iterate(vec.managed, pos)

################################################################################

Base.cconvert(::Type{Ptr{StdSharedStdVector{T}}}, vec::StdSharedStdVector{T}) where {T} = vec.cxx

convert_arg(::Type{Ptr{StdSharedStdVector{T}}}, vec::StdSharedStdVector{T}) where {T} = vec.cxx
convert_result(::Type{StdSharedStdVector{T}}, ptr::Ptr{StdSharedStdVector{T}}) where {T} = StdSharedStdVector{T}(ptr)

StdSharedStdVector{T}() where {T} = StdSharedStdVector_new(T)
StdSharedStdVector{T}(size::Integer) where {T} = StdSharedStdVector_new(T, size)

Base.convert(::Type{Vector{T}}, vec::StdSharedStdVector{T}) where {T} = T[elt for elt in vec]
Base.convert(::Type{Vector}, vec::StdSharedStdVector{T}) where {T} = convert(Vector{T}, vec)

function generate(::Type{StdSharedStdVector{T}}) where {T}
    CT = T == Bool ? "bool" : T == StdString ? "std::string" : cxxtype[T]
    NT = cxxname(CT)

    eval(cxxfunction(FnName(:StdSharedStdVector_new, "std_shared_std_vector_$(NT)_new", libSTL),
                     FnResult(Ptr{StdSharedStdVector{T}}, "std::shared<std::vector<$CT>> *", StdSharedStdVector{T},
                              expr -> :(StdSharedStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true)], """
                     auto valptr = std::make_shared<std::vector<$CT>>();
                     auto ptr = new std::shared_ptr<std::vector<$CT>>;
                     ptr->swap(valptr);
                     return ptr;
                     """))
    eval(cxxfunction(FnName(:StdSharedStdVector_new, "std_shared_std_vector_$(NT)_new_std_size_t", libSTL),
                     FnResult(Ptr{StdSharedStdVector{T}}, "std::shared<std::vector<$CT>> *", StdSharedStdVector{T},
                              expr -> :(StdSharedStdVector{$T}($expr))),
                     [FnArg(:type, Nothing, "type", "void", Type{T}, identity; skip=true),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], """
                     auto valptr = std::make_shared<std::vector<$CT>>(size);
                     auto ptr = new std::shared_ptr<std::vector<$CT>>;
                     ptr->swap(valptr);
                     return ptr;
                     """))

    return eval(cxxfunction(FnName(:StdSharedStdVector_delete, "std_shared_std_vector_$(NT)_delete", libSTL),
                            FnResult(Nothing, "void"),
                            [FnArg(:vec, Ptr{StdSharedStdVector{T}}, "vec", "std::shared<std::vector<$CT>> * restrict",
                                   StdSharedStdVector{T}, identity)], "delete vec;"))
end

SharedStdVector{T}() where {T} = SharedStdVector{T}(StdSharedStdVector{T}())
SharedStdVector{T}(size::Integer) where {T} = SharedStdVector{T}(StdSharedStdVector{T}(size))

Base.convert(::Type{Vector{T}}, vec::SharedStdVector{T}) where {T} = convert(Vector{T}, vec.managed)
Base.convert(::Type{Vector}, vec::SharedStdVector) = convert(Vector, vec.managed)

free(vec::SharedStdVector) = free(vec.managed)

# Base.resize!(vec::SharedStdVector, size) = resize!(vec.managed, size)
# Base.empty!(vec::SharedStdVector) = empty!(vec.managed)
# Base.length(vec::SharedStdVector) = length(vec.managed)
# Base.isempty(vec::SharedStdVector) = isempty(vec.managed)
# Base.getindex(vec::SharedStdVector, idx) = getindex(vec.managed, idx)
# Base.setindex!(vec::SharedStdVector, elt, idx) = setindex!(vec.managed, elt, idx)
# Base.size(vec::SharedStdVector) = size(vec.managed)
# Base.firstindex(vec::SharedStdVector) = firstindex(vec.managed)
# Base.lastindex(vec::SharedStdVector) = lastindex(vec.managed)
# Base.eltype(::SharedStdVector{T}) where {T} = eltype(RefStdVector{T})
# Base.iterate(vec::SharedStdVector) = iterate(vec.managed)
# Base.iterate(vec::SharedStdVector, pos::Integer) = iterate(vec.managed, pos)
