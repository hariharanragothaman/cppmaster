#include "../../headers.h"

int gcd(int a, int b)
{
    if (b==0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main()
{
    int a = 3;
    int b = 6;
    int _gcd = gcd(a, b);
    int _lcm = lcm(a, b);
    cout << _gcd << endl << _lcm;
    return 0;
}