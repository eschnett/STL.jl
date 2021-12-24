using Random
using STL
using Test
using TestAbstractTypes

@testset "std::map<$K,$T>" for K in STL.StdMap_keys, T in STL.StdMap_types
    # TODO: Need to free the generatedp StdString objects
    mkK(i) = K ≡ Bool ? i % Bool : K ≡ StdString ? StdString(string(i)) : K <: Ptr ? K(i) : i
    mkT(i) = T ≡ Bool ? i % Bool : T ≡ StdString ? StdString(string(i)) : T <: Ptr ? T(i) : i

    map = StdMap{K,T}()
    @test keytype(map) ≡ K
    @test eltype(map) ≡ T
    @test map.cxx ≠ C_NULL

    @test length(map) == 0
    @test isempty(map)

    N = K ≡ Bool ? 2 : 10
    for i in 0:(N - 1)
        map[mkK(i)] = mkT(i)
    end
    @test length(map) == N
    for i in 0:(N - 1)
        @test haskey(map, mkK(i))
        @test map[mkK(i)] == mkT(i)
        if K ≢ Bool
            @test !haskey(map, mkK(i + 20))
        end
    end

    elts = Dict([elt for elt in map])
    @test typeof(elts) == Dict{K,T}
    @test elts == Dict([mkK(i) => mkT(i) for i in 0:(N - 1)])

    for i in 0:(N - 1)
        @test haskey(map, mkK(i))
        delete!(map, mkK(i))
        @test !haskey(map, mkK(i))
    end

    @test isempty(map)

    free(map)
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

@testset "std::string" begin
    str = StdString()
    T = eltype(str)
    @test str.cxx ≠ C_NULL

    @test length(str) == 0
    @test isempty(str)

    free(str)

    str = StdString("Hello, World!")
    @test length(str) == 13

    @test str[1] == T('H')
    @test str[8] == T('W')
    @test str[13] == T('!')

    str[13] = '\0'
    @test length(str) == 13
    @test str[13] == T('\0')

    free(str)
end

@testset "std::vector<$T>" for T in STL.StdVector_types
    # TODO: Need to free the generated StdString objects
    mkT(i) = T ≡ Bool ? i % Bool : T ≡ StdString ? StdString(string(i)) : T <: Ptr ? T(i) : i

    vec = StdVector{T}()
    @test vec.cxx ≠ C_NULL
    @test eltype(vec) ≡ T

    @test length(vec) == 0
    @test isempty(vec)

    free(vec)

    vec = StdVector{T}(10)
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

    free(vec)
end

# Set reproducible random number seed
Random.seed!(0)
testAbstractString(GCStdString, generator(GCStdString))
