module STL

using Reexport

function allocate end
export allocate
function free end
export free

include("StdMaps.jl")
include("StdSharedPtrs.jl")
include("StdVectors.jl")

@reexport using .StdMaps
@reexport using .StdSharedPtrs
@reexport using .StdVectors

end
