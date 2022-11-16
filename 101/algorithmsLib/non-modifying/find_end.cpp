/*
 *  To find the last occurance of t in s
 */

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s = "oreo_cookies";
    string t = "oo";
    // Find the last occurrence of t in s
    string::iterator it = find_end(s.begin() ,s.end(), t.begin(), t.end());
    cout << "The index is: " << it - s.begin();
    return 0;

}
