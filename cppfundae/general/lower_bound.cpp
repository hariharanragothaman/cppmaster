#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size; 
    cin >> size;

    vector<int> v;
    int i = 0;
    int value;

    while (i<size)
    {
        cin >> value;
        v.push_back(value);
        i++;
    }

    sort(v.begin(), v.end());

    int queries;
    cin >> queries;

    vector<int>::iterator output;
    int search;
    while(queries > 0)
    {
        cin >> search;
        int index;
        output = lower_bound(v.begin(), v.end(), search);
        index = (output - v.begin());

        if (v[index] == search)
        {
            cout << "Yes" << " " << index + 1 << endl; 
        }
        else
        {
            cout << "No" << " " << index + 1 << endl;
        }


        queries --;
    }

    return 0;
}