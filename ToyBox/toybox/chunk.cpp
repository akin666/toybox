
#include "chunk"

namespace toybox {
    Chunk::Chunk( const Chunk& other )
    : voxels(other.voxels)
    , size(other.size)
    , material(other.material)
    , position(other.position)
    {
    }
    
    Chunk::Chunk( size_t size , glm::vec3 position )
    : size( size )
    , position(position)
    {
        voxels.resize( size * size * size );
    }
        
    Voxel& Chunk::get( int x , int y , int z )
    {
        const static size_t half = size / 2;
        
        x += half;
        y += half;
        z += half;
        
        size_t idx = (((z * size) + y) * size) + x;
        
        if( idx > voxels.size() )
        {
            // throw
            throw "";
        }
        return voxels[idx];
    }
} // toyboxns

