#include <iostream>
using namespace std;

int main()
{
    int *ptr1 = new int;
    /*
     * new operator allocates an object from the heap
     * Also if we don't delete the memory it can cause a memory leak
     */
    delete ptr1;


    //*************************************************

    int *ptr;
    int num = 4;

    cout << "The integer is " << num << endl;
    ptr = new int[num];  // using new to initialize the ptr to array with size num
    // This as said before dynamically allocates memory in the heap

    for(int i=0; i<num; i++)
    {
        ptr[i] = i+1;
        cin >> ptr[i];
    }

    cout << "The elements you entered are" << endl;
    for(int i=0; i<num; i++)
    {
        cout << ptr[i] << endl;
    }

    delete[] ptr;
    return 0;
}