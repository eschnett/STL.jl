module STL

using CxxInterface
using STL_jll
using TestAbstractTypes

# Run all self-tests when the package is loaded
const selftests = Any[]
function __init__()
    # If the library name is just a placeholder
    if libSTL ≠ "libSTL"
        for test in selftests
            test()
        end
    end
    return empty!(selftests)
end

eval(cxxsetup())

include("Defs.jl")
include("Types.jl")

include("StdMap.jl")
include("StdSharedPtr.jl")
include("StdString.jl")
include("StdVector.jl")

end
