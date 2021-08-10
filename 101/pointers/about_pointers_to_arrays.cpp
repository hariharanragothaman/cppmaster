#include <iostream>
using namespace std;

/* The various ways to assign values to array using ptr */

int main()
{
    // Declaration of array and pointer
    int array[4];
    int *ptr;

    // Make pointer to point to the first element of the array
    ptr = array;

    *ptr = 3; // setting the first element of the arr to 3
    ptr++; // Increment and move to the second element

    *ptr = 5; // Assigning the next value to 5

    /* Now when want to assign things directly  */
    ptr = &array[3];
    *ptr = 15;

    // Moving ptr to the start of the array
    ptr = array;
    *(ptr+2) = 10;

    // Displaying the array
    for(auto it: array)
    {
        cout << it <<endl;
    }

    return 0;
}