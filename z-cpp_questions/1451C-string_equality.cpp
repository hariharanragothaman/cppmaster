#include "../headers.h"

int solve()
{
    int n,k;
    cin>>n>>k;

    string a,b;
    cin>>a>>b;

    map<char, int> amap;
    map<char, int> bmap;

    for(auto&it : a)
        amap[it] += 1;

    for(auto&it : b)
        bmap[it] += 1;



    string s = "abcdefghijklmnopqrstuvwxyz";

    for(auto&it : s)
    {
        while (amap[it] > bmap[it])
        {
            amap[it] -= k;
            amap[char(it+1)] += k;
        }
    }
    /*
    for(auto it= amap.begin(); it != amap.end(); it++)
    {
        cout << it->first << it->second << endl;
    }

    for(auto it= amap.begin(); it != amap.end(); it++)
    {
        cout << it->first << it->second << endl;
    }
    */

    if(amap == bmap)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        solve();

    return 0;
}