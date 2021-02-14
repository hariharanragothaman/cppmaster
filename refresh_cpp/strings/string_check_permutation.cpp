#include "../../headers.h"

int main()
{
    string temp1 = "god";
    string temp2 = "dog";
    bool isPermutation = std::is_permutation(temp1.begin(), temp1.end(), temp2.begin());
    cout << "Are they permutations of each other?? " << isPermutation << endl;
    return 0;
}