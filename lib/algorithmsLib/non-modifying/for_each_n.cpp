#include "../debug.h"
#include <algorithm>

int main()
{
    vector<int> A = {1, 2, 3, 4, 5};

    auto lambda  = [](int &n) {cout << n << " "; };
    for_each(A.begin(), A.end(), lambda);
    cout << endl;

    for_each_n(A.begin(), 3, [](auto &n) { n *= 2;});
    cout << "Printing after for_each_n operations" << endl;
    for_each(A.begin(), A.end(), lambda);
    cout << endl;
}
