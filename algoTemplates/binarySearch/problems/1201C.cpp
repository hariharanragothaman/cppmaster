//
// Created by Hariharan Ragothaman on 11/14/21.
//
//https://codeforces.com/contest/1201/problem/C
#include "bits/stdc++.h"
using namespace std;
#define ENABLEFASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

#define LOCAL
#ifdef LOCAL
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
// Submit to Online Judge
#endif

bool check(long long int& pivot, vector<long long int>& arr, long long int& n, long long int& k)
{
    long long int moves = 0;
    for(int i=n/2; i<n; i++)
    {
        if(pivot - arr[i] > 0)
        {
            moves += pivot - arr[i];
        }
        if(moves > k)
            return false;
    }
    if(moves > k)
        return false;
    else
        return true;
}

int main()
{
    ENABLEFASTIO();
    long long int n, k;
    cin >> n >> k;
    vector<long long int> arr(n, 0);
    for(int i=0; i<n; i++) cin >> arr[i];
    sort(arr.begin(), arr.end());

    long long int low = 1;
    long long int high = 2e9;

    low--;
    // Enter binary search routine...
    while(low < high)
    {
        long long int pivot = (low + high + 1) >> 1;
        if(check(pivot, arr, n, k))
        {
            low = pivot;
        }
        else
        {
            high = pivot -1;
        }
    }
    cout << low << endl;
    return 0;
}