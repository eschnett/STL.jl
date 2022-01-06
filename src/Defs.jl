# Defs

# Free a C++ object
function free end
export free

# Describe how wrapped objects are handled by containers
function convert_arg end
export convert_arg

function convert_result end
export convert_result

#TODO const value_types = Set([Bool, Int8, Int16, Int32, Int64, UInt8, UInt16, UInt32, UInt64, Float32, Float64, Complex{Float32},
#TODO                          Complex{Float64}, Ptr{Cvoid}])
const value_types = Set([Bool, Int8, Int64, UInt64, Float64, Complex{Float64}, Ptr{Cvoid}])
convert_arg(::Type{Ptr{T}}, val::T) where {T<:Union{value_types...}} = Ref(val)
convert_result(::Type{T}, ptr::Ptr{T}) where {T<:Union{value_types...}} = unsafe_load(ptr)

# Unused:
# 
# function convert_arg(::Type{Ptr{Pair{T1,T2}}}, val::Pair{T1,T2}) where {T1,T2}
#     arg1 = convert_arg(Ptr{T1}, val[1])
#     arg2 = convert_arg(Ptr{T2}, val[2])
#     return Ref{Pair{T1,T2}}(arg1[], arg2[])
# end
# function convert_result(::Type{Pair{T1,T2}}, ptr::Ptr{Pair{T1,T2}}) where {T1,T2}
#     res1 = convert_result(T1, Ptr{T1}(ptr + fieldoffset(Pair{T1,T2}, 1)))
#     res2 = convert_result(T2, Ptr{T2}(ptr + fieldoffset(Pair{T1,T2}, 2)))
#     return Pair{T1,T2}(res1, res2)
# end

# It seems that C++ (at least GCC) stores tuples reversed?
# 
# function convert_arg(::Type{Ptr{Tuple{}}}, val::Tuple{})
#     return Ref{Tuple{}}(())
# end
# function convert_arg(::Type{Ptr{Tuple{T1}}}, val::Tuple{T1}) where {T1}
#     arg1 = convert_arg(Ptr{T1}, val[1])
#     return Ref{Tuple{T1}}((arg1[],))
# end
# function convert_arg(::Type{Ptr{Tuple{T1,T2}}}, val::Tuple{T1,T2}) where {T1,T2}
#     arg1 = convert_arg(Ptr{T1}, val[1])
#     arg2 = convert_arg(Ptr{T2}, val[2])
#     return Ref{Tuple{T1,T2}}((arg1[], arg2[]))
# end
# 
# function convert_result(::Type{Tuple{}}, ptr::Ptr{Tuple{}})
#     return Tuple{}(())
# end
# function convert_result(::Type{Tuple{T1}}, ptr::Ptr{Tuple{T1}}) where {T1}
#     res1 = convert_result(T1, Ptr{T1}(ptr + fieldoffset(Tuple{T1,T2}, 1)))
#     return Tuple{T1}((res1,))
# end
# function convert_result(::Type{Tuple{T1,T2}}, ptr::Ptr{Tuple{T1,T2}}) where {T1,T2}
#     res1 = convert_result(T1, Ptr{T1}(ptr + fieldoffset(Tuple{T1,T2}, 1)))
#     res2 = convert_result(T2, Ptr{T2}(ptr + fieldoffset(Tuple{T1,T2}, 2)))
#     return Tuple{T1,T2}((res1, res2))
# end
