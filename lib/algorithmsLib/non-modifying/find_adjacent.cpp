#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 4, 5, 6, 7, 7,  8,  9, 10};
    auto it = adjacent_find(A.begin(), A.end());
    if(it == A.end())
    {
        cout << "No matching adjacent elements" << endl;
    }
    else
    {
        cout << "The first adjacent pair of equal elements "
        << distance(A.begin(),it) << " , " << *it << endl;
    }

    auto it2 = adjacent_find(A.begin(), A.end(), greater<int>());
    if(it2 == A.end())
    {
        cout << "The vector is sorted in ascending order" << endl;
    }
    else
    {
        cout << "The last element in non-decreasing subsequence " << distance(A.begin(), it2) << " "
        << *it2 << endl;
    }
    return 0;
}
