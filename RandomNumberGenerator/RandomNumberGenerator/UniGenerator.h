//
//  UniGenerator.h
//  RandomNumberGenerator
//
//  Created by Admin on 3/2/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#ifndef __RandomNumberGenerator__UniGenerator__
#define __RandomNumberGenerator__UniGenerator__

#include <stdio.h>
#include "Generator.h"
#include <cmath>

class UniGenerator : public Generator
{
public:
    UniGenerator(); // Constructor
    
    // Function generates random numbers using the .random method in the parent class
    // Pre: None
    // Post: None
    void getRandomNumbers();
};

#endif /* defined(__RandomNumberGenerator__UniGenerator__) */
