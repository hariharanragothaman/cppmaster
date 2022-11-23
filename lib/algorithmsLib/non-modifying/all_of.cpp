#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// Check if all_of() the sastisfies the condition
/* any_of takes 3 arguments, 2 iterators and a predicate
 * the lambda function here is the predicate */

int main()
{
    vector<int> A = {5, 3, 7, 9, 4};
    auto lambda = [](int i) { return i > 1;};
    bool greaterThanOne = all_of(A.begin(), A.end(), lambda);
    cout << "The value of the flag is:" << greaterThanOne;
}
