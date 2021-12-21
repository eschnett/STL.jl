using STL
using Test

@testset "std::map<$K,$T>" for K in StdMaps.keys, T in StdMaps.types
    map = StdMap{K,T}()
    @test keytype(map) ≡ K
    @test eltype(map) ≡ T
    @test map.cxx ≠ C_NULL

    @test length(map) == 0
    @test isempty(map)

    for i in 0:9
        map[i] = i
    end
    for i in 0:9
        @test haskey(map, i)
        @test map[i] == i
        @test !haskey(map, i + 20)
    end

    elts = Set([elt for elt in map])
    @test elts == Set(0:9)

    for i in 0:9
        @test haskey(map, i)
        delete!(map, i)
        @test !haskey(map, i)
    end

    @test isempty(map)

    free(map)
end

@testset "std::shared_ptr<$T>" for T in StdSharedPtrs.types
    ptr = StdSharedPtr{T}()
    @test ptr.cxx ≠ C_NULL
    @test eltype(ptr) ≡ T

    @test isempty(ptr)

    ptr[] = T(42)
    @test !isempty(ptr)
    @test ptr[] == 42

    @test use_count(ptr) == 1
    ptr2 = copy(ptr)
    @test ptr2[] == 42
    @test use_count(ptr) == 2
    @test use_count(ptr2) == 2

    empty!(ptr)
    @test isempty(ptr)
    @test !isempty(ptr2)

    free(ptr)

    @test ptr2[] == 42

    free(ptr2)
end

@testset "std::string" begin
    str = StdString()
    @test str.cxx ≠ C_NULL
    @test eltype(str) ≡ Char

    @test length(str) == 0
    @test isempty(str)

    free(str)

    str = StdString("Hello, World!")
    @test length(str) == 13

    @test str[0] == 'H'
    @test str[7] == 'W'
    @test str[12] == '!'

    str[12] = '\0'
    @test length(str) == 13
    @test str[12] == '\0'

    free(str)
end

@testset "std::vector<$T>" for T in StdVectors.types
    vec = StdVector{T}()
    @test vec.cxx ≠ C_NULL
    @test eltype(vec) ≡ T

    @test length(vec) == 0
    @test isempty(vec)

    free(vec)

    vec = StdVector{T}(10)
    @test length(vec) == 10

    for i in 0:9
        vec[i] = i
    end
    for i in 0:9
        @test vec[i] == i
    end

    resize!(vec, 20)
    @test length(vec) == 20

    for i in 0:9
        @test vec[i] == i
    end

    empty!(vec)
    @test isempty(vec)

    free(vec)
end
