/* Removing a number from a vector in-place */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};