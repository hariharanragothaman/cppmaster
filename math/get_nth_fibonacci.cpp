#include "bits/stdc++.h"
using namespace std; 

pair<int, int> fibnth(int n)
{
    if(n==0)
    {
        return {0, 1};
    }

    auto p = fibnth(n>>1);
    int c = p.first * (2 * p.second - p.first);
    int d = p.first * p.first + p.second * p.second;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}


int main()
{
    // 0 1 1 2 3 5 8
    int n = 5;
    pair<int, int> ans = fibnth(n);
    cout << ans.first << " " << ans.second << endl;
    return 0;
}