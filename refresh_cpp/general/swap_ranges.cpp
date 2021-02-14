#include "../../headers.h"

/*
 *  Given 2 vectors or 2 strings and if we want to swap them.
 */

int main()
{
    vector<int> temp1 = {1, 2, 3, 4};
    vector<int> temp2 = {5, 6, 7, 8};
    vector<int>::iterator it = swap_ranges(temp1.begin(), temp1.end(), temp2.begin());

    // Printing the 2 vectors after swap
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    for_each(temp1.begin(), temp1.end(), lambda_print);
    for_each(temp2.begin(), temp2.end(), lambda_print);

    return 0;
}