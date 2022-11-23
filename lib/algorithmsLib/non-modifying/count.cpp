#include "../debug.h"
#include <algorithm>

int main()
{
    vector<int> A = {1, 2, 3, 3, 4, 4, 5};
    int three_count = count(A.begin(), A.end(), 3);
    cout << "Three occurs : " << three_count << endl;
    return 0;
}
