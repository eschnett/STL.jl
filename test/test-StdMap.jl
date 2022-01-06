@testset "$M{$K,$T}" for M in [RefStdMap, GCStdMap, STL.SharedStdMap],
                         K in sort!(collect(STL.StdMap_keys); by=string),
                         T in sort!(collect(STL.StdMap_types); by=string)
    # These segfault; converting SharedStdString to Ptr{StdString} doesn't work
    T ≡ RefStdVector{STL.SharedStdString} && continue
    T ≡ STL.SharedStdVector{STL.SharedStdString} && continue
    K ≡ STL.SharedStdString && continue
    # @show M K T

    # TODO: Need to free the generatedp RefStdString objects
    mkK(i) = K ≡ Bool ? i % Bool : K <: Ptr ? K(i) : K ≡ RefStdString ? K(string(i)) : K ≡ STL.SharedStdString ? K(string(i)) : i
    function mkT(i)
        return T ≡ Bool ? i % Bool :
               T <: Ptr ? T(i) :
               T ≡ RefStdString ? T(string(i)) :
               T ≡ STL.SharedStdString ? T(string(i)) :
               T ≡ RefStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ RefStdVector{STL.SharedStdString} ? (x = T(1); x[0] = STL.SharedStdString(string(i)); x) :
               T ≡ STL.SharedStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ STL.SharedStdVector{STL.SharedStdString} ? (x = T(1); x[0] = STL.SharedStdString(string(i)); x) : i
    end

    # @show 1
    map = M{K,T}()
    @test keytype(map) ≡ K
    @test eltype(map) ≡ T

    # @show 2
    @test length(map) == 0
    @test isempty(map)

    # @show 3
    N = K ≡ Bool ? 2 : 10
    # @show 31
    for i in 0:(N - 1)
        map[mkK(i)] = mkT(i)
    end
    # @show 32
    @test length(map) == N
    # @show 33
    for i in 0:(N - 1)
        # @show 331
        @test haskey(map, mkK(i))
        # @show 332
        k = mkK(i)
        # @show 3321
        t = mkT(i)
        # @show 3322
        q = map[mkK(i)]
        # @show 3323
        q == mkT(i)
        @test map[mkK(i)] == mkT(i)
        # @show 333
        if K ≢ Bool
            # @show 334
            @test !haskey(map, mkK(i + 20))
        end
        # @show 335
    end

    # @show 4
    elts = Dict([elt for elt in map])
    @test typeof(elts) == Dict{K,T}
    @test elts == Dict([mkK(i) => mkT(i) for i in 0:(N - 1)])

    # @show 5
    for i in 0:(N - 1)
        @test haskey(map, mkK(i))
        delete!(map, mkK(i))
        @test !haskey(map, mkK(i))
    end

    # @show 6
    @test isempty(map)

    # @show 7
    if M == RefStdMap
        free(map)
    end
    GC.gc(true)
    # @show 8
end
