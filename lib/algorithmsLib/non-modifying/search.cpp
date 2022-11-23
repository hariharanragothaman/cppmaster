#include <iostream>
#include <algorithm>
using namespace std;

bool contains(const auto& cont, string_view s)
{
    return search(cont.begin(), cont.end(), s.begin(), s.end()) != s.end());
}

int main()
{
    const auto str = "hello hello this is awesome";
    return 0;
}
