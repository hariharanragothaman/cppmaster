#include <iostream>
#include <vector>
#include "debug.h"
using namespace std;

int main()
{
    vector<int> A= {1, 2, 3, 4, 5};
    print(A);
    A.clear();
    print(A);
}
