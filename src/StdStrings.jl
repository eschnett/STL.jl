module StdStrings

using ..Stds
using CxxInterface
using STL_jll
using TestAbstractTypes

################################################################################

eval(cxxprelude("""
    #include <string>
    """))

################################################################################

struct StdChar <: AbstractChar
    cxx::Cchar
end
export StdChar
Base.cconvert(::Type{Cchar}, ch::StdChar) = ch.cxx

StdChar(ch::AbstractChar) = StdChar(Cuchar(ch) % Cchar)
StdChar(i::Integer) = StdChar(Cuchar(i) % Cchar)
Base.Char(ch::StdChar) = Char(ch.cxx % Cuchar)

Stds.convert_arg(::Type{Ptr{StdChar}}, ch::StdChar) = ch.cxx
Stds.convert_result(::Type{StdChar}, ptr::Ptr{StdChar}) = unsafe_load(ptr)

Base.codepoint(ch::StdChar) = ch.cxx

Base.print(io::IO, ch::StdChar) = print(io, Char(ch))
Base.show(io::IO, ch::StdChar) = show(io, Char(ch))

################################################################################

abstract type AbstractStdString <: AbstractString end

struct StdString <: AbstractStdString
    cxx::Ptr{StdString}
    StdString(cxx::Ptr{StdString}) = new(cxx)
end
export StdString
Base.cconvert(::Type{Ptr{StdString}}, str::StdString) = str.cxx

Stds.convert_arg(::Type{Ptr{StdString}}, str::StdString) = str.cxx
Stds.convert_result(::Type{StdString}, ptr::Ptr{StdString}) = StdString(ptr)

StdString() = StdString_new()
StdString(str::AbstractString) = StdString_new(str, ncodeunits(str))
Base.convert(::Type{String}, str::StdString) = StdString_String(str)

function generate(::Type{StdString})
    eval(cxxfunction(FnName(:StdString_new, "std_string_new", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", StdString, expr -> :(StdString($expr))), FnArg[],
                     "return new std::string;"))
    eval(cxxfunction(FnName(:StdString_new, "std_string_new_String", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", StdString, expr -> :(StdString($expr))),
                     [FnArg(:ptr, Ptr{Cchar}, "ptr", "const char *", AbstractString, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::string(ptr, size);"))

    eval(cxxfunction(FnName(:StdString_delete, "std_string_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", StdString, identity)], "delete str;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_string_copy", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", StdString, expr -> :(StdString($expr))),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", StdString, identity)],
                     "return new std::string(*str);"))

    eval(cxxfunction(FnName(:(Base.length), "std_string_length", libSTL),
                     FnResult(Csize_t, "std::size_t", Int, expr -> :(convert(Int, $expr))),
                     [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity)],
                     "return str->size();"))

    eval(cxxfunction(FnName(:(Base.getindex), "std_string_getindex", libSTL),
                     FnResult(Cchar, "char", StdChar, expr -> :(StdChar($expr))),
                     [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, expr -> :($expr - 1))], "return (*str)[idx];"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_string_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", StdString, identity),
                      FnArg(:elt, Cchar, "elt", "char", Union{AbstractChar,Integer,StdChar}, expr -> :(convert(StdChar, $expr))),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, expr -> :($expr - 1))], "(*str)[idx] = elt;"))

    eval(cxxfunction(FnName(:(Base.:(==)), "std_string_equals", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:str1, Ptr{StdString}, "str1", "const std::string * restrict", StdString, identity),
                      FnArg(:str2, Ptr{StdString}, "str2", "const std::string * restrict", StdString, identity)],
                     "return *str1 == *str2;"))
    eval(cxxfunction(FnName(:(Base.:(<)), "std_string_less", libSTL), FnResult(Bool, "bool"),
                     [FnArg(:str1, Ptr{StdString}, "str1", "const std::string * restrict", StdString, identity),
                      FnArg(:str2, Ptr{StdString}, "str2", "const std::string * restrict", StdString, identity)],
                     "return *str1 < *str2;"))
    eval(cxxfunction(FnName(:(Base.cmp), "std_string_cmp", libSTL),
                     FnResult(Cint, "int", Int, expr -> :($expr == 0 ? 0 : $expr < 0 ? -1 : 1)),
                     [FnArg(:str1, Ptr{StdString}, "str1", "const std::string * restrict", StdString, identity),
                      FnArg(:str2, Ptr{StdString}, "str2", "const std::string * restrict", StdString, identity)],
                     "return str1->compare(*str2);"))

    eval(cxxfunction(FnName(:pointer, "std_string_String", libSTL),
                     FnResult(Tuple{Ptr{Cchar},Csize_t}, "std::tuple<const char *, std::size_t>", String,
                              expr -> :(unsafe_string($expr[1], $expr[2]))),
                     [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity)],
                     "return std::make_tuple(str->c_str(), str->size());"))

    return nothing
end

generate(StdString)

Stds.free(str::StdString) = StdString_delete(str)

Base.isempty(str::StdString) = length(str) == 0

Base.eltype(::Type{StdString}) = StdChar

function Base.iterate(str::StdString, pos::Int=1)
    pos > length(str) && return nothing
    return str[pos], pos + 1
end

function Base.print(io::IO, str::StdString)
    for i in 1:length(str)
        print(io, str[i])
    end
    return nothing
end
function Base.show(io::IO, str::StdString)
    print(io, '"')
    for i in 1:length(str)
        ch = str[i]
        if ch ∈ ('"', '\\')
            print(io, '\\', ch)
        elseif !isprint(ch)
            print(io, "\\u", string(Int(ch); base=16, pad=2))
        else
            print(io, ch)
        end
    end
    print(io, '"')
    return nothing
end

################################################################################

mutable struct GCStdString <: AbstractStdString
    managed::StdString
    function GCStdString(str::StdString)
        res = new(str)
        finalizer(free, res)
        return res
    end
end
export GCStdString

GCStdString() = GCStdString(StdString())
GCStdString(str::AbstractString) = GCStdString(StdString(str))
Base.convert(::Type{String}, str::GCStdString) = convert(String, str.managed)

Stds.free(str::GCStdString) = free(str.managed)

Base.length(str::GCStdString) = length(str.managed)
Base.isempty(str::GCStdString) = isempty(str.managed)
Base.getindex(str::GCStdString, idx::Integer) = getindex(str.managed, idx)
Base.setindex!(str::GCStdString, elt, idx::Integer) = setindex!(str.managed, elt, idx)
Base.eltype(::Type{GCStdString}) = eltype(StdString)
Base.:(==)(str1::GCStdString, str2::GCStdString) = str1.managed == str2.managed
Base.:(<)(str1::GCStdString, str2::GCStdString) = str1.managed < str2.managed
Base.cmp(str1::GCStdString, str2::GCStdString) = comp(str1.managed, str2.managed)
Base.iterate(str::GCStdString) = iterate(str.managed)
Base.iterate(str::GCStdString, pos::Integer) = iterate(str.managed, pos)
Base.print(io::IO, str::GCStdString) = print(io, str.managed)
Base.show(io::IO, str::GCStdString) = show(io, str.managed)

################################################################################

Base.ncodeunits(str::AbstractStdString) = length(str)
Base.codeunit(::AbstractStdString) = Cchar
Base.firstindex(::AbstractStdString) = 1
Base.lastindex(str::AbstractStdString) = length(str)
Base.thisind(str::AbstractStdString, i::Int) = Int(i)
Base.prevind(str::AbstractStdString, i::Int) = Int(i) - 1
Base.nextind(str::AbstractStdString, i::Int) = Int(i) + 1
Base.isvalid(::AbstractStdString, ::Int) = true

################################################################################

function TestAbstractTypes.generator(::Type{StdChar})
    function gen(channel::Channel{StdChar})
        while true
            put!(channel, StdChar(rand(Cchar)))
        end
    end
    return Channel{StdChar}(gen)
end

function TestAbstractTypes.generator(::Type{StdString})
    source = generator(String)
    function gen(channel::Channel{StdString})
        while true
            put!(channel, StdString(take!(source)))
        end
    end
    return Channel{StdString}(gen)
end

function TestAbstractTypes.generator(::Type{GCStdString})
    source = generator(String)
    function gen(channel::Channel{GCStdString})
        while true
            put!(channel, GCStdString(StdString(take!(source))))
        end
    end
    return Channel{GCStdString}(gen)
end

end
