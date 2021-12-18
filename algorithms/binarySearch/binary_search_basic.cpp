class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n = nums.size(); 
        int left = 0; 
        int right = n-1; 
        
        while(left <= right)
        {
            int pivot = (left + right)  >> 1;
            if(nums[pivot] == target)
                return pivot; 
            else if(nums[pivot] < target)
                left = pivot + 1; 
            else if (nums[pivot] > target)
                right = pivot - 1; 
            
        }
        
        return -1; 
    }
};