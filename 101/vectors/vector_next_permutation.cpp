#include "../../headers.h"

int main()
{
    vector<int> temp1 {1, 2, 3};
    next_permutation(temp1.begin(), temp1.end());

    auto lambda_print = [](auto& i) { cout << "Value: " << i << endl;};
    for_each(temp1.begin(), temp1.end(), lambda_print);
    return 0;
}