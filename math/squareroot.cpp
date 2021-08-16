#include <iostream>
using namespace std;

#include <cmath>
// this is actually the C math library

int main()
{
    float myFloat = 7.4f;
    // f tells the compiler - 32 bit float instead of a 64bit double
    cout << "The square root of " << myFloat << " is " << sqrt(myFloat) <<endl;
}