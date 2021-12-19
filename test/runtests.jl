using STL
using Test

@testset "std::map<$K,$T>" for K in StdMaps.keys, T in StdMaps.types
    map = StdMap{K,T}()
    @test keytype(map) ≡ K
    @test eltype(map) ≡ T
    @test map.cxx == C_NULL

    map = allocate(StdMap{K,T})
    @test map.cxx ≠ C_NULL

    @test length(map) == 0
    #TODO @test isempty(map)

    free(map)
end

@testset "std::vector<$T>" for T in StdVectors.types
    vec = StdVector{T}()
    @test eltype(vec) ≡ T
    @test vec.cxx == C_NULL

    vec = allocate(StdVector{T})
    @test vec.cxx ≠ C_NULL

    @test length(vec) == 0
    @test isempty(vec)

    free(vec)
end

@testset "std::shared_ptr<$T>" for T in StdSharedPtrs.types
    ptr = StdSharedPtr{T}()
    @test eltype(ptr) ≡ T
    @test ptr.cxx == C_NULL

    ptr = allocate(StdSharedPtr{T})
    @test ptr.cxx ≠ C_NULL

    @test isempty(ptr)

    free(ptr)
end
