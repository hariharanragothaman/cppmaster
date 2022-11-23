#include "../debug.h"
#include <algorithm>

int main()
{
    vector<int> A = {1, 2 ,3 ,4 ,5};
    auto lambda = [] (int i) { return i > 4; };
    int count = count_if(A.begin(), A.end(), lambda);
    cout << "The count is: " << count << endl;
    return 0;
}
