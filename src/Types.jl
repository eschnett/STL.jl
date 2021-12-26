# Types

# Define all types here, so that they are available everywhere else

################################################################################
# StdMap

abstract type AbstractStdMap{K,T} <: AbstractDict{K,T} end
export AbstractStdMap

struct StdMap{K,T} <: AbstractStdMap{K,T}
    cxx::Ptr{StdMap{K,T}}
    StdMap{K,T}(cxx::Ptr{StdMap{K,T}}) where {K,T} = new{K,T}(cxx)
end
export StdMap

struct StdMapIterator{K,T}
    cxx::Ptr{StdMapIterator{K,T}}
    StdMapIterator{K,T}(cxx::Ptr{StdMapIterator{K,T}}) where {K,T} = new{K,T}(cxx)
end
export StdMapIterator

mutable struct GCStdMap{K,T} <: AbstractStdMap{K,T}
    managed::StdMap{K,T}
    function GCStdMap{K,T}(map::StdMap{K,T}) where {K,T}
        res = new{K,T}(map)
        finalizer(free, res)
        return res
    end
end
export GCStdMap

mutable struct GCStdMapIterator{K,T}
    managed::StdMapIterator{K,T}
    function GCStdMapIterator{K,T}(iter::StdMapIterator{K,T}) where {K,T}
        res = new{K,T}(iter)
        finalizer(free, res)
        return res
    end
end
export GCStdMapIterator

################################################################################
# StdSharedPtr

abstract type AbstractStdSharedPtr{T} end
export AbstractStdSharedPtr

struct StdSharedPtr{T} <: AbstractStdSharedPtr{T}
    cxx::Ptr{StdSharedPtr{T}}
    StdSharedPtr{T}(cxx::Ptr{StdSharedPtr{T}}) where {T} = new{T}(cxx)
end
export StdSharedPtr

mutable struct GCStdSharedPtr{T} <: AbstractStdSharedPtr{T}
    managed::StdSharedPtr{T}
    function GCStdSharedPtr{T}(ptr::StdSharedPtr{T}) where {T}
        res = new{T}(ptr)
        finalizer(free, res)
        return res
    end
end
export GCStdSharedPtr

################################################################################
# StdString

struct StdChar <: AbstractChar
    cxx::Cchar
end
export StdChar

abstract type AbstractStdString <: AbstractString end

struct StdString <: AbstractStdString
    cxx::Ptr{StdString}
    StdString(cxx::Ptr{StdString}) = new(cxx)
end
export StdString

mutable struct GCStdString <: AbstractStdString
    managed::StdString
    function GCStdString(str::StdString)
        res = new(str)
        finalizer(free, res)
        return res
    end
end
export GCStdString

################################################################################
# StdVector

abstract type StdVector{T} <: AbstractVector{T} end
export StdVector

struct RefStdVector{T} <: StdVector{T}
    cxx::Ptr{StdVector{T}}
    RefStdVector{T}(cxx::Ptr{StdVector{T}}) where {T} = new{T}(cxx)
end
export RefStdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::RefStdVector{T}) where {T} = vec.cxx

convert_arg(::Type{Ptr{RefStdVector{T}}}, vec::RefStdVector{T}) where {T} = vec.cxx
convert_result(::Type{RefStdVector{T}}, ptr::Ptr{RefStdVector{T}}) where {T} = RefStdVector{T}(ptr)

RefStdVector{T}() where {T} = RefStdVector_new(T)
RefStdVector{T}(size::Integer) where {T} = RefStdVector_new(T, size)

# `std::vector<T>` stores 3 pointers, `std::vector<bool>` additionally stores 2 `size_t`
const GCStdVector_size = 3 * sizeof(Ptr{Cvoid}) + 2 * sizeof(Csize_t)
mutable struct GCStdVector{T} <: StdVector{T}
    storage::NTuple{GCStdVector_size,Cchar}
    function GCStdVector{T}() where {T}
        res = new{T}()
        GCStdVector_construct(res)
        finalizer(GCStdVector_destruct, res)
        return res
    end
    function GCStdVector{T}(size::Int) where {T}
        res = new{T}()
        GCStdVector_construct(res, size)
        finalizer(GCStdVector_destruct, res)
        return res
    end
    function GCStdVector{T}(::typeof(Base.copy), vec::GCStdVector{T}) where {T}
        res = new{T}()
        GCStdVector_copy_construct(res, vec)
        finalizer(GCStdVector_destruct, res)
        return res
    end
end
@assert sizeof(GCStdVector{Bool}) == GCStdVector_size
export GCStdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::GCStdVector{T}) where {T} = Ptr{StdVector{T}}(pointer_from_objref(vec))

#TODO convert_arg(::Type{Ptr{GCStdVector{T}}}, vec::GCStdVector{T}) where {T} = vec.cxx
#TODO convert_result(::Type{GCStdVector{T}}, ptr::Ptr{GCStdVector{T}}) where {T} = GCStdVector{T}(ptr)
#TODO 
#TODO GCStdVector{T}() where {T} = GCStdVector_new(T)
#TODO GCStdVector{T}(size::Integer) where {T} = GCStdVector_new(T, size)

const SharedStdVector_size = 2 * sizeof(Ptr{Cvoid})
mutable struct SharedStdVector{T} <: StdVector{T}
    storage::NTuple{SharedStdVector_size,Cchar}
    function SharedStdVector{T}() where {T}
        res = new{T}()
        SharedStdVector_construct(res)
        finalizer(SharedStdVector_destruct, res)
        return res
    end
    function SharedStdVector{T}(size::Int) where {T}
        res = new{T}()
        SharedStdVector_construct(res, size)
        finalizer(SharedStdVector_destruct, res)
        return res
    end
    function SharedStdVector{T}(::typeof(Base.copy), vec::SharedStdVector{T}) where {T}
        res = new{T}()
        SharedStdVector_copy_construct(res, vec)
        finalizer(SharedStdVector_destruct, res)
        return res
    end
end
export SharedStdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::SharedStdVector{T}) where {T} = SharedStdVector_get(vec)

#TODO convert_arg(::Type{Ptr{SharedStdVector{T}}}, vec::SharedStdVector{T}) where {T} = vec.cxx
#TODO convert_result(::Type{SharedStdVector{T}}, ptr::Ptr{SharedStdVector{T}}) where {T} = SharedStdVector{T}(ptr)
#TODO 
#TODO SharedStdVector{T}() where {T} = SharedStdVector_new(T)
#TODO SharedStdVector{T}(size::Integer) where {T} = SharedStdVector_new(T, size)
