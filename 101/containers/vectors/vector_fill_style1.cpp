#include "../../headers.h"
int main()
{
    vector<bool> output(5);
    fill(output.begin(), output.end(), false);

    // Printing the filled out array
    for(auto it: output)
    {
        cout << it;
    }
}