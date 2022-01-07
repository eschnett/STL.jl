# StdString

eval(cxxnewfile("StdString.cxx", """
    #include <memory>
    #include <string>
    #include <utility>

    static_assert(sizeof(bool) == 1, "");
    """))

################################################################################

Base.codepoint(ch::StdChar) = ch.cxx

Base.print(io::IO, ch::StdChar) = print(io, Char(ch))
Base.show(io::IO, ch::StdChar) = show(io, Char(ch))

################################################################################

function generate(::Type{StdString})
    eval(cxxfunction(FnName(:RefStdString_new, "std_string_new", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", RefStdString, expr -> :(RefStdString($expr))), FnArg[],
                     "return new std::string;"))
    eval(cxxfunction(FnName(:RefStdString_new, "std_string_new_const_char_ptr_std_size_t", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", RefStdString, expr -> :(RefStdString($expr))),
                     [FnArg(:ptr, Ptr{Cchar}, "ptr", "const char *", AbstractString, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "return new std::string(ptr, size);"))

    eval(cxxfunction(FnName(:RefStdString_delete, "std_string_delete", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", RefStdString, identity)], "delete str;"))

    eval(cxxfunction(FnName(:(Base.copy), "std_string_copy", libSTL),
                     FnResult(Ptr{StdString}, "std::string *", RefStdString, expr -> :(RefStdString($expr))),
                     [FnArg(:str, Ptr{StdString}, "str", "std::string * restrict", RefStdString, identity)],
                     "return new std::string(*str);"))

    # GCStdString

    eval(cxxfunction(FnName(:GCStdString_sizeof, "std_string_sizeof", libSTL), FnResult(Csize_t, "std::size_t"), FnArg[],
                     "return sizeof(std::string);"))
    push!(selftests, () -> @assert GCStdString_sizeof() <= GCStdString_size)

    eval(cxxfunction(FnName(:GCStdString_construct, "std_string_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdString}, "ptr", "void *", GCStdString, identity)], "new(ptr) std::string;"))
    eval(cxxfunction(FnName(:GCStdString_construct, "std_string_construct_const_char_ptr_std_size_t", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdString}, "ptr", "void *", GCStdString, identity),
                      FnArg(:str, Ptr{Cchar}, "str", "const char *", AbstractString, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)], "new(ptr) std::string(str, size);"))

    eval(cxxfunction(FnName(:GCStdString_destruct, "std_string_destruct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdString}, "ptr", "std::string * restrict", GCStdString, identity)],
                     "ptr->~basic_string();"))

    eval(cxxfunction(FnName(:GCStdString_copy_construct, "std_string_copy_construct", libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{StdString}, "ptr", "std::string * restrict", GCStdString, identity),
                      FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", GCStdString, identity)],
                     "new(ptr) std::string(*str);"))
    @eval Base.copy(str::GCStdString) = GCStdString(Base.copy, str)

    # SharedStdString

    eval(cxxfunction(FnName(:SharedStdString_sizeof, "std_shared_ptr_std_string_sizeof", libSTL), FnResult(Csize_t, "std::size_t"),
                     FnArg[], "return sizeof(std::shared_ptr<std::string>);"))
    push!(selftests, () -> @assert SharedStdString_sizeof() <= SharedStdString_size)

    eval(cxxfunction(FnName(:SharedStdString_construct, "std_shared_ptr_std_string_placement_new", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdString, expr -> :(pointer_from_objref($expr)))],
                     """
                     auto res = new(ptr) std::shared_ptr<std::string>;
                     *res = std::make_shared<std::string>();
                     """))
    eval(cxxfunction(FnName(:SharedStdString_construct, "std_shared_ptr_std_string_placement_new_const_char_ptr_std_size_t",
                            libSTL), FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdString, expr -> :(pointer_from_objref($expr))),
                      FnArg(:str, Ptr{Cchar}, "str", "const char *", AbstractString, identity),
                      FnArg(:size, Csize_t, "size", "std::size_t", Integer, identity)],
                     """
                     auto res = new(ptr) std::shared_ptr<std::string>;
                     *res = std::make_shared<std::string>(str, size);
                     """))

    eval(cxxfunction(FnName(:SharedStdString_destruct, "std_shared_ptr_std_string_placement_delete", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::string> * restrict", SharedStdString,
                            expr -> :(pointer_from_objref($expr)))], "ptr->~shared_ptr();"))

    eval(cxxfunction(FnName(:SharedStdString_copy_construct, "std_shared_ptr_std_string_placement_copy", libSTL),
                     FnResult(Nothing, "void"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "void *", SharedStdString, expr -> :(pointer_from_objref($expr))),
                      FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", SharedStdString, identity)],
                     """
                     auto res = new(ptr) std::shared_ptr<std::string>;
                     *res = std::make_shared<std::string>(*str);
                     """))
    @eval Base.copy(str::SharedStdString) = SharedStdString(Base.copy, str)

    #TODO eval(cxxfunction(FnName(:SharedStdString_get, "std_shared_ptr_std_string_get", libSTL),
    #TODO                  FnResult(Ptr{StdString}, "std::string *"),
    #TODO                  [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::string> * restrict", SharedStdString,
    #TODO                         expr -> :(pointer_from_objref($expr)))], "return ptr->get();"))
    eval(cxxfunction(FnName(:SharedStdString_get, "std_shared_ptr_std_string_get", libSTL),
                     FnResult(Ptr{StdString}, "std::string *"),
                     [FnArg(:ptr, Ptr{Cvoid}, "ptr", "std::shared_ptr<std::string> * restrict", SharedStdString,
                            expr -> :(pointer_from_objref($expr)))], "return ptr->get();"))

    # StdString

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

    eval(cxxfunction(FnName(:(Base.string), "std_string_String", libSTL),
                     FnResult(Pair{Ptr{Cchar},Csize_t}, "std::pair<const char *, std::size_t>", String,
                              expr -> :(unsafe_string($expr[1], $expr[2]))),
                     [FnArg(:str, Ptr{StdString}, "str", "const std::string * restrict", StdString, identity)],
                     "return std::pair<const char *, std::size_t>(str->c_str(), str->size());"))

    return nothing
end

generate(StdString)

free(str::StdString) = StdString_delete(str)

################################################################################

Base.convert(::Type{String}, str::StdString) = string(str)

Base.isempty(str::StdString) = length(str) == 0
Base.eltype(::Type{<:StdString}) = StdChar

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

Base.ncodeunits(str::StdString) = length(str)
Base.codeunit(::StdString) = Cchar
Base.firstindex(::StdString) = 1
Base.lastindex(str::StdString) = length(str)
Base.thisind(str::StdString, i::Int) = Int(i)
Base.prevind(str::StdString, i::Int) = Int(i) - 1
Base.nextind(str::StdString, i::Int) = Int(i) + 1
Base.isvalid(::StdString, ::Int) = true

################################################################################

function TestAbstractTypes.generator(::Type{StdChar})
    function gen(channel::Channel{StdChar})
        while true
            put!(channel, StdChar(rand(Cchar)))
        end
    end
    return Channel{StdChar}(gen)
end

function TestAbstractTypes.generator(::Type{RefStdString})
    source = generator(String)
    function gen(channel::Channel{RefStdString})
        while true
            put!(channel, RefStdString(take!(source)))
        end
    end
    return Channel{RefStdString}(gen)
end

function TestAbstractTypes.generator(::Type{GCStdString})
    source = generator(String)
    function gen(channel::Channel{GCStdString})
        while true
            put!(channel, GCStdString(take!(source)))
        end
    end
    return Channel{GCStdString}(gen)
end

function TestAbstractTypes.generator(::Type{SharedStdString})
    source = generator(String)
    function gen(channel::Channel{SharedStdString})
        while true
            put!(channel, SharedStdString(take!(source)))
        end
    end
    return Channel{SharedStdString}(gen)
end
