#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "oreo_cookies";
    string t = "re";
    auto it = find_first_of(s.begin(), s.end(), t.begin(), t.end());
    cout << "The index is: " << it - s.begin();
    return 0;
}
