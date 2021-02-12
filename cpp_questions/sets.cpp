#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int> s;
    int queries;
    cin >> queries;

    int i = 0;
    int c, value;
    set<int>::iterator it;
    
    while (i < queries)
    {
        cin >> c >> value;
        if (c == 1)
            s.insert(value);
        else if (c == 2) 
            s.erase(value);
        else 
        {
            it = s.find(value);
            if(it != s.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        i++;
    }

    return 0;
}



