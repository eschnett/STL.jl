module StdStrings

using ..Stds
using CxxInterface
using STL_jll

################################################################################

eval(cxxprelude("""
    #include <string>
    """))

struct StdString
    cxx::Ptr{StdString}
    StdString(cxx::Ptr{StdString}) = new(cxx)
end
export StdString
Base.cconvert(::Type{Ptr{StdString}}, str::StdString) = str.cxx

Stds.convert_arg(::Type{Ptr{StdString}}, str::StdString) = str.cxx
Stds.convert_result(::Type{StdString}, ptr::Ptr{StdString}) = StdString(ptr)

StdString() = StdString_new()
StdString(str::AbstractString) = StdString_new(str, ncodeunits(str))
Base.convert(String, str::StdString) = StdString_String(str)

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
                     FnResult(Cchar, "char", Char, expr -> :(convert(Char, $expr))),
                     [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "return (*str)[idx];"))

    eval(cxxfunction(FnName(:(Base.setindex!), "std_string_setindex_", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", StdString, identity),
                      FnArg(:elt, Cchar, "elt", "char", Char, expr -> :(convert(Cchar, $expr))),
                      FnArg(:idx, Csize_t, "idx", "std::size_t", Integer, identity)], "(*str)[idx] = elt;"))

    return eval(cxxfunction(FnName(:pointer, "std_string_String", libSTL),
                            FnResult(Tuple{Ptr{Cchar},Csize_t}, "std::tuple<const char *, std::size_t>", String,
                                     expr -> :(unsafe_string($expr[1], $expr[2]))),
                            [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity)],
                            "return std::make_tuple(str->c_str(), str->size());"))
end

generate(StdString)

Stds.free(str::StdString) = StdString_delete(str)

Base.isempty(str::StdString) = length(str) == 0

Base.eltype(::StdString) = Char

################################################################################

mutable struct GCStdString <: AbstractString
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
Base.convert(String, str::GCStdString) = convert(String, str.managed)

Stds.free(str::GCStdString) = free(str.managed)

Base.length(str::GCStdString) = length(str.managed)
Base.isempty(str::GCStdString) = isempty(str.managed)
Base.getindex(str::GCStdString, idx) = getindex(str.managed, idx)
Base.setindex!(str::GCStdString, elt, idx) = setindex!(str.managed, elt, idx)
Base.eltype(::GCStdString) = eltype(StdString)

end
