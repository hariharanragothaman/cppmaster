#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Buy and Sell Stock - Problem 1" << endl;
    vector<int> input = {7, 1, 5, 3, 6, 4};

    int min_price = INT_MAX; 
    int max_profit = 0;

    for(auto& elem: input)
    {
        if (elem < min_price)
            min_price = elem;
        
        if (max_profit < (elem - min_price))
            max_profit = elem - min_price;
    }
    cout <<"The maximum profit is: " << max_profit << endl;

    return 0;
}