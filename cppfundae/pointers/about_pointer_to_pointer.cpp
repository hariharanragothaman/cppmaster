#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int *ptr1;
    int **ptr2;

    ptr1 = &x;
    ptr2 = &ptr1;

    cout << "The value of x is:" << x << endl;
    cout << "The value of ptr1 is:" << *ptr1 << endl;
    cout << "The value of *ptr2 is" << *ptr2 << endl;
    cout << "The value of ptr2 is: " << **ptr2 << endl;

    return 0;
}