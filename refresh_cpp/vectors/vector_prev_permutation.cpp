#include "../../headers.h"

int main()
{
    vector<int> temp1 {1, 3, 2};
    prev_permutation(temp1.begin(), temp1.end());
    auto lambda_print = [](auto& i) { cout << "Value: " << i << endl;};
    for_each(temp1.begin(), temp1.end(), lambda_print);
    return 0;
}