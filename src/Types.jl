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

abstract type AbstractStdVector{T} <: AbstractVector{T} end
export AbstractStdVector

struct StdVector{T} <: AbstractStdVector{T}
    cxx::Ptr{StdVector{T}}
    StdVector{T}(cxx::Ptr{StdVector{T}}) where {T} = new{T}(cxx)
end
export StdVector

mutable struct GCStdVector{T} <: AbstractStdVector{T}
    managed::StdVector{T}
    function GCStdVector{T}(vec::StdVector{T}) where {T}
        res = new{T}(vec)
        finalizer(free, res)
        return res
    end
end
export GCStdVector

struct StdSharedStdVector{T} <: AbstractStdVector{T}
    cxx::Ptr{StdSharedStdVector{T}}
    StdSharedStdVector{T}(cxx::Ptr{StdSharedStdVector{T}}) where {T} = new{T}(cxx)
end
export StdSharedStdVector

struct SharedStdVector{T} <: AbstractStdVector{T}
    managed::StdSharedStdVector{T}
    function SharedStdVector{T}(vec::StdSharedStdVector{T}) where {T}
        res = new{T}(vec)
        finalizer(free, res)
        return res
    end
end
export SharedStdVector
