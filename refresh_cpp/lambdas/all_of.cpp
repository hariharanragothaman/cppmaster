#include "../../headers.h"

// Check if all_of() the sastisfies the condition
/* any_of takes 3 arguments, 2 iterators and a predicate
 * the lambda function here is the predicate */

int main()
{
    vector<int> boxes = {5, 3, 7, 9, 4};
    auto lambda = [](int i) { return i > 1;};
    bool greaterThanOne = all_of(boxes.begin(), boxes.end(), lambda);
    cout << "The value of the flag is:" << greaterThanOne;
}