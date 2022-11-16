#include <iostream>
#include <vector>
#include "debug.h"
using namespace  std;

template<typename T>
std::vector<T> slices(std::vector<T> const &v, int m, int n)
{
    auto first = v.cbegin() + m;
    auto last = v.cbegin() + n + 1;
    std::vector<T> vec(first, last);
    return vec;
}

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 2, 2, 4, 6, 5 };
    int m = 4, n = 7;
    std::vector<int> sub_vec = slices(v, m, n);
    print(sub_vec);
    return 0;
}
