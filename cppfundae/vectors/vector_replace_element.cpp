#include "../../headers.h"

void custom_replace_using_lambda()
{
    vector<int> temp = {1, 2, 3, 4, 5};
    auto lambda_print = [](auto& n) { cout << "Value:" << '\t' << n << endl; };
    cout << " Before" << endl;
    for_each(temp.begin(), temp.end(), lambda_print);

    // This is the list comprehension equivalent
    auto lambda_change = [](auto &n) { if(n==3) n=7;};
    for_each(temp.begin(), temp.end(), lambda_change);

    // Making it print again - after increment
    cout << "After" << endl;
    for_each(temp.begin(), temp.end(), lambda_print);
}

// - Using traditional replace

int main()
{
    vector<int> temp = {1, 2, 3, 4 ,5};
    replace(temp.begin(), temp.end(), 3, 7);
    for(auto&it : temp)
        cout << it << endl;
    return 0;
}