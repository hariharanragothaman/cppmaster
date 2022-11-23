#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void print(std::vector<T> const &v)
{
    for (auto i: v)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}
