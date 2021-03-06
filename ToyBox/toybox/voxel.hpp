//
//  voxel
//
//  Created by mikael korpela on 08/01/15.
//  Copyright (c) 2014 mikael korpela. All rights reserved.
//

#ifndef TOYBOX_VOXEL_hpp
#define TOYBOX_VOXEL_hpp

#include <core.hpp>
#include "core.hpp"

namespace toybox {
    class Voxel
    {
    public:
        unsigned char state;
        unsigned char permutation;
        unsigned char permutation2;
        unsigned char tt;
    public:
        Voxel();
    };
} // toyboxns

#endif
