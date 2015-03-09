//
//  ExpoGenerator.cpp
//  RandomNumberGenerator
//
//  Created by Admin on 3/2/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include "ExpoGenerator.h"
#include <cmath>
#include <iostream>
using namespace std;

ExpoGenerator::ExpoGenerator()
{
    cout<<"ExpoGenerator constructor called"<<endl;
}


void ExpoGenerator::setParameters( int bits, int lambda)
{
    // set the number of bits that the .random method will use to generate a random number
    if (bits < 1.0)
    {
        cerr << "You have entered an invalid value please enter a value greater than '1' "<<endl;
    }
    else
    {
    myBits = bits;
    }
    
    // set the value of lambda
    myLambda = lambda;
    
    // set the range
    myRange = pow(2.0, myBits);
    
    cout << "bits = " << myBits << " lambda = " << myLambda << " Range = "<< myRange << endl;
   
    //get a random number
    
    unsigned long int result = random(bits);

    cout << "My random number = " << result << endl;
//
//    //set the value of t
//    myT = myRandomNumber/(myBits-1);
//    
//    cout << "My t  = " << myT <<endl;

}


float ExpoGenerator::exponentialFunction()
{
    float result;
    
    
    
    
    result = myLambda * pow(myE, (-(myLambda) * myT));
    return result;
}

void ExpoGenerator::exponentialNumberGenerator()
{
    float* arrayPointer = new float[myRange];
    float result;
    for (int i = 0; i < 10000; i++)
    {
        result = exponentialFunction();
        cout << result;
        arrayPointer[i] = result;
        arrayPointer[i]++;
    }
    
}
//const int TOTAL_COUNT = 10000; // Total number of random numbers to be generated
//
//// Dynamically allocate new array
//int* arrayPointer = new int[myRange];
//
//arrayPointer = { 0 };
//
//for (int i = 0; i < TOTAL_COUNT; i++)
//{
//    // The .random method creates random numbers using the left shift feedback register method.
//    // The random number that is generated is stored in the variable "result".
//    // The arguement for the method .random is BITS. With 4 bits you can generate numbers between 0-15
//    // The number is random, because you are implementing the left shift feedback register method.
//    int result = random(BITS);
//    
//    // cout << result << endl;
//    
//    // The random number generated is between 0-15. counters[result]++ counts the number of times a value between 0-15 is
//    // generated, and stores that number in the corresponding index of the array. For example, if a '1' is generated, the
//    // index [1] will have a value of '1'. If it's generated again, the value of index [1] will be '2'.
//    counters[result]++;
//}


