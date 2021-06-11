#include <iostream>
using namespace std;

int main()
{
    int a, b, sum, subtr;
    a = 100;
    b = 20;
    sum = a + b;
    subtr = a - b;
    cout << "sum is: " << sum << endl;
    cout << "substr is: " << subtr << endl;

    int answer;
    int x = 10;
    int y = 5;

    x *= 5;
    answer = -x + (-y);

    cout << "The answer is " << answer;

    return 0;
}