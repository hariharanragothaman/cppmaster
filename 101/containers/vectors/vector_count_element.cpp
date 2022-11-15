#include "../../headers.h"

int main()
{
    vector<int> temp = {1, 2, 3, 3, 4 , 4, 5};
    int three_count = count(temp.begin(), temp.end(), 3);
    cout << "Three occurs : " << three_count << endl;
    return 0;
}