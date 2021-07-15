#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> arr;
    int limit;
    cin >> limit;

    int value;
    int i = 0;
    while (i < limit)
    {
        cin >> value;
        arr.push_back(value);
        i += 1;
    }

    reverse(arr.begin(), arr.end());
    for(vector<int>::iterator it=arr.begin(); it!= arr.end(); it++)
    {
        cout << *it << ' ';
    }

    return 0;
}