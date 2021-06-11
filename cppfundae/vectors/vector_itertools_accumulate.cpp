/* Equivalent of itertools.accumulate in C++ */

#include <iostream>
#include <functional>
#include <numeric>
#include <vector>

using namespace std;

vector<int> runningSum_stl(vector<int>& nums)
{
    partial_sum(nums.begin(), nums.end(), nums.begin());
    return nums;
}

vector<int> runningProduct(vector<int>& nums)
{
    partial_sum(nums.begin(), nums.end(),nums.begin(), std::multiplies<int>() );
    return nums;
}

int main()
{
    return 0;
}