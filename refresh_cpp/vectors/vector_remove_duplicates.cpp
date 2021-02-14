/*
 *  Given a vector (range) remove duplicates
 */

#include "../../headers.h"


int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 5};
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(nums.begin(), nums.end(), lambda_print);
}
