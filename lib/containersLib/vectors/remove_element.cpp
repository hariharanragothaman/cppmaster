/*
 * Remove a specific value from an array
 */
#include "debug.h"

int removeElement(vector<int>& nums, int val)
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}

int main()
{
    vector<int> A {1, 2, 3, 4, 5, 0};
    removeElement(A, 0);
    print(A)
    return 0;
}
