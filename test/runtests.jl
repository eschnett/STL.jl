using STL
using Test

#TODO @testset "std::map<$K,$T>" for K in StdMaps.keys, T in StdMaps.types
#TODO     mkK(i) = K ≡ Bool ? i % Bool : K <: Ptr ? T(i) : i
#TODO     mkT(i) = T ≡ Bool ? i % Bool : T <: Ptr ? T(i) : i
#TODO 
#TODO     map = StdMap{K,T}()
#TODO     @test keytype(map) ≡ K
#TODO     @test eltype(map) ≡ T
#TODO     @test map.cxx ≠ C_NULL
#TODO 
#TODO     @test length(map) == 0
#TODO     @test isempty(map)
#TODO 
#TODO     N = K ≡ Bool ? 2 : 10
#TODO     for i in 0:(N - 1)
#TODO         map[mkK(i)] = mkT(i)
#TODO     end
#TODO     @test length(map) == N
#TODO     for i in 0:(N - 1)
#TODO         @test haskey(map, mkK(i))
#TODO         @test map[mkK(i)] == mkT(i)
#TODO         if K ≢ Bool
#TODO             @test !haskey(map, mkK(i + 20))
#TODO         end
#TODO     end
#TODO 
#TODO     elts = Dict([elt for elt in map])
#TODO     @test typeof(elts) == Dict{K,T}
#TODO     @test elts == Dict([mkK(i) => mkT(i) for i in 0:(N - 1)])
#TODO 
#TODO     for i in 0:(N - 1)
#TODO         @test haskey(map, mkK(i))
#TODO         delete!(map, mkK(i))
#TODO         @test !haskey(map, mkK(i))
#TODO     end
#TODO 
#TODO     @test isempty(map)
#TODO 
#TODO     free(map)
#TODO end
#TODO 
#TODO @testset "std::shared_ptr<$T>" for T in StdSharedPtrs.types
#TODO     mkT(i) = T ≡ Bool ? i % Bool : T(i)
#TODO 
#TODO     ptr = StdSharedPtr{T}()
#TODO     @test ptr.cxx ≠ C_NULL
#TODO     @test eltype(ptr) ≡ T
#TODO 
#TODO     @test isempty(ptr)
#TODO 
#TODO     ptr = make_shared(T, mkT(24))
#TODO     @test !isempty(ptr)
#TODO     @test ptr[] == mkT(24)
#TODO 
#TODO     ptr[] = mkT(42)
#TODO     @test ptr[] == mkT(42)
#TODO 
#TODO     @test use_count(ptr) == 1
#TODO     ptr2 = copy(ptr)
#TODO     @test ptr2[] == mkT(42)
#TODO     @test use_count(ptr) == 2
#TODO     @test use_count(ptr2) == 2
#TODO 
#TODO     empty!(ptr)
#TODO     @test isempty(ptr)
#TODO     @test !isempty(ptr2)
#TODO 
#TODO     free(ptr)
#TODO 
#TODO     @test ptr2[] == mkT(42)
#TODO 
#TODO     free(ptr2)
#TODO end
#TODO 
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
    # TODO: Need to free the generated StdString objects
    mkT(i) = T ≡ Bool ? i % Bool : T ≡ StdString ? StdString(string(i)) : T(i)

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

@testset "std::vector<std::string>" begin end

@testset "std::map<std::string, bool>" begin end
