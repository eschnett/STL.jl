#include <string>


/*
function StdString_new()
    res = ccall(("std_string_new", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Ptr{STL.StdStrings.StdString}, ())
    return StdString(res)::STL.StdStrings.StdString
end
*/
extern "C" std::string * std_string_new(
    
) {
    return new std::string;
}

/*
function StdString_new(ptr::AbstractString, size::Integer)
    res = ccall(("std_string_new_String", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Ptr{STL.StdStrings.StdString}, (Ptr{Int8}, UInt64), ptr, size)
    return StdString(res)::STL.StdStrings.StdString
end
*/
extern "C" std::string * std_string_new_String(
    const char * ptr,
    std::size_t size
) {
    return new std::string(ptr, size);
}

/*
function StdString_delete(str::STL.StdStrings.StdString)
    res = ccall(("std_string_delete", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdStrings.StdString},), str)
    return res::Nothing
end
*/
extern "C" void std_string_delete(
    std::string * restrict str
) {
    delete str;
}

/*
function Base.copy(str::STL.StdStrings.StdString)
    res = ccall(("std_string_copy", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Ptr{STL.StdStrings.StdString}, (Ptr{STL.StdStrings.StdString},), str)
    return StdString(res)::STL.StdStrings.StdString
end
*/
extern "C" std::string * std_string_copy(
    std::string * restrict str
) {
    return new std::string(*str);
}

/*
function Base.length(str::STL.StdStrings.StdString)
    res = ccall(("std_string_length", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), UInt64, (Ptr{STL.StdStrings.StdString},), str)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_string_length(
    const std::string * restrict str
) {
    return str->size();
}

/*
function Base.getindex(str::STL.StdStrings.StdString, idx::Integer)
    res = ccall(("std_string_getindex", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Int8, (Ptr{STL.StdStrings.StdString}, UInt64), str, idx)
    return convert(Char, res)::Char
end
*/
extern "C" char std_string_getindex(
    const std::string * restrict str,
    std::size_t idx
) {
    return (*str)[idx];
}

/*
function Base.setindex!(str::STL.StdStrings.StdString, elt::Char, idx::Integer)
    res = ccall(("std_string_setindex_", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Nothing, (Ptr{STL.StdStrings.StdString}, Int8, UInt64), str, convert(Cchar, elt), idx)
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
function Base.:(==)(str1::STL.StdStrings.StdString, str2::STL.StdStrings.StdString)
    res = ccall(("std_string_equals", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Bool, (Ptr{STL.StdStrings.StdString}, Ptr{STL.StdStrings.StdString}), str1, str2)
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
function pointer(str::STL.StdStrings.StdString)
    res = ccall(("std_string_String", "/Users/eschnett/.julia/artifacts/4fe33bb541fedaadf6a56f15890dfacf89808500/lib/libSTL.dylib"), Tuple{Ptr{Int8}, UInt64}, (Ptr{STL.StdStrings.StdString},), str)
    return unsafe_string(res[1], res[2])::String
end
*/
extern "C" std::tuple<const char *, std::size_t> std_string_String(
    const std::string * restrict str
) {
    return std::make_tuple(str->c_str(), str->size());
}


