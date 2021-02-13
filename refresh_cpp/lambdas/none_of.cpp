#include "../../headers.h"

// Check if none_of() the sastisfies the condition
/* none_of takes 3 arguments, 2 iterators and a predicate
 * the lambda function here is the predicate */

int main()
{
    vector<int> boxes = {5, 3, 7, 9, 4};
    auto lambda = [](int i) { return i > 1;};
    bool greaterThanTen = none_of(boxes.begin(), boxes.end(), lambda);
    cout << "The value of the flag is:" << greaterThanTen;
}