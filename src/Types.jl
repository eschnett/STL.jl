# Types

# Define all types here, so that they are available everywhere else

################################################################################
# StdMap

abstract type StdMap{K,T} <: AbstractDict{K,T} end
export StdMap

struct RefStdMap{K,T} <: StdMap{K,T}
    cxx::Ptr{StdMap{K,T}}
    RefStdMap{K,T}(cxx::Ptr{StdMap{K,T}}) where {K,T} = new{K,T}(cxx)
end
export RefStdMap
Base.cconvert(::Type{Ptr{StdMap{K,T}}}, map::RefStdMap{K,T}) where {K,T} = map.cxx

convert_arg(::Type{Ptr{RefStdMap{K,T}}}, map::RefStdMap{K,T}) where {K,T} = map.cxx
convert_result(::Type{RefStdMap{K,T}}, ptr::Ptr{RefStdMap{K,T}}) where {K,T} = RefStdMap{K,T}(Ptr{StdMap{K,T}}(ptr))

RefStdMap{K,T}() where {K,T} = RefStdMap_new(K, T)

# `std::map<K,T>` stores 6 pointers or sizes
const GCStdMap_size = 6 * sizeof(Ptr{Cvoid})
mutable struct GCStdMap{K,T} <: StdMap{K,T}
    storage::NTuple{GCStdMap_size,Cchar}
    function GCStdMap{K,T}() where {K,T}
        res = new{K,T}()
        GCStdMap_construct(res)
        finalizer(GCStdMap_destruct, res)
        return res
    end
    function GCStdMap{K,T}(::typeof(Base.copy), map::GCStdMap{K,T}) where {K,T}
        res = new{K,T}()
        GCStdMap_copy_construct(res, map)
        finalizer(GCStdMap_destruct, res)
        return res
    end
end
@assert sizeof(GCStdMap{Int,Int}) == GCStdMap_size
export GCStdMap
Base.cconvert(::Type{Ptr{StdMap{K,T}}}, map::GCStdMap{K,T}) where {K,T} = Ptr{StdMap{K,T}}(pointer_from_objref(map))

const SharedStdMap_size = 2 * sizeof(Ptr{Cvoid})
mutable struct SharedStdMap{K,T} <: StdMap{K,T}
    storage::NTuple{SharedStdMap_size,Cchar}
    function SharedStdMap{K,T}() where {K,T}
        res = new{K,T}()
        SharedStdMap_construct(res)
        finalizer(SharedStdMap_destruct, res)
        return res
    end
    function SharedStdMap{K,T}(::typeof(Base.copy), map::SharedStdMap{K,T}) where {K,T}
        res = new{K,T}()
        SharedStdMap_copy_construct(res, map)
        finalizer(SharedStdMap_destruct, res)
        return res
    end
end
@assert sizeof(SharedStdMap{Int,Int}) == SharedStdMap_size
# export SharedStdMap
Base.cconvert(::Type{Ptr{StdMap{K,T}}}, map::SharedStdMap{K,T}) where {K,T} = SharedStdMap_get(map)

# We're gambling on the fact that `std::map<k, T>::const_iterator` is
# just a pointer with a trivial destructor
struct StdMapIterator{K,T}
    cxx::Ptr{Cvoid}
    StdMapIterator{K,T}(cxx::Ptr{Cvoid}) where {K,T} = new{K,T}(cxx)
end
export StdMapIterator
Base.cconvert(::Type{Ptr{Cvoid}}, iter::StdMapIterator{K,T}) where {K,T} = iter.cxx

convert_arg(::Type{Ptr{SharedStdMap{K,T}}}, map::SharedStdMap{K,T}) where {K,T} = pointer_from_objref(map)
convert_result(::Type{SharedStdMap{K,T}}, ptr::Ptr{SharedStdMap{K,T}}) where {K,T} = unsafe_load(ptr)

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
Base.cconvert(::Type{Cchar}, ch::StdChar) = ch.cxx

convert_arg(::Type{Ptr{StdChar}}, ch::StdChar) = ch.cxx
convert_result(::Type{StdChar}, ptr::Ptr{StdChar}) = unsafe_load(ptr)

StdChar(ch::AbstractChar) = StdChar(Cuchar(ch) % Cchar)
StdChar(i::Integer) = StdChar(Cuchar(i) % Cchar)
Base.Char(ch::StdChar) = Char(ch.cxx % Cuchar)

###

abstract type StdString <: AbstractString end
export StdString

# TOOD: Add a type parameter for the character type
struct RefStdString <: StdString
    cxx::Ptr{StdString}
    RefStdString(cxx::Ptr{StdString}) = new(cxx)
end
export RefStdString
Base.cconvert(::Type{Ptr{StdString}}, str::RefStdString) = str.cxx

convert_arg(::Type{Ptr{RefStdString}}, str::RefStdString) = str.cxx
convert_result(::Type{RefStdString}, ptr::Ptr{RefStdString}) = RefStdString(Ptr{StdString}(ptr))

RefStdString() = RefStdString_new()
RefStdString(str::AbstractString) = RefStdString_new(str, ncodeunits(str))

# `std::string` stores 1 pointer, 1 size, and 16 bytes
const GCStdString_size = 2 * sizeof(Ptr{Cvoid}) + 16
mutable struct GCStdString <: StdString
    storage::NTuple{GCStdString_size,Cchar}
    function GCStdString()
        res = new()
        GCStdString_construct(res)
        finalizer(GCStdString_destruct, res)
        return res
    end
    function GCStdString(str::AbstractString)
        res = new()
        GCStdString_construct(res, str, ncodeunits(str))
        finalizer(GCStdString_destruct, res)
        return res
    end
    function GCStdString(::typeof(Base.copy), str::GCStdString)
        res = new()
        GCStdString_copy_construct(res, str)
        finalizer(GCStdString_destruct, res)
        return res
    end
end
@assert sizeof(GCStdString) == GCStdString_size
export GCStdString
Base.cconvert(::Type{Ptr{StdString}}, str::GCStdString) = Ptr{StdString}(pointer_from_objref(str))

const SharedStdString_size = 2 * sizeof(Ptr{Cvoid})
mutable struct SharedStdString <: StdString
    storage::NTuple{SharedStdString_size,Cchar}
    function SharedStdString()
        res = new()
        SharedStdString_construct(res)
        finalizer(SharedStdString_destruct, res)
        return res
    end
    function SharedStdString(str::AbstractString)
        res = new()
        SharedStdString_construct(res, str, ncodeunits(str))
        finalizer(SharedStdString_destruct, res)
        return res
    end
    function SharedStdString(::typeof(Base.copy), str::SharedStdString)
        res = new()
        SharedStdString_copy_construct(res, str)
        finalizer(SharedStdString_destruct, res)
        return res
    end
end
@assert sizeof(SharedStdString) == SharedStdString_size
# export SharedStdString
Base.cconvert(::Type{Ptr{StdString}}, str::SharedStdString) = SharedStdString_get(str)

convert_arg(::Type{Ptr{SharedStdString}}, str::SharedStdString) = pointer_from_objref(str)
# convert_result(::Type{SharedStdString}, ptr::Ptr{SharedStdString}) = unsafe_load(ptr)
convert_result(::Type{SharedStdString}, ptr::Ptr{SharedStdString}) = SharedStdString(copy, unsafe_load(ptr))

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
convert_result(::Type{RefStdVector{T}}, ptr::Ptr{RefStdVector{T}}) where {T} = RefStdVector{T}(Ptr{StdVector{T}}(ptr))

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
@assert sizeof(GCStdVector{Int}) == GCStdVector_size
export GCStdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::GCStdVector{T}) where {T} = Ptr{StdVector{T}}(pointer_from_objref(vec))

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
# export SharedStdVector
Base.cconvert(::Type{Ptr{StdVector{T}}}, vec::SharedStdVector{T}) where {T} = SharedStdVector_get(vec)

convert_arg(::Type{Ptr{SharedStdVector{T}}}, vec::SharedStdVector{T}) where {T} = pointer_from_objref(vec)
convert_result(::Type{SharedStdVector{T}}, ptr::Ptr{SharedStdVector{T}}) where {T} = unsafe_load(ptr)
