using CxxInterface

using STL

println("Generating std_map.cxx...")
open("std_map.cxx", "w") do file
    CxxInterface.begin_generate_cxx()
    include("../src/StdMaps.jl")
    return println(file, CxxInterface.end_generate_cxx())
end

println("Generating std_shared_ptr.cxx...")
open("std_shared_ptr.cxx", "w") do file
    CxxInterface.begin_generate_cxx()
    include("../src/StdSharedPtrs.jl")
    return println(file, CxxInterface.end_generate_cxx())
end

println("Generating std_vector.cxx...")
open("std_vector.cxx", "w") do file
    CxxInterface.begin_generate_cxx()
    include("../src/StdVectors.jl")
    return println(file, CxxInterface.end_generate_cxx())
end

println("Done.")
