#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    bool checkPalindrome(string s)
    {
        return s == string(s.rbegin(), s.rend()) ? true:false;
    }

    bool validPalindrome(string s)
    {
        int n = s.size();
        int left = 0;
        int right = n - 1;

        while(left < right)
        {
            if(s[left] != s[right])
            {
                string a = s.substr(0, left) + s.substr(left+1, n);   // without left
                string b = s.substr(0, right) + s.substr(right+1, n);  // without right
                return checkPalindrome(a) || checkPalindrome(b);
            }

            left += 1;
            right -= 1;
        }

        return true;

    }
};