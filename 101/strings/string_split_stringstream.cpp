#include "../../headers.h"

// Basically this the equivalent of a str.split('delim') in python.

int countwords(string name)
{
    // Getting the I/P string
    // string name;
    // getline(cin, name);

    // Setting a stream, and adding the I/P to the stream
    stringstream ss(name);
    string word;

    debug(name);
    int cnt = 0;

    while(getline(ss, word, ' '))
    {
       cnt++;
    }
    cout << cnt << endl;
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
