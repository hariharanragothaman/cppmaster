#include <iostream>
using namespace std; 

int main()
{
    int num = 3;
    (num & 1) ? cout << "ODD" : cout << "EVEN" << endl;
    return 0;
}
