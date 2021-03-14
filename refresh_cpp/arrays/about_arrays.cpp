#include "../../headers.h"


int main()
{
    int arr[5]; // Declaration of static array of 5 elements
    int array[] = {1, 2, 3, 4, 5}; // Here the size of the array is not specified.
    for(auto it: array)
        cout << it;
    cout << endl;
    // Calculate the size of the array
    cout << "The size of the array is " << sizeof(array) / sizeof(array[0]) << endl;
}
