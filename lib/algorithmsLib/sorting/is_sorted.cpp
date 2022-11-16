#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 5, 6, 7};
    bool res1 = is_sorted(A.begin(), A.end());
    bool res2 = is_sorted(A.begin(), A.end(), greater<int>());
    cout << "Is the array sorted?: " << res1 << endl;
    cout << "Is the array sorted?: " << res2 << endl;

}
