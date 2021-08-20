/*
 *  Given a vector (range) remove duplicates
 */

#include "../../headers.h"
/*
 *
 * It gives us a simple way to get rid of duplicates in vector, and sort it:


    1
    2
    3
    4
    vector < int > v;
    // …
    set < int > s(all(v));
    vector < int > v2(all(s));

    Here ‘v2′ will contain the same elements as ‘v’ but sorted in ascending order and with duplicates removed.

    Any comparable elements can be stored in set. This will be described later.
 */

int main()
{
    vector<int> nums = {1, 2, 3, 4, 4, 5};
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(nums.begin(), nums.end(), lambda_print);
}
