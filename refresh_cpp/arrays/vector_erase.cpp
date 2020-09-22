#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int length;
    cin >> length;

    int i = 0;
    int value;
    vector<int> v;
    while(i<length)
    {
        cin >> value;
        v.push_back(value);
        i++;
    }
    int a;
    cin >> a;
    v.erase(v.begin()+(a-1));

    int low, high;
    cin >> low >> high;
    low--;
    high--;
    v.erase(v.begin()+low, v.begin()+high);

    cout << v.size() << endl;
    for(auto it: v)
    {
        cout << it << " ";
    }
    cout << endl;

    return 0;
}
