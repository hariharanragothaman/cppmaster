#include "../headers.h"

int main()
{
    int number = 3;

    if(number & 1)
    {
        cout << "The number is odd" << endl;
    }
    else
    {
        cout << "The number is even" << endl;
    }

    return 0;
}