#include "../../headers.h"

/* <map> sorts by default by key
 * It doesn't maintain the insertion order like Counter() in python during insertion
 */

int main()
{
    string s = "codeforces";
    map<char, int> hmap;

    for(auto&it : s)
    {
        hmap[it] += 1;
    }

    // Printing the map
    for(auto it= hmap.begin(); it != hmap.end(); it++)
    {
        cout << it->first << it->second << endl;
    }

    return 0;
}