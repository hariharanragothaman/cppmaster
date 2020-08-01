// Convert vector into a string - similar to join in python

#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
using namespace std;
/* Remember this - begin() and end() are used for iterators
   front() and back() are used for - looking up
*/

int main()
{
    cout << "Cool things with string\n";
    string s = "Leetcode for life";

    // Method to cut a string
    string cut = s.substr(1,10);
    cout <<"The cut string is:  " << cut << endl;

    // Printing out the character at end
    cout << "The char at end is: " << s.back() << endl;

    // Printing out the character at the start 
    cout << "The char at the beginning is: " << s.front() << endl;
}