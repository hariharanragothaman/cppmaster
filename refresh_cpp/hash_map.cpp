#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

/*
Key Points to remember:
1. Remember unordered_map faster than map since it doesn't care about order

Operations to be done:
1. Putting values into hashmap
2. Deleting stuff from hashmap
3. Sorting the hashmap by key
4. Sorting the hashmap by value
5. Sorting the hashmap by key and then value - viceversa.
6. Merge 2 hashmaps
7. Print stuff from hashmap
8. Checking if a key exists in a hashmap
*/

bool sort_by_value(const pair<char, int> &a, const pair<char, int> &b)
{
    return (a.second < b.second);
}



int main()
{
    cout << "Hashmap Reference" << endl;
    vector<char> arr = {'a', 'g', 'd', 'c', 'e', 'b', 'f'};
    
    // 1. Putting stuff into the hashmap
    unordered_map<char, int> hmap;
    int idx = 0;
    for(auto& elem: arr)
    {
        hmap[elem] = idx++;
    }

    // Checking if the hashmap contains a specific key
    if ( hmap.find('e') != hmap.end()  )
    {
        cout << "Yaay the key exists\n";
    }

    // Sorting the hashmap by key
    // One of the easiest ways to put the unordered_map into a map
    cout << "Sorting the hashmap by key \n";
    map<char, int> ordered(hmap.begin(), hmap.end());
    for(auto it = ordered.begin(); it != ordered.end(); ++it)
    {
        cout << "Key: " << it->first << " Value: " << it->second <<endl;
    }

    // Sorting the hashmap by value
    /* 1. There are 2 ways, one to use a vector - and add tuples of (key, value) into it, and sort
       2. Second, use a multimap, and make key, value as value, key
    */

   cout<<"Sorting the hashmap by value \n";
   vector<pair<char, int>> vec; 
   for(auto& elem: ordered)
   {
       vec.push_back(make_pair(elem.first, elem.second));
   }
   sort(vec.begin(), vec.end(), sort_by_value);

   for(int i = 0; i < vec.size(); i++)
   {
       cout <<"Key: " << vec[i].first << " Value: " << vec[i].second <<endl;
   }
}