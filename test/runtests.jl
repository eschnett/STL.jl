using Random
using STL
using Test
using TestAbstractTypes

#TODO @testset "std::map<$K,$T>" for K in STL.StdMap_keys, T in STL.StdMap_types
#TODO     # TODO: Need to free the generatedp StdString objects
#TODO     mkK(i) = K ≡ Bool ? i % Bool : K ≡ StdString ? StdString(string(i)) : K <: Ptr ? K(i) : i
#TODO     mkT(i) = T ≡ Bool ? i % Bool : T ≡ StdString ? StdString(string(i)) : T <: Ptr ? T(i) : i
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

@testset "$V{$T}" for V in [RefStdVector, GCStdVector, SharedStdVector], T in sort!(collect(STL.StdVector_types); by=string)[1:1]
    # TODO: Need to free the generated StdString objects
    mkT(i) = T ≡ Bool ? i % Bool : T ≡ StdString ? StdString(string(i)) : T <: Ptr ? T(i) : i

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
