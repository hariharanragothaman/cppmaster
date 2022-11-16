#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 5, 5, 5, 9};
    vector<int> B = {2, 5, 7};
    vector<int> UNION;

    set_union(A.begin(), A.end(),
                     B.begin(), B.end(),
                     inserter(UNION, UNION.begin()));

    for(auto c: UNION)
        cout << c << " ";
    cout << endl;
    return 0;
}
