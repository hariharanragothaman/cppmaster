#include "../../headers.h"


#include "../../headers.h"

// Modify the functor here to for reverse=True functionality
bool sort_by_value(const pair<char, int> &a, const pair<char, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    vector<char> arr = {'a', 'g', 'd', 'c', 'e', 'b', 'f', 'a', 'c', 'e'};
    unordered_map<char, int> hmap;
    for(auto& elem: arr)
    {
        hmap[elem] += 1;
    }

    vector<pair<char, int>> vec;
    for(auto& elem: hmap)
    {
        vec.push_back(make_pair(elem.first, elem.second));
    }
    sort(vec.begin(), vec.end(), sort_by_value);

    cout << "Printing pairs after sorting by value" << endl;
    for(auto& it: vec)
    {
        cout << it.first << it.second << endl;
    }

}