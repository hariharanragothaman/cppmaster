#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};
    auto is_even = [](int c) {return c % 2 == 0;};

    auto it = find_if(A.begin(), A.end(), is_even);
    (it != A.end()) ? cout << "There is an even number in A " << *it <<endl : cout << "There is no even number" << endl;
    return 0;
}
