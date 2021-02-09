#include <iostream>
using namespace std;

// multiply 2 int's
int multiply( int x, int y)
{
    return (x * y);
}

// multiply 2 double's
double multiply( double x, double y)
{
    return (x * y);
}

int main()
{
    int temp1;
    double temp2;

    temp1 = multiply(4, 5);
    temp2 = multiply(4.5, 5.5);
    cout << "Value of temp1 is: " << temp1 << endl;
    cout << "Value of temp2 is:" << temp2 << endl;
}