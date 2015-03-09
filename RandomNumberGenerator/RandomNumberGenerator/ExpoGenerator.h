//
//  ExpoGenerator.h
//  RandomNumberGenerator
//
//  Created by Admin on 3/2/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#ifndef __RandomNumberGenerator__ExpoGenerator__
#define __RandomNumberGenerator__ExpoGenerator__
#include <stdio.h>
#include "Generator.h"

class ExpoGenerator : public Generator
{
public:
    ExpoGenerator();
    // set the parameters
    void setParameters( int bits, int lambda);
    float exponentialFunction();
    void exponentialNumberGenerator();
    
private:
    float myLambda;
    int myBits;
    float myT;
    int myRange;
    unsigned long int myRandomNumber;
    const double myE = 2.718;
    double myResult;
    
};


#endif /* defined(__RandomNumberGenerator__ExpoGenerator__) */
