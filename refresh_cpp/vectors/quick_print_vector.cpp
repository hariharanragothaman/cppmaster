#include "../../headers.h"

/* Write a quick lambda function to print the container */

int main()
{
    vector<int> temp = {1, 2, 3, 4, 5};
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(temp.begin(), temp.end(), lambda_print);
}