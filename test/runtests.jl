using STL
using Test

@testset "std::map<$K,$T>" for K in StdMaps.keys, T in StdMaps.types
    mkK(i) = K ≡ Bool ? i % Bool : K <: Ptr ? T(i) : i
    mkT(i) = T ≡ Bool ? i % Bool : T <: Ptr ? T(i) : i

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

@testset "std::shared_ptr<$T>" for T in StdSharedPtrs.types
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

#TODO @testset "std::string" begin
#TODO     str = StdString()
#TODO     @test str.cxx ≠ C_NULL
#TODO     @test eltype(str) ≡ Char
#TODO 
#TODO     @test length(str) == 0
#TODO     @test isempty(str)
#TODO 
#TODO     free(str)
#TODO 
#TODO     str = StdString("Hello, World!")
#TODO     @test length(str) == 13
#TODO 
#TODO     @test str[0] == 'H'
#TODO     @test str[7] == 'W'
#TODO     @test str[12] == '!'
#TODO 
#TODO     str[12] = '\0'
#TODO     @test length(str) == 13
#TODO     @test str[12] == '\0'
#TODO 
#TODO     free(str)
#TODO end

@testset "std::vector<$T>" for T in StdVectors.types
    mkT(i) = T ≡ Bool ? i % Bool : T(i)

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

    resize!(vec, 20)
    @test length(vec) == 20

    for i in 0:9
        @test vec[i] == mkT(i)
    end

    empty!(vec)
    @test isempty(vec)

    free(vec)
end
