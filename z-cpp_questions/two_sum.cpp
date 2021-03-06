#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int> result;

    map<int, int> hmap;
    int idx = 0;

    for(auto& elem: nums)
    {
        hmap[elem] = idx++;
    }


    for(int i=0; i < nums.size(); i++)
    {
        if( hmap.count(target - nums[i]) > 0 and i != hmap[target-nums[i]])
        {
            result.push_back(i);
            result.push_back(hmap[target-nums[i]]);
            return result;
        }
    }

}

int main()
{
    cout << "Hello World\n";

    vector<int> nums = {2, 7, 11, 15};
    vector<int> result;
    
    int target = 9;
    result = twoSum(nums, target);

    int idx = 0;
    for(auto& elem: result)
    {
        cout << elem;
    }


}