/* The purpose of this program is to give me an understanding of arrays.
 * I will cover (1) Array Declaration/ Initialization (2) Input and Outpot of Array Values (3) Multidimensional Arrays
 * (4) Arrays as pointers (5) Dynamically Allocated Arrays
 * The chapters in the book that coincide with this are, 8.1,8.2,8.4,9.2
 */

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    /* Dynamic Memory Allocation allows for the adjustment and allocation of computer memory
     * while the program is running. Normally, the amount of memory set aside for the storage of
     * variables, or array elements would have to be known before-hand. Dynamic memory is especially useful when
     * we are dealing with lists because it allows the list to expand as new elements are added to the list, and contract
     * as elements are removed from the list.
     */
    
    /* Dynamic storage requests are made as part of either a declaration or an assignment statement. The statement:
     * int *num = new int;
     * reserves an area sufficient to hold one integer and places the address of the storage area in the pointer "num"
     */
    
    // Here  we create a variable that will store the number of items we will include in our array
    int arrayElements;
    
    /* Here we declare an array dynamically. The expession below essentially evaluates to:
     * Reserve area to store an array of integers, and place the address of the first element of that array
     * in the pointer arrayPointer.
     */
    int *arrayPointer = new int[arrayElements];

    // Prompt user to enter the amount of elements in the array
    cout << "Please enter the number of elements in this array: " << endl;
    cin >> arrayElements;
    
    // Create a for loop to allow for the entry of elements into the array, depending on the number entered
    // by the user.
    
    for (int count = 0; count < arrayElements; count ++)
    {
        cout << "Please enter the value of the array element: " <<endl;
        cin >> arrayPointer[count];
        
    }
    
    for (int count = 0; count < arrayElements; count ++)
    {
        cout << "Array element " << count << " = " << arrayPointer[count] << endl;
    }
    
    
    return 0;
}
