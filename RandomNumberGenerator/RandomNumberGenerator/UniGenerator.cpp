//
//  UniGenerator.cpp
//  RandomNumberGenerator
//
//  Created by Admin on 3/2/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include "UniGenerator.h"
#include <iostream>
#include <cmath>
using namespace std;

UniGenerator::UniGenerator()
{
    cout << "UniGenerator Constructor called" <<endl;
}


void UniGenerator::getRandomNumbers()
{
    

    const int BITS = 4; // Number of bits
    const int RANGE = 16; // Number of elements in the array
    const int TOTAL_COUNT = 10000; // Total number of random numbers to be generated
    
    
    // Set the value of all elements in the array to '0'.
    int counters[RANGE] = { 0 };
    
    for (int i = 0; i < TOTAL_COUNT; i++)
    {
        // The .random method creates random numbers using the left shift feedback register method.
        // The random number that is generated is stored in the variable "result".
        // The arguement for the method .random is BITS. With 4 bits you can generate numbers between 0-15
        // The number is random, because you are implementing the left shift feedback register method.
        int result = random(BITS);
        
        // cout << result << endl;
        
        // The random number generated is between 0-15. counters[result]++ counts the number of times a value between 0-15 is
        // generated, and stores that number in the corresponding index of the array. For example, if a '1' is generated, the
        // index [1] will have a value of '1'. If it's generated again, the value of index [1] will be '2'.
        counters[result]++;
    }
    
    for (int i = 0; i < RANGE; i++)
    {
        cout << "[" << i << "] = " << counters[i] << endl;
    }
    
    bool chiResult = chiSquare(counters, TOTAL_COUNT, RANGE);
    
    cout << "Chi Square Test: " << (chiResult ? "Passed" : "Failed") << endl;
}