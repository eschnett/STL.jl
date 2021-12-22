using STL

modules = ["StdMaps", "StdSharedPtrs", "StdStrings", "StdVectors"]

for mod in modules
    println("Generating $mod.cxx...")
    open("$mod.cxx", "w") do file
        println(file, getproperty(getproperty(STL, Symbol(mod)), :cxx_code)())
        return nothing
    end
end

println("Done.")
