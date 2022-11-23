#include "../debug.h"
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a == b;
}


int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    vector<int> B = {1, 2, 3, 7, 8};
    auto it = mismatch(A.begin(), A.end(), B.begin());
    cout << "The mismatch starts at: " << *it.first << " " << *it.second << endl;

    auto it2 = mismatch(A.begin(), A.end(), B.begin(), compare);
    cout << "The mismatch starts at: " << *it2.first << " " << *it2.second << endl;

    return 0;
}
