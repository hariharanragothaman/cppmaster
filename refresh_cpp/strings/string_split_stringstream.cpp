#include "../../headers.h"

// Basically this the equivalent of a str.split('delim') in python.

int countwords(string str)
{
    stringstream s(str);
    string word;

    int count = 0;
    // Line below this #12 is the key part
    while(s >> word)
    {
        count++;
    }

    return count;
}

// Now this is the equivalent of a counter in python
void printFrequency(string str)
{
    unordered_map<string, int> hashmap;
    stringstream ss(str);
    string word;

    while (ss >> word)
    {
        hashmap[word]++;
    }

    for (auto it = hashmap.begin(); it !=hashmap.end(); it++)
    {
        cout << it->first << "->" << it->second << "\n";
    }
    
}



int main()
{
    string s = "leetcode for life";
    cout <<"The number of words is:" << countwords(s) << endl;
    printFrequency(s);
    return 0;
}