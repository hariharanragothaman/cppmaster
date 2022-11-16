#include "../../headers.h"

int main()
{
    auto myStr = "Hello World";
    auto myDouble = 3.14;
    auto myInt = 3;
    cout << myStr << myDouble << myInt << endl;

    /*
     *  Key features are: - techniques for automatic function template argument functions are used
     *  helpful in complicated template expressions
     *  enables us to work with unknown types
     */

    // Example for lambda function
    auto func=[]{return 5;};
    auto myInt2{2011};
    cout << "The value of myInt2 is:" << myInt2 << endl;
    auto myInt3 = {2011}; // Here this is an initializer list
    for(auto it: myInt3)
    {
        cout << it;
    }

    return 0;
}