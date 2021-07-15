/*
 * Remove a specific value from an array
 */
#include "../../headers.h"

int removeElement(vector<int>& nums, int val)
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}

int main()
{
    vector<int> nums {1, 2, 3, 4, 5, 0};
    removeElement(nums, 0);
    auto lambda_print = [](auto& n) {cout << "Value : " << n << endl;};
    for_each(nums.begin(), nums.end(), lambda_print);
    return 0;
}