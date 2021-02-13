#include "../../headers.h"

// Check if any_of() the sastisfies the condition
/* any_of takes 3 arguments, 2 iterators and a predicate
 * the lambda function here is the predicate */

int main()
{
    vector<int> boxes = {5, 3, 7, 9, 4};
    auto lambda = [](int i) { return i > 8;};
    bool greaterThanEight = any_of(boxes.begin(), boxes.end(), lambda);
    cout << "The value of the flag is:" << greaterThanEight;

}