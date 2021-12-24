module STL

using CxxInterface
using STL_jll
using TestAbstractTypes

eval(cxxsetup())

include("Defs.jl")
include("Types.jl")

include("StdMap.jl")
include("StdSharedPtr.jl")
include("StdString.jl")
include("StdVector.jl")

end
