/*
 *  Returns true if the sorted range [first2, last2)
 *  is a subsequence of the sorted range [first1, last1).
 *  (A subsequence need not be contiguous.)
 *  Note the criteria is that the ranges must be sorted
 *  This can also be a set.
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<char> v1 = {'a', 'b', 'c', 'f', 'h', 'x'};
    vector<char> v2 = {'a', 'b', 'c'};
    vector<char> v3 = {'a', 'c'};
    vector<char> v4 = {'a', 'a', 'b'};
    vector<char> v5 = {'g'};
    vector<char> v6 = {'a', 'c', 'g'};
    vector<char> v7 = {'A', 'B', 'C'};


    auto no_case = [](char a, char b) { return std::tolower(a) < std::tolower(b); };

    for(auto c: v1)
        cout << c;
    cout << endl;
    cout << "includes: " << endl;
    for(auto c: v2) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v2.begin(), v2.end()) << endl;
    for(auto c: v3) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v3.begin(), v3.end()) << endl;
    for(auto c: v4) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v4.begin(), v4.end()) << endl;
    for(auto c: v5) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v5.begin(), v5.end()) << endl;
    for(auto c: v6) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v6.begin(), v6.end()) << endl;
    for(auto c: v7) cout << c; cout << ": " << includes(v1.begin(), v1.end(), v7.begin(), v7.end(), no_case) << endl;

    return 0;
}
