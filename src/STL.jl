module STL

using Reexport

include("Stds.jl")

include("StdStrings.jl")

include("StdMaps.jl")
include("StdSharedPtrs.jl")
include("StdVectors.jl")

@reexport using .Stds
@reexport using .StdMaps
@reexport using .StdSharedPtrs
@reexport using .StdStrings
@reexport using .StdVectors

end
