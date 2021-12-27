#include <ccomplex>
#include <cstdint>

#include <memory>
#include <string>
#include <utility>

static_assert(sizeof(bool) == 1, "");


/*
function RefStdString_new()
    res = ccall(("std_string_new", "libSTL.dylib"), Ptr{STL.StdString}, ())
    return RefStdString(res)::STL.RefStdString
end
*/
extern "C" std::string * std_string_new(
    
) {
    return new std::string;
}

/*
function RefStdString_new(ptr::AbstractString, size::Integer)
    res = ccall(("std_string_new_const_char_ptr_std_size_t", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{Int8}, UInt64), ptr, size)
    return RefStdString(res)::STL.RefStdString
end
*/
extern "C" std::string * std_string_new_const_char_ptr_std_size_t(
    const char * ptr,
    std::size_t size
) {
    return new std::string(ptr, size);
}

/*
function RefStdString_delete(str::STL.RefStdString)
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
function Base.copy(str::STL.RefStdString)
    res = ccall(("std_string_copy", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{STL.StdString},), str)
    return RefStdString(res)::STL.RefStdString
end
*/
extern "C" std::string * std_string_copy(
    std::string * restrict str
) {
    return new std::string(*str);
}

static_assert(sizeof(std::string) <= 32, "");

/*
function GCStdString_construct(ptr::STL.GCStdString)
    res = ccall(("std_string_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdString},), ptr)
    return res::Nothing
end
*/
extern "C" void std_string_construct(
    void * ptr
) {
    new(ptr) std::string;
}

/*
function GCStdString_construct(ptr::STL.GCStdString, str::AbstractString, size::Integer)
    res = ccall(("std_string_construct_const_char_ptr_std_size_t", "libSTL.dylib"), Nothing, (Ptr{STL.StdString}, Ptr{Int8}, UInt64), ptr, str, size)
    return res::Nothing
end
*/
extern "C" void std_string_construct_const_char_ptr_std_size_t(
    void * ptr,
    const char * str,
    std::size_t size
) {
    new(ptr) std::string(str, size);
}

/*
function GCStdString_destruct(ptr::STL.GCStdString)
    res = ccall(("std_string_destruct", "libSTL.dylib"), Nothing, (Ptr{STL.StdString},), ptr)
    return res::Nothing
end
*/
extern "C" void std_string_destruct(
    std::string * restrict ptr
) {
    ptr->~basic_string();
}

/*
function GCStdString_copy_construct(ptr::STL.GCStdString, str::STL.GCStdString)
    res = ccall(("std_string_copy_construct", "libSTL.dylib"), Nothing, (Ptr{STL.StdString}, Ptr{STL.StdString}), ptr, str)
    return res::Nothing
end
*/
extern "C" void std_string_copy_construct(
    std::string * restrict ptr,
    const std::string * restrict str
) {
    new(ptr) std::string(*str);
}

static_assert(sizeof(std::shared_ptr<std::string>) <= 16, "");

/*
function SharedStdString_construct(ptr::STL.SharedStdString)
    res = ccall(("std_shared_ptr_std_string_placement_new", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_string_placement_new(
    void * ptr
) {
    auto res = new(ptr) std::shared_ptr<std::string>;
*res = std::make_shared<std::string>();

}

/*
function SharedStdString_construct(ptr::STL.SharedStdString, str::AbstractString, size::Integer)
    res = ccall(("std_shared_ptr_std_string_placement_new_const_char_ptr_std_size_t", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{Int8}, UInt64), pointer_from_objref(ptr), str, size)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_string_placement_new_const_char_ptr_std_size_t(
    void * ptr,
    const char * str,
    std::size_t size
) {
    auto res = new(ptr) std::shared_ptr<std::string>;
*res = std::make_shared<std::string>(str, size);

}

/*
function SharedStdString_destruct(ptr::STL.SharedStdString)
    res = ccall(("std_shared_ptr_std_string_placement_delete", "libSTL.dylib"), Nothing, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_string_placement_delete(
    std::shared_ptr<std::string> * restrict ptr
) {
    ptr->~shared_ptr();
}

/*
function SharedStdString_copy_construct(ptr::STL.SharedStdString, str::STL.SharedStdString)
    res = ccall(("std_shared_ptr_std_string_placement_copy", "libSTL.dylib"), Nothing, (Ptr{Nothing}, Ptr{STL.StdString}), pointer_from_objref(ptr), str)
    return res::Nothing
end
*/
extern "C" void std_shared_ptr_std_string_placement_copy(
    void * ptr,
    const std::string * restrict str
) {
    auto res = new(ptr) std::shared_ptr<std::string>;
*res = std::make_shared<std::string>(*str);

}

/*
function SharedStdString_get(ptr::STL.SharedStdString)
    res = ccall(("std_shared_ptr_std_string_get", "libSTL.dylib"), Ptr{STL.StdString}, (Ptr{Nothing},), pointer_from_objref(ptr))
    return res::Ptr{STL.StdString}
end
*/
extern "C" std::string * std_shared_ptr_std_string_get(
    std::shared_ptr<std::string> * restrict ptr
) {
    return ptr->get();
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
    res = ccall(("std_string_String", "libSTL.dylib"), Pair{Ptr{Int8}, UInt64}, (Ptr{STL.StdString},), str)
    return unsafe_string(res[1], res[2])::String
end
*/
extern "C" std::pair<const char *, std::size_t> std_string_String(
    const std::string * restrict str
) {
    return std::pair<const char *, std::size_t>(str->c_str(), str->size());
}

