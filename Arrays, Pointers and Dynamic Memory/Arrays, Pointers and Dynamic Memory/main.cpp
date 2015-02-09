/* The purpose of this program is to give me an understanding of arrays.
 * I will cover (1) Array Declaration/ Initialization (2) Input and Outpot of Array Values (3) Multidimensional Arrays
 * (4) Arrays as pointers (5) Dynamically Allocated Arrays
 * The chapters in the book that coincide with this are, 8.1,8.2,8.4,9.2
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{

    /* Arrays are a list of related values with the same data type
     * To initialize an array, declare the data type, the array name, and the number of elements within the array
     * Common programming practice is to define a constant for the number of elements in the array.
     */
    
    /* Array elements can be initialized within their declaration statements */
    
    const int ARRAY_ELEMENTS = 5;
    int integerArray [ARRAY_ELEMENTS] = {34,56,32,12,45};
    
    /* A unique feature about initializers is that the size of an array may be omitted when the initializing values are
     * included in the declaration statement */
    
    int intArray [] = {3,6,5,4,3,2,1}; // How to initialize integer array at declaration
    
    char charArray [] = "This is real music"; // How to initialize character array at declaration
    
    
    // INTERACTIVE ARRAY INPUT AND OUTPUT //
    
    int gradeList [ARRAY_ELEMENTS];
    
    /* Individual array elements can be assigned values interactively using a cin stream object, and a for loop.
     * Let's take a look at the following for loop.
     * We have previously declared that the number of elements in this array of integers is 5.
     * In the for loop we declare the variable count, and initialize it to 0.
     * While the count is less than the number of elements in the array, we continue through iterations of the loop,
     * incrementing the value of the variable count.
     * Initializing the variable count to zero also serves a second purpose...it refers to the first element in the array.
     * The expression gradeList[0] refers to the first element in the array, and count = 0, therefore
     * gradeList[count] = gradeList[0].
     * The variable count serves both as a counter variable and array element index
     */
    
    for (int count = 0; count < ARRAY_ELEMENTS; count ++)
    {
        cout << "Enter a grade: ";
        cin >> gradeList[count];
    }
    
    /* To output the elements of the array we set the counter/array element index to 0.
     * We then continue to loop through the array, outputting the elements of the array until
     * the counter is greater than the number of elements in the array, at which point, the loop terminates
     */
    
    for (int count = 0; count < ARRAY_ELEMENTS; count ++)
    {
        cout << "Array element " << count << " = " << gradeList[count] << endl;
    }
    
    return 0;
}
