#include <ccomplex>
#include <cstdint>

#include <cstddef>
#include <string>
#include <tuple>


/*
function StdString_new()
    res = ccall(("std_string_new", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Ptr{Nothing}, ())
    return StdString(res)::Main.StdStrings.StdString
end
*/
extern "C" std::string * std_string_new(
    
) {
    return new std::string;
}

/*
function StdString_new(ptr::AbstractString, size::Integer)
    res = ccall(("std_string_new_String", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Int8}, UInt64), ptr, size)
    return StdString(res)::Main.StdStrings.StdString
end
*/
extern "C" std::string * std_string_new_String(
    const char * ptr,
    std::size_t size
) {
    return new std::string(ptr, size);
}

/*
function StdString_delete(str::Main.StdStrings.StdString)
    res = ccall(("std_string_delete", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Nothing, (Ptr{Nothing},), str)
    return res::Nothing
end
*/
extern "C" void std_string_delete(
    std::string * restrict str
) {
    delete str;
}

/*
function Base.copy(str::Main.StdStrings.StdString)
    res = ccall(("std_string_copy", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Ptr{Nothing}, (Ptr{Nothing},), str)
    return StdString(res)::Main.StdStrings.StdString
end
*/
extern "C" std::string * std_string_copy(
    std::string * restrict str
) {
    return new std::string(*str);
}

/*
function Base.length(str::Main.StdStrings.StdString)
    res = ccall(("std_string_length", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), UInt64, (Ptr{Nothing},), str)
    return convert(Int, res)::Int64
end
*/
extern "C" std::size_t std_string_length(
    const std::string * restrict str
) {
    return str->size();
}

/*
function Base.getindex(str::Main.StdStrings.StdString, idx::Integer)
    res = ccall(("std_string_getindex", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Int8, (Ptr{Nothing}, UInt64), str, idx)
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
function Base.setindex!(str::Main.StdStrings.StdString, elt::Char, idx::Integer)
    res = ccall(("std_string_setindex_", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Nothing, (Ptr{Nothing}, Int8, UInt64), str, convert(Cchar, elt), idx)
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
function pointer(str::Main.StdStrings.StdString)
    res = ccall(("std_string_String", "/Users/eschnett/.julia/artifacts/b21b466bbe5de7d88c64564683c35d2527fc7eaa/lib/libSTL.dylib"), Tuple{Ptr{Int8}, UInt64}, (Ptr{Nothing},), str)
    return unsafe_string(res[1], res[2])::String
end
*/
extern "C" std::tuple<const char *, std::size_t> std_string_String(
    const std::string * restrict str
) {
    return std::make_tuple(str->c_str(), str->size());
}


