/*
 * Remove a specific value from an array
 */

int removeElement(vector<int>& nums, int val)
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}
