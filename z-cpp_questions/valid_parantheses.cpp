#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    vector<char> open = { '(', '[', '{'};
    vector<char> closed = { ')', ']', '}'};

    vector <char> st;

    for(auto& elem: s)
    {
        auto open_found = find(open.begin(), open.end(), elem);
        auto closed_found = find(closed.begin(), closed.end(), elem);
        if (open_found != open.end())
        {
            st.push_back(elem);
        } 
        if (closed_found != closed.end())
        {
            int index = distance(closed.begin(), closed_found);
            if (!st.empty() && index < open.size() && st.back() == open[index])
            {
                st.pop_back();
            }
            else
            {
                return false;
            }
        }
    }
    return st.empty();
}


int main()
{
    cout << "Valid Parantheses" << endl;
    string s = "([{}])";
    bool result; 
    result = isValid(s);
    cout << "The string is: " << result;
    return 0;
}