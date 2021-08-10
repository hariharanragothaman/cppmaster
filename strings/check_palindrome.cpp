#include "../headers.h"

bool checkPalindrome(string s)
{
    return s == string(s.rbegin(), s.rend()) ? true:false;
}

int main()
{
    string s = "malayalam";
    bool result = checkPalindrome(s);
    cout << result << endl;
}