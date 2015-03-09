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
    void getRandomNumbers();//
    void setParamenters(int bits, int totalCount);

private:
};

#endif /* defined(__RandomNumberGenerator__UniGenerator__) */
