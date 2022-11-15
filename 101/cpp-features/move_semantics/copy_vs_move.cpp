#include "bits/stdc++.h"
using namespace std;

/*
 *   1. If we create a new object based on an existing one, the copy semantic will copy the elements of the existing resource,
 *      whereas the move semantic will move the elements of the resource.
 *   2. What are the additional consequences?
 *      With the copy semantic, it is possible that a std::bad_alloc will be thrown because our program is out of memory.
 *      The resource of the move operation is in a “valid but unspecified state” afterward.
 */

/*
 *  Key difference:
 *  After copy both hold a value of the copy.
 *  After move, only str2 has the copy, str1 is empty.
 *  When we move an object, we transfer ownership. By moving, we give the object to someone else.
 */


/*
 *  Some other key pointers
 *  A class supports copy semantics if the class has a copy constructor and a copy assignment operator.
 *  A class supports copy semantics if the class has a copy constructor and a copy assignment operator.
 *  If a class has a copy constructor, it should also have a copy assignment operator.
 *  The same holds true for the move constructor and move assignment operator.
 */

int main()
{
    string str1 = "ABCDEF";
    cout << "The value of str1 is:" << str1 << endl;
    string str2 = move(str1);
    cout << "The value of str2 is:" << str2 << endl;
    cout << "The value of str1 (After/) is:" << str1 << endl;
}