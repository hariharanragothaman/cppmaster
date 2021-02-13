#include "../../headers.h"

int main()
{
    vector<int> vinput = {1, 2, 3, 4};
    // This is probably the closest enumerate
    int index = 0;
    for(auto& elem : vinput)
    {
        cout << elem << "\t" <<index << "\n";
        index += 1;
    }
    return 0;
}