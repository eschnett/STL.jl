using Random
using STL
using Test
using TestAbstractTypes

@testset "$M{$K,$T}" for M in [RefStdMap, GCStdMap, SharedStdMap],
                         K in sort!(collect(STL.StdMap_keys); by=string),
                         T in sort!(collect(STL.StdMap_types); by=string)
    # These segfault; converting SharedStdString to Ptr{StdString} doesn't work
    T ≡ RefStdVector{SharedStdString} && continue
    T ≡ SharedStdVector{SharedStdString} && continue
    K ≡ SharedStdString && continue
    # @show M K T

    # TODO: Need to free the generatedp RefStdString objects
    mkK(i) = K ≡ Bool ? i % Bool : K <: Ptr ? K(i) : K ≡ RefStdString ? K(string(i)) : K ≡ SharedStdString ? K(string(i)) : i
    function mkT(i)
        return T ≡ Bool ? i % Bool :
               T <: Ptr ? T(i) :
               T ≡ RefStdString ? T(string(i)) :
               T ≡ SharedStdString ? T(string(i)) :
               T ≡ RefStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ RefStdVector{SharedStdString} ? (x = T(1); x[0] = SharedStdString(string(i)); x) :
               T ≡ SharedStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ SharedStdVector{SharedStdString} ? (x = T(1); x[0] = SharedStdString(string(i)); x) : i
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

@testset "std::shared_ptr<$T>" for T in STL.StdSharedPtr_types
    mkT(i) = T ≡ Bool ? i % Bool : T(i)

    ptr = StdSharedPtr{T}()
    @test ptr.cxx ≠ C_NULL
    @test eltype(ptr) ≡ T

    @test isempty(ptr)

    ptr = make_shared(T, mkT(24))
    @test !isempty(ptr)
    @test ptr[] == mkT(24)

    ptr[] = mkT(42)
    @test ptr[] == mkT(42)

    @test use_count(ptr) == 1
    ptr2 = copy(ptr)
    @test ptr2[] == mkT(42)
    @test use_count(ptr) == 2
    @test use_count(ptr2) == 2

    empty!(ptr)
    @test isempty(ptr)
    @test !isempty(ptr2)

    free(ptr)

    @test ptr2[] == mkT(42)

    free(ptr2)
end

@testset "$S" for S in [RefStdString, GCStdString, SharedStdString]
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

@testset "$V{$T}" for V in [RefStdVector, GCStdVector, SharedStdVector], T in sort!(collect(STL.StdVector_types); by=string)
    # These segfault; converting SharedStdString to Ptr{StdString} doesn't work
    T ≡ RefStdVector{SharedStdString} && continue
    T ≡ SharedStdVector{SharedStdString} && continue
    # @show V T

    # TODO: Need to free the generated RefStdString objects
    function mkT(i)
        return T ≡ Bool ? i % Bool :
               T <: Ptr ? T(i) :
               T ≡ RefStdString ? RefStdString(string(i)) :
               T ≡ SharedStdString ? SharedStdString(string(i)) :
               T ≡ RefStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ RefStdVector{SharedStdString} ? (x = T(1); x[0] = SharedStdString(string(i)); x) :
               T ≡ SharedStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ SharedStdVector{SharedStdString} ? (x = T(1); x[0] = SharedStdString(string(i)); x) : i
    end

    vec = V{T}()
    @test eltype(vec) ≡ T

    @test length(vec) == 0
    @test isempty(vec)

    if vec isa RefStdVector
        free(vec)
    end

    vec = V{T}(10)
    @test length(vec) == 10

    for i in 0:9
        vec[i] = mkT(i)
    end
    for i in 0:9
        @test vec[i] == mkT(i)
    end

    elts = convert(Vector{T}, vec)
    @test elts == [mkT(i) for i in 0:9]

    elts = [elt for elt in vec]
    @test typeof(elts) == Vector{T}
    @test elts == [mkT(i) for i in 0:9]

    resize!(vec, 20)
    @test length(vec) == 20

    for i in 0:9
        @test vec[i] == mkT(i)
    end

    empty!(vec)
    @test isempty(vec)

    if vec isa RefStdVector
        free(vec)
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
testAbstractString(SharedStdString, generator(SharedStdString))
