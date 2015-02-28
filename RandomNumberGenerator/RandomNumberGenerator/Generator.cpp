//
//  Generator.cpp
//  RandomNumberGenerator
//
//  Created by Admin on 2/27/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//
#include "Generator.h"
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;



Generator::Generator()
{
    sequence = time(NULL);
    cout << "sequence = " << hex << sequence << dec << endl;
}

    // This random number generator takes an integer as an arguement. Using a mask to tap the 1st and 4th bits,
    // we use the left shift feedback register method to generate random numbers.
    
unsigned long int Generator::random(int bitCount)
{
    int returnValue = 0;
    for (int i = 0; i < bitCount; i++)
    {
        // detect the tapping bits, bit0 and bit3
        // bit0 = 1 only if bit 0 in the sequence is a 1
        // bit3 = 1 only if bit 3 in the sequence is a 1
        int bit0 = (sequence & 0x00000001) != 0 ? 1 : 0;
        int bit3 = (sequence & 0x00000008) != 0 ? 1 : 0;
        // determine the value of the XOR
        unsigned long int xorBit = ((bit0 != bit3) ? 0x80000000 : 0);
        // shift the sequence to the left by one bit and OR new bit on the left
        sequence >>= 1;
        sequence |= xorBit;
        // shift the returnValue to the left by one bit and OR new bit on the right
        returnValue <<= 1;
        if (xorBit != 0)
        returnValue |= 0x00000001;
    }
    return returnValue;
}
    
    
    /* The Chi Square test examines a sequence of supposedly random numbers to determine if they are in fact random.
     * If I was to  generate 10,000 numbers in the 0-63 range. Then N = 10,000 and r = 64. You will then compute χ2 by the
     * formula χ2 = sum of the (observed values - expected values)^2 / expected values. If χ2 is within the range of
     * r ± Square root of (2r), the distribution is indeed random.
     */
bool Generator::chiSquare(int a [], int N, int R)
{
        
    // Variable to store the value of the top half of the equation, the sum of observed values minus the expected values
    // squared.
    double top = 0;
        
    // Variable to store the value of the lower half of the equation, the expected value. The expected value is the number
    // generated, divided by the range.
    double nr = static_cast<double>(N) / R;
        
    // Utilize a for loop to determine the sum.
    for (int i = 0; i < R; i++)
    {
        top += pow(a[i] - nr, 2);
    }
    double chi = top / nr;
    double loVal = R - 2 * sqrt(R);
    double hiVal = R + 2 * sqrt(R);
    cout << "Chi Square = " << chi << endl;
    cout << "loVal = " << loVal << " hiVal = " << hiVal << endl;
    return chi >= loVal && chi <= hiVal;
}


