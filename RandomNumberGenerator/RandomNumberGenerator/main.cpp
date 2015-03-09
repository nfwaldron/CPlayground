//  Nathan Waldron
//  CPSC 501
//  main.cpp
//  RandomNumberGenerator
//  Created by Admin on 2/27/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include <iostream>
#include "Generator.h"
#include "ExpoGenerator.h"
#include "UniGenerator.h"

using namespace std;

int main()
{
<<<<<<< Updated upstream
    const int BITS = 4; // Number of bits
    const int RANGE = 16; // Number of elements in the array
    const int TOTAL_COUNT = 10000; // Total number of random numbers to be generated
    Generator generator;
    
    // Set the value of all elements in the array to '0'.
    int counters[RANGE] = { 0 };
    
    for (int i = 0; i < TOTAL_COUNT; i++)
    {
        // The .random method creates random numbers using the left shift feedback register method.
        // The random number that is generated is stored in the variable "result".
        // The arguement for the method .random is BITS. With 4 bits you can generate numbers between 0-15
        // The number is random, because you are implementing the left shift feedback register method.
        int result = generator.random(BITS);
        
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
    
    bool chiResult = generator.chiSquare(counters, TOTAL_COUNT, RANGE);
    
    cout << "Chi Square Test: " << (chiResult ? "Passed" : "Failed") << endl;
=======
  //  UniGenerator tempGen;
  //tempGen.getRandomNumbers();
//
  ExpoGenerator expoGen;
   expoGen.setParameters(4, 3);
>>>>>>> Stashed changes
    
    return 0;
}
