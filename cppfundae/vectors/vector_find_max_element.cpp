#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> output = {1, 2, 3, 4, 7, 9, 8};
    int max_value;
    max_value = *max_element(output.begin(), output.end());
    cout << max_value;
}