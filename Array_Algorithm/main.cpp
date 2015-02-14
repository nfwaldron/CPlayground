//  main.cpp
//  Array_Algorithm
//  Nathan Waldron
//  Analysis of Algorithms
//  Write an algorithm to find the summation of EVEN numbers in an array of n elements.
//  Created by Admin on 2/13/15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    const int ARRAY_ELEMENTS = 5;
    int array[ARRAY_ELEMENTS] = {2,4,7,5,3};
    int sumOfEvens = 0;
    
    cout << "Please enter integer values for " << ARRAY_ELEMENTS << " elements." << endl;
    
    for (int count = 0; count < ARRAY_ELEMENTS; count++)
    {
        cout << "Integer value: " << endl;
        cin >> array[count];
        
        if (array[count] % 2 == 0)
        {
            sumOfEvens += array[count];
        }
    }
    
    cout << "The sum of the even numbers in the array is " << sumOfEvens << endl;
    
    return 0;
}
