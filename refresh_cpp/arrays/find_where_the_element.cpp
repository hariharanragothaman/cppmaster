#include <iostream>
#include <vector>
#include <algorithm>
using namespace  std;


int main()
{
    vector<int> temp = {1, 2, 3, 4};
    int value = 3;
    auto index = find(temp.begin(), temp.end(), value); // This is the iterator
    auto idx = distance(temp.begin(), index); // This is the actual index
    cout << "The index is: " << idx << endl;

    // Note if the value doesn't exist --> iterator points to temp.end()
}