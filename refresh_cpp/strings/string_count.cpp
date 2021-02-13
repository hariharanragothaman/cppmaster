#include "../../headers.h"

int main()
{
    string s = "leetcode";
    int e_count = count(s.begin(), s.end(), 'e');
    cout << "The number of times e occurs " << e_count << endl;
    return 0;
}