#include "debug.h"

/*
 *  If the value doesn't exist --> iterator points to temp.end()
 */

int main()
{
    vector<int> A = {1, 2, 3, 4};
    int value = 3;
    auto index = find(A.begin(), A.end(), value); // This is the iterator
    auto idx = distance(A.begin(), index); // This is the actual index
    auto result = index - A.begin();
    cout << "The index without using distance() is:" << result << endl;
    cout << "The index is: " << idx << endl;
}
