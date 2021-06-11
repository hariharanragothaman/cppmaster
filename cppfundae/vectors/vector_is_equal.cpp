/*
 * Check if 2 vectors are
 * Check if the elements in two ranges are equal.
 * Pass in an iterator to the beginning of the range, and an iterator to the end of the range, and an iterator to the beginning of the second range.
 * Returns a bool. True if the elements are equal, false otherwise.
 */

#include "../../headers.h"

int main()
{
    vector<int> v1  {5, 4, 6};
    vector<int> v2  {5, 4, 6};
    bool isEqual = equal(v1.begin(), v1.end(), v2.begin());
    cout << " Are the 2 strings equal? : " << isEqual;
    return 0;
}