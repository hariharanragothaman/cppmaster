#include "../../headers.h"

int main()
{
    vector<char> arr = {'a', 'g', 'd', 'c', 'e', 'b', 'f'};
    unordered_map<char, int> hmap;
    int idx = 0;
    for(auto& elem: arr)
    {
        hmap[elem] = idx++;
    }

    cout << "Sorting the hashmap by key by using map\n";
    map<char, int> ordered(hmap.begin(), hmap.end());
    for(auto it = ordered.begin(); it != ordered.end(); ++it)
    {
        cout << "Key: " << it->first << " Value: " << it->second <<endl;
    }

    return 0;
}