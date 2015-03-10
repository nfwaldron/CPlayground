//  main.cpp
//  Reduction of a Square
//  Write a Program that uses only two output statements cout << "#" and
//  cout << "\n" to produce a pattern of hash symbols shaped like a right
//  triangle.
//  Created by Nathan Waldron on 3/10/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[])
{

    for (int row = 1; row <= 5; row++)
    {
        for (int HASH_NUMBER = 1; HASH_NUMBER <= 5; HASH_NUMBER++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
