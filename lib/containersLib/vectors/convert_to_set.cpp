#include "debug.h"
/*
 * It gives us a simple way to get rid of duplicates in vector, and sort it:
 * Here ‘v2′ will contain the same elements as ‘v’ but sorted in ascending order and with duplicates removed.
 */

int main()
{
    vector<int> A = {1, 2, 3, 4, 4, 5};
    A.erase(unique(A.begin(), A.end()), A.end());
    print(A);
}
