//
//  chunk
//
//  Created by mikael korpela on 08/01/15.
//  Copyright (c) 2014 mikael korpela. All rights reserved.
//
// does chunk define the resolution??

#ifndef TOYBOX_CHUNK_hpp
#define TOYBOX_CHUNK_hpp

#include <core.hpp>
#include "voxel.hpp"

namespace toybox {
    class Chunk
    {
    private:
        std::vector<Voxel> voxels;
    public:
        Chunk( const Chunk& other );
        Chunk( size_t size , glm::vec3 position );
        
        Voxel& get( int x , int y , int z );
        
        size_t size;
        Material material; // USE SAMPLERS.
        glm::vec3 position;
    };
} // toyboxns

#endif
