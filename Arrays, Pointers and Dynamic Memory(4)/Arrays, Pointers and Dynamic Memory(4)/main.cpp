/* The purpose of this program is to give me an understanding of arrays.
 * I will cover (1) Array Declaration/ Initialization (2) Input and Outpot of Array Values (3) Multidimensional Arrays
 * (4) Arrays as pointers (5) Dynamically Allocated Arrays
 * The chapters in the book that coincide with this are, 8.1,8.2,8.4,9.2
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
//    // CREATION AND ALLOCATION OF A 1D ARRAY DYNAMICALLY & AUTOMATICALLY //
//    
//    // The expression below is the constant integer to which we assign the number of elements in the array
//    const int ARRAY_ELEMENTS = 5;
//    
//    /* The expression below evaluates to the following: Reserve an area in computer memory sufficient enough
//     * to store an array of integers, and store the address of the first element in the array in the pointer
//     * array.
//     */
//    int *array = new int[ARRAY_ELEMENTS];
//    
//    // Allocate the Array
//    for (int count = 0; count < ARRAY_ELEMENTS; count ++ )
//    {
//        /* This expression can be evaluated to make the value of the element of the array refered to by
//         * the value of count equal to the value of count. This expression automatically fills all of the
//         * elements of the array.
//         */
//        array [count] = count;
//    }
//    
//    // Display the contents of the array
//    for (int count = 0; count < ARRAY_ELEMENTS; count ++)
//    {
//        cout << "The value of the array element " << count << " is " << array[count] <<endl;
//    }
//    
//    // Delete the array
//    
//    delete [] array;
    
    // CREATION AND ALLOCATION OF A 2D ARRAY DYNAMICALLY & AUTOMATICALLY
    
    /* The expression below assigns the number of row elements and the number of column elements
     * present in this 2D Array.
     */
    const int ARRAY_ROW_ELEMENTS = 3;
    const int ARRAY_COL_ELEMENTS = 4;
    
    
    // Allocate the Array
    
    /* In order to allocate a 2D Array Dynamically, we utilize a double pointer as the base.
     * Furthermore we utilize a for loop that creates the columns of the 2D Array as it is creating the columns
     */
    
    int **twoDimensionalArray = new int *[ARRAY_ROW_ELEMENTS];
    
    for (int rowCount = 0; rowCount < ARRAY_ROW_ELEMENTS; rowCount++) // Dynamically Allocate Rows
    {
        twoDimensionalArray[rowCount] = new int [ARRAY_COL_ELEMENTS]; // Dynamically Allocate Columns
    }
    
    // Fill the Array
    
    for (int rowCount = 0; rowCount < ARRAY_ROW_ELEMENTS; rowCount++) // Fill the Rows
    {
        for (int colCount = 0; colCount < ARRAY_COL_ELEMENTS; colCount++) // Fill the Columns
        {
            twoDimensionalArray[rowCount][colCount] = rowCount + colCount; // Store the values of the rows and columns
        }
    }
    
    // Display the Array
    
    for (int rowCount = 0; rowCount < ARRAY_ROW_ELEMENTS; rowCount++)
    {
        for (int colCount = 0; colCount < ARRAY_COL_ELEMENTS; colCount++)
        {
            cout << twoDimensionalArray[rowCount][colCount] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    // Deallocate the Array
    
    
    
    
    
    return 0;
}
