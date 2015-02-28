//  Nathan Waldron
//  CPSC 501
//  main.cpp
//  RandomNumberGenerator
//  Created by Admin on 2/27/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include <iostream>
#include "Generator.h"

using namespace std;

int main()
{
    const int BITS = 4;
    const int RANGE = 16;
    const int TOTAL_COUNT = 10000;
    Generator generator;
    int counters[RANGE] = { 0 };
    for (int i = 0; i < TOTAL_COUNT; i++)
    {
        int result = generator.random(BITS);
        //cout << result << endl;
        counters[result]++;
    }
    for (int i = 0; i < RANGE; i++)
    {
        cout << "[" << i << "] = " << counters[i] << endl;
    }
    
    bool chiResult = generator.chiSquare(counters, TOTAL_COUNT, RANGE);
    
    cout << "Chi Square Test: " << (chiResult ? "Passed" : "Failed") << endl;
    
    return 0;
}