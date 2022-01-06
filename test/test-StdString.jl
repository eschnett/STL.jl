@testset "$S" for S in [RefStdString, GCStdString, STL.SharedStdString]
    str = S()
    T = eltype(str)

    @test length(str) == 0
    @test isempty(str)

    if S isa RefStdString
        free(str)
    end

    str = S("Hello, World!")
    @test length(str) == 13

    @test str[1] == T('H')
    @test str[8] == T('W')
    @test str[13] == T('!')

    str[13] = '\0'
    @test length(str) == 13
    @test str[13] == T('\0')

    if S isa RefStdString
        free(str)
    end
    GC.gc(true)
end

# Set reproducible random number seed
Random.seed!(0)
testAbstractChar(StdChar, generator(StdChar))
Random.seed!(0)
testAbstractString(RefStdString, generator(RefStdString))
Random.seed!(0)
testAbstractString(GCStdString, generator(GCStdString))
Random.seed!(0)
testAbstractString(STL.SharedStdString, generator(STL.SharedStdString))
