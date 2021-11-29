//
// Created by Hariharan Ragothaman on 11/14/21.
//
//https://codeforces.com/contest/1201/problem/C
#include "bits/stdc++.h"
using namespace std;
#define ENABLEFASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
//#define LOCAL
#ifdef LOCAL
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
// Submit to Online Judge
#endif

bool check(int pivot, vector<int> arr, vector<int> nums)
{
    vector<pair<int, int>> intervals;
    for(int i=0; i<nums.size(); i++)
    {
        intervals.push_back(make_pair(nums[i]-pivot, nums[i]+pivot));
    }

    // Displaying the intervals
    for(auto c: intervals)
        cout << c.first << " " << c.second << endl;

    // Check if all numbers in nums[i] are in this interval....
    bool flag;
    for(int i=0; i<arr.size(); i++)
    {
        cout << "The candidate is:" << arr[i] << endl;
        for (auto c:intervals)
        {
            int start = c.first;
            int end = c.second;
            if (arr[i] >= c.first && arr[i] <= c.second)
                flag = true;
            else
                flag = false;
        }
        if(flag == false)
            return false;
    }

    return true;
}

int32_t main()
{
    ENABLEFASTIO();
    int n, m;
    cin >> n >> m;
    vector<int> arr(n, 0);
    vector<int> nums(m, 0);
    for(int i=0; i<n; i++) cin >> arr[i];
    for(int i=0; i<m; i++) cin >> nums[i];

    int low = 1;
    int high = 2e9;

    sort(nums.begin(), nums.end());

    while(low < high)
    {
        int pivot = (low + high) >> 1;
        cout << "The pivot is:" << pivot << endl;
        if(check(pivot, arr, nums))
        {
            high = pivot;
        }
        else
        {
            low = pivot + 1;
        }
    }
    cout << "The low is: " << low << endl;
    cout << "The high is:" << high << endl;
    cout << low << endl;
    return 0;
}
