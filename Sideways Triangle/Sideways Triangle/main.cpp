//  main.cpp
//  Sideways Triangle
//
//  Write a program that uses only two output statements,
//  cout << "#" and cout << "\n", to produce a pattern of hash
//  symbols shaped like a sideways triangle
//  *
//  **
//  ***
//  **
//  *
//
//  Created by Nathan Waldron on 3/10/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    // Initialize the loop variable row. "row" = 1
    for (int row = 1; row <= 5; row++)
    {
        for (int hash = 1; hash <= row; hash++)
        {
            cout << "#";
        }
    
        cout << "\n";
    }
    
    
    return 0;
}
