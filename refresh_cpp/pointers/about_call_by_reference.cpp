#include <iostream>
using namespace std;
// call by value - void swap(int a, int b)
void swap(int& a, int& b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}


int main()
{
    int num1 = 4;
    int num2 = 5;
    swap(num1, num2);

    cout << num1 << num2;
    return 0;
}