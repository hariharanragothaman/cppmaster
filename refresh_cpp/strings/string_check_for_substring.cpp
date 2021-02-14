/*
 * Check if a range contains a certain sequence.
 *  Does 'this' contains 'is'
 */

#include "../../headers.h"

int main()
{
    string temp1 = "this";
    string temp2 = "is";
    string::iterator it = search(temp1.begin(), temp1.end(), temp2.begin(), temp2.end());
    int index = it - temp1.begin();
    cout << "Starting index of t2 in t1: " << index << endl;
    return 0;
}