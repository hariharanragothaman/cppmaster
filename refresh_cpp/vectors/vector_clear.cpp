#include "../../headers.h"

void display(vector<int>& nums)
{
    for(auto it: nums)
        cout << it << endl;
}

int main()
{
    vector<int> input = {1, 2, 3, 4, 5};
    display(input);
    // Erases all the elements in the array
    input.clear();
    display(input);
}