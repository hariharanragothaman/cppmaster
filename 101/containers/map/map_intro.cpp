#include "../../headers.h"

/*
 * Note: map and set are almost always stored as red-black trees.
 * map and set are sorted by default.
*/


/*
 *  Importance of operators ++ and - | We need to discuss that
 *
 */

int main()
{
    map<string, int> M;
    M["Top"] = 1;
    M["Coder"] = 2;
    M["SRM"] = 10;

    int x = M["Top"] + M["Coder"];
    if(present(M, "SRM"))
    {
        cout << "Hello" << endl;
        cout << x << endl;
    }

    for(auto&it : M)
    {
        cout << it.first << " " << it.second << endl;
    }

    set <int> S;
    S.insert(42);
    S.insert(7);
    S.insert(21);

    for(auto&c: S) cout << c << " " << endl;

    set<int>::iterator it = S.find(42);
    set<int>::iterator it1 = it;
    set<int>::iterator it2 = it;

    // Changing the iterator
    it1--;
    it2++;

    int a = *it1;
    int b = *it2;

    cout << "The value of a is:" << a << endl;
    cout << "The value of b is:" << b << endl;

    return 0;
}