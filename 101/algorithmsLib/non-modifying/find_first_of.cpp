/*
 * find first occurrence of t in s
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s = "oreo_cookies";
    string t = "re";
    string::iterator it = find_first_of(s.begin(), s.end(), t.begin(), t.end());
    cout << "The index is: " << it - s.begin();
    return 0;
}
