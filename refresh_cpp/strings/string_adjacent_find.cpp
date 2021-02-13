#include "../../headers.h"

/*
 *  Something to remember here is that:
 *  all these functions - take iterators as I/P's.
 *  But iterators are more like pointers and they v
 *  can be incremented or decremented
 */

int main()
{
    string s = "accenllt";
    string::iterator it = adjacent_find(s.begin()+2,s.end());
    cout << "The result is: " << it - s.begin() << endl;
    return 0;
}