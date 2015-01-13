
#include "scene.hpp"
#include "chunk.hpp"

namespace toybox {
    Scene::~Scene()
    {
        for( auto *chunk : chunks )
        {
            delete chunk;
        }
        chunks.clear();
    }
    
    void Scene::add(Chunk *chunk)
    {
        chunks.push_back(chunk);
    }
} // toyboxns