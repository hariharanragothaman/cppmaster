//
// Created by Hariharan Ragothaman on 12/11/21.
//

#include "bits/stdc++.h"
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        int pivot = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[pivot] = nums[i];
                pivot++;
            }
        }


        for(int i=pivot; i<nums.size(); i++)
            nums[i] = 0;

    }
};