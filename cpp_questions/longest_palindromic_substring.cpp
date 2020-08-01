#include <iostream>
#include <string>
#include <string_view>
using namespace std;

bool isPalindrome(string v)
{
    int low = 0;
    int high = v.length() - 1;

    while (low < high)
    {
        if (v[low] != v[high])
        {
            return false;
        }
        low++; 
        high--;
    }
    return true;
}



string longestPalindrome(string s)
{
    string output = "";
    if (s.empty())
    {
        return "";
    }
    for(int i= 0; i < s.length(); i++)
    {
        for(int j=s.length()-1; j > i; j--)
        {
            if (output.length() > j-i)
            {
                break;
            }

            string b = s.substr(i,j);
            if (isPalindrome(b))
            {
                output = b;
                break;

            }
            

        }
    }
    return output;
}

int main()
{
    string s = "cbbd";
    string result; 
    cout << s << endl;
    result = longestPalindrome(s);
    cout << "The longest palindrome is: " << result << endl;

}