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
    // Initialize the loop variable row. "row" = 1. While row is less than or equal to 5
    // execute the statement within the for loop and then increment the value of row
    for (int row = 1; row <= 5; row++)
    {
        // While hash is less than or equal to row, exexute the statement inside the for loop
        // and 
        for (int hash = 1; hash <= row; hash++)
        {
            cout << "#";
        }
    
        cout << "\n";
    }
    
    
    return 0;
}
