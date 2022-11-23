#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};

    int val1 = 3;
    int val2 = 10;

    /*
     *  Note: we can either use A.begin() or begin(A
     */
    auto it = find(A.begin(), A.end(), val1);
    auto it2 = find(begin(A), end(A), val2);

    cout << *it << " " << *it2 << " " << endl;

    (it != A.end()) ? cout << "Vector A has val1" << endl : cout << "Vector A does not have val1" << endl;
    (it2 != A.end()) ? cout << "Vector A has val2" << endl : cout << "Vector A does not have val2" << endl;


    return 0;
}
