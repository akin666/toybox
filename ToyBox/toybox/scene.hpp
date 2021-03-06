//
//  scene
//
//  Created by mikael korpela on 08/01/15.
//  Copyright (c) 2014 mikael korpela. All rights reserved.
//

#ifndef TOYBOX_SCENE_hpp
#define TOYBOX_SCENE_hpp

#include <core.hpp>

namespace toybox {
    class Chunk;
    class Scene
    {
    private:
        std::vector<Chunk *> chunks;
    public:
        ~Scene();
        
        void add( Chunk *chunk );
    };
} // toyboxns

#endif
