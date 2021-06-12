#include "../../headers.h"

/*
 *  Some basic intro. Implicit vs Explicit casts
 *  C-casts, dynamic_cast, static_cast, const_cast and reinterpret_cast
 *
 *  Explicit cast operator want the the "type" that we want to cast our data in.
 */

void why_Cstyle_is_bad()
{
    double d = 2;
    auto p  =(long*)&d;
    auto q  = (long long*)&d;
    cout << d << ' ' << *p << *q << endl;
}

int main() {

    double myDouble{5.5};
    int i = static_cast<int>(myDouble);
    cout << "The value of i is:" << i << endl;

    // C-style casts - Avoid this bad style

    /*
     *  Why we need to avoid C-style casting
     *  C-style casts - start with - static_cast --> const_cast and then finally performs a reinterpret_cast
     */
    int j = (int)myDouble;
    cout << "The value of j is:" << j << endl;

    why_Cstyle_is_bad();
}