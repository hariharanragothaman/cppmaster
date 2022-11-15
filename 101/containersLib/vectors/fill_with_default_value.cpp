#include "debug.h"
int main()
{
    vector<bool> A(5);
    fill(A.begin(), A.end(), false);
    print(A)

    vector<int> B(5, 0);
    print(B)

    return 0;
}
