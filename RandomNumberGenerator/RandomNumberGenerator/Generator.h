//  Generator.h
//  RandomNumberGenerator
//  Created by Admin on 2/27/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#ifndef __RandomNumberGenerator__Generator__
#define __RandomNumberGenerator__Generator__

#include <stdio.h>

class Generator
{
public:
    Generator(); // Constructor
    unsigned long int random(int bitCount); // Random number generator
    bool chiSquare(int a [], int N, int R); // Chi Square test implementation
    
    // Virtual function modifiable for uniform generator class, and exponential generator class
    //virtual float random () = 0;
  
    
private:
    unsigned long int sequence;
    
};

#endif /* defined(__RandomNumberGenerator__Generator__) */
