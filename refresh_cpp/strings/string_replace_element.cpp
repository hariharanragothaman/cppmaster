#include "../../headers.h"

// Note - This can also be done using for_each by implementing a custom lambda

int main()
{
    string temp = "Hello World";
    replace(temp.begin(), temp.end(), 'l', 'q');
    for(auto&it : temp)
        cout << it << endl;
    return 0;
}