module STL

using Reexport

function allocate end
function free end

include("StdMaps.jl")
include("StdSharedPtrs.jl")
include("StdVectors.jl")

@reexport using .StdMaps
@reexport using .StdSharedPtrs
@reexport using .StdVectors

end
