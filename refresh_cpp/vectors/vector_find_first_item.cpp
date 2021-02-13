#include "../../headers.h"

int main()
{
    vector<int> temp {5, 3, 7, 9, 4};

    // First item that satisfies the condition
    auto lambda = [](int i) {return i > 7;};
    vector<int>::iterator it = find_if(temp.begin(), temp.end(), lambda);
    int first_element_satisfying_condition = *it;
    cout << "The result is:" << first_element_satisfying_condition << endl;

    // First item that doesn't satisfy the condition
    vector<int>::iterator it2 = find_if_not(temp.begin(), temp.end() ,lambda);
    int first_element_not_satisfying_condition = *it2;
    cout << "The value is:" << first_element_not_satisfying_condition << endl;

    return 0;
}