#include <iostream>
using namespace std;

int main()
{
    int num;
    int *ptr; // declaring int type pointer

    ptr = &num;
    cout << "Address stored in ptr is: " << ptr << endl;
    *ptr = 7;

    cout << "Value of number is: " << num << endl;
    return 0;
}