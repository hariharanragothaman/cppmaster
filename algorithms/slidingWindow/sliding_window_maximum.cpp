//
// Created by Hariharan Ragothaman on 11/14/21.
//
/*
 *  References
 *  Problem: https://leetcode.com/problems/sliding-window-maximum/
 *  https://usaco.guide/gold/sliding-window?lang=cpp#problem-cses-1076
 *
 */

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        multiset<int> s;
        vector<int> ret;

        // using the multi-set as the datastructure here..
        // adding the first k elements
        for(int i = 0; i < k; i++)
            s.insert(nums[i]);

        for(int i = k; i < nums.size(); i++)
        {
            ret.push_back(*s.rbegin()); // Adding the last element in the result
            s.erase(s.find(nums[i-k])); // erasing the first element in the set
            s.insert(nums[i]);          // inserting the new element in the set
        }

        ret.push_back(*s.rbegin());
        return ret;
    }
};