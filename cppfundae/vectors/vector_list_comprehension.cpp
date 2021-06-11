#include "../../headers.h"

int main()
{
    vector<int> temp = {1, 2, 3, 4, 5};
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    cout << " Before" << endl;
    for_each(temp.begin(), temp.end(), lambda_print);

    // This is the list comprehension equivalent
    auto lambda_increment = [](auto &n) {n++;};
    for_each(temp.begin(), temp.end(), lambda_increment);

    // Making it print again - after increment
    cout << "After" << endl;
    for_each(temp.begin(), temp.end(), lambda_print);

    /*
     *  So like list comprehensions in python
     *  new = [c+1 for c in arr]
     */
    return 0;

}