//  main.cpp
//  Reduction of a Square
//  Write a Program that uses only two output statements cout << "#" and
//  cout << "\n" to produce a pattern of hash symbols shaped like a right
//  triangle.
//  Created by Nathan Waldron on 3/10/15.
//  Copyright (c) 2015 Admin. All rights reserved.

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{

    // Two for loops will create a repeating code, which will essentially create a 5x5 table
    for (int row = 1; row <= 5; row++)
    {
        // In order to decrease the number of hashes output, while the number of rows
        // increases, subtract the number variable HASH_NUMBER by the variable row
        
        for (int HASH_NUMBER = 0; HASH_NUMBER <= 5 - row; HASH_NUMBER++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
