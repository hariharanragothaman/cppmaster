#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s = "HelloWorld";
    string pattern = "World";
    if(s.find(pattern) != string::npos)
        cout << "Substring" << endl;
    return 0;
}