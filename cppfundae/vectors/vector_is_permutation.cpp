#include "../../headers.h"

int main()
{
    vector<int> temp1 {'g', 'o', 'd'};
    vector<int> temp2 {'d', 'o', 'g'};
    bool isPermutation = std::is_permutation(temp1.begin(), temp1.end(), temp2.begin());
    cout << "Are they permutations of each other?? " << isPermutation << endl;
    return 0;
}