//
// Created by Hariharan Ragothaman on 12/7/21.
//

#include "bits/stdc++.h"
using namespace std;

/*
 *  Boyer - Moore Algorithm
 *
 * Whenever count equals 0, we effectively forget about everything in nums up to the current index and
 * consider the current number as the candidate for majority element.
 * It is not immediately obvious why we can get away with forgetting prefixes of nums - consider the following examples
 * (pipes are inserted to separate runs of nonzero count).
 * [7, 7, 5, 7, 5, 1 | 5, 7 | 5, 5, 7, 7 | 7, 7, 7, 7]
 */

int majorityElement(vector<int>& nums)
{
    // Boyer - Moore Implementation
    int count = 0;
    int candidate;
    for(auto c: nums)
    {
        if(count == 0)
            candidate = c;
        if(c == candidate)
            count += 1;
        else
            count -= 1;
    }

    return candidate;
}

