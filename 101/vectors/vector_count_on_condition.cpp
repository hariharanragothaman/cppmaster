#include "../../headers.h"

int main()
{
    vector<int> temp = {1, 2 ,3 ,4 ,5};
    auto lambda = [] (int i) { return i > 4; };
    int count = count_if(temp.begin(), temp.end(), lambda);
    cout << "The count is: " << count << endl;
    return 0;
}