#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    string reverseWords(string str) 
    {
        vector<string> ans; 
        stringstream s(str);
        string word; 
        while( s >> word)
            ans.push_back(word);
        
        reverse(ans.begin(), ans.end());
        string result = ""; 
        for(auto c: ans)
        {
            result += c; 
            result += " ";
        }
        cout << result; 
        int n = result.size(); 
        result = result.substr(0, n-1); 
        return result;
    }
};