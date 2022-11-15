#include "../../headers.h"

int main()
{
    int result = 0;
    int a = 15;
    int b = 16;

    // So this actually returns the computed value.
    result =  a < b ? a % 2 : b;

    cout << "The result is: " << result;
    return 0;
}