#include "debug.h"
using namespace std;

int main()
{
    vector<int> A = {1, 2, 3, 4, 7, 9, 8};
    int max_value;
    max_value = *max_element(A.begin(), A.end());
    cout << max_value << endl;
    return 0;
}
