#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {1,2,3,4,5,6,7,8     };
    vector<int> B = {        5,  7,  9,10};
    vector<int> SYMM_DIFF;

    set_symmetric_difference(A.begin(), A.end(),
              B.begin(), B.end(),
              inserter(SYMM_DIFF, SYMM_DIFF.begin()));

    for(auto c: SYMM_DIFF)
        cout << c << " ";
    cout << endl;
    return 0;
}
