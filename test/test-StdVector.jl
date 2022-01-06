@testset "$V{$T}" for V in [RefStdVector, GCStdVector, STL.SharedStdVector], T in sort!(collect(STL.StdVector_types); by=string)
    # These segfault; converting STL.SharedStdString to Ptr{StdString} doesn't work
    T ≡ RefStdVector{STL.SharedStdString} && continue
    T ≡ STL.SharedStdVector{STL.SharedStdString} && continue
    # @show V T

    # TODO: Need to free the generated RefStdString objects
    function mkT(i)
        return T ≡ Bool ? i % Bool :
               T <: Ptr ? T(i) :
               T ≡ RefStdString ? RefStdString(string(i)) :
               T ≡ STL.SharedStdString ? STL.SharedStdString(string(i)) :
               T ≡ RefStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ RefStdVector{STL.SharedStdString} ? (x = T(1); x[0] = STL.SharedStdString(string(i)); x) :
               T ≡ STL.SharedStdVector{RefStdString} ? (x = T(1); x[0] = RefStdString(string(i)); x) :
               T ≡ STL.SharedStdVector{STL.SharedStdString} ? (x = T(1); x[0] = STL.SharedStdString(string(i)); x) : i
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
