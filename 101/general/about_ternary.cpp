// ( condition ) ? expressionIfTrue : expressionIfFalse
#include <iostream>
using namespace std;

int main()
{
    int x = 7;
    int y = 5;
    int a = ( x > y) ? x : y;
    cout << "The value of a is: " << a << endl;
    return 0;
}