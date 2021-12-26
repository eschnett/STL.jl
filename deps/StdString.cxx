#include <ccomplex>
#include <cstdint>

#include <string>

static_assert(sizeof(bool) == 1, "");


/*
function StdString_new()
    res = ccall(("std_string_new", "libSTL.dylib"), Ptr{STL.StdString}, ())
    return StdString(res)::STL.StdString
end
*/
extern "C" std::string * std_string_new(
    
) {
    return new std::string;
}

/*
function StdString_new(ptr::AbstractString, size::Integer)
    res = ccall(("std_string_new_String", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{Int8}, UInt64), ptr, size)
    return StdString(res)::STL.StdString
end
*/
extern "C" std::string * std_string_new_String(
    const char * ptr,
    std::size_t size
) {
    return new std::string(ptr, size);
}

/*
function StdString_delete(str::STL.StdString)
    res = ccall(("std_string_delete", "libSTL.dylib"), Nothing, (Ptr{STL.StdString},), str)
    return res::Nothing
end
*/
extern "C" void std_string_delete(
    std::string * restrict str
) {
    delete str;
}

/*
function Base.copy(str::STL.StdString)
    res = ccall(("std_string_copy", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{STL.StdString},), str)
    return StdString(res)::STL.StdString
end
*/
extern "C" std::string * std_string_copy(
    std::string * restrict str
) {
    return new std::string(*str);
}

/*
function Base.length(str::STL.StdString)
    res = ccall(("std_string_length", "libSTL.dylib"), UInt64, (Ptr{STL.StdString},), str)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_string_length(
    const std::string * restrict str
) {
    return str->size();
}

/*
function Base.getindex(str::STL.StdString, idx::Integer)
    res = ccall(("std_string_getindex", "libSTL.dylib"), Int8, (Ptr{STL.StdString}, UInt64), str, idx - 1)
    return StdChar(res)::STL.StdChar
end
*/
extern "C" char std_string_getindex(
    const std::string * restrict str,
    std::size_t idx
) {
    return (*str)[idx];
}

/*
function Base.setindex!(str::STL.StdString, elt::Union{AbstractChar, Integer}, idx::Integer)
    res = ccall(("std_string_setindex_", "libSTL.dylib"), Nothing, (Ptr{STL.StdString}, Int8, UInt64), str, convert(StdChar, elt), idx - 1)
    return res::Nothing
end
*/
extern "C" void std_string_setindex_(
    std::string * restrict str,
    char elt,
    std::size_t idx
) {
    (*str)[idx] = elt;
}

/*
function Base.:(==)(str1::STL.StdString, str2::STL.StdString)
    res = ccall(("std_string_equals", "libSTL.dylib"), Bool, (Ptr{STL.StdString}, Ptr{STL.StdString}), str1, str2)
    return res::Bool
end
*/
extern "C" bool std_string_equals(
    const std::string * restrict str1,
    const std::string * restrict str2
) {
    return *str1 == *str2;
}

/*
function Base.:<(str1::STL.StdString, str2::STL.StdString)
    res = ccall(("std_string_less", "libSTL.dylib"), Bool, (Ptr{STL.StdString}, Ptr{STL.StdString}), str1, str2)
    return res::Bool
end
*/
extern "C" bool std_string_less(
    const std::string * restrict str1,
    const std::string * restrict str2
) {
    return *str1 < *str2;
}

/*
function Base.cmp(str1::STL.StdString, str2::STL.StdString)
    res = ccall(("std_string_cmp", "libSTL.dylib"), Int32, (Ptr{STL.StdString}, Ptr{STL.StdString}), str1, str2)
    return if res == 0
                0
            else
                if res < 0
                    -1
                else
                    1
                end
            end::Int64
end
*/
extern "C" int std_string_cmp(
    const std::string * restrict str1,
    const std::string * restrict str2
) {
    return str1->compare(*str2);
}

/*
function pointer(str::STL.StdString)
    res = ccall(("std_string_String", "libSTL.dylib"), Tuple{Ptr{Int8}, UInt64}, (Ptr{STL.StdString},), str)
    return unsafe_string(res[1], res[2])::String
end
*/
extern "C" std::tuple<const char *, std::size_t> std_string_String(
    const std::string * restrict str
) {
    return std::make_tuple(str->c_str(), str->size());
}

