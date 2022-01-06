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
