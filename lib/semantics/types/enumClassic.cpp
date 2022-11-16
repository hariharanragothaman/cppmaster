/*
 *  How enumerations are used to define custom data-type containing integer constants
 *      1. Drawbacks of enumerations in classical C++
 *      2. Strongly typed enumerations
 */

// Enumerations allows to define custom-data types with integer constants - like a grouping of macros.
// These integer constants are also called enumerators

/*
 *  Drawbacks of enums:
 *   1. Enumerators implicitly convert to int
 *   2. Enumerators in the enclosing scope
 *   3. Type of the enumeration cannot be specified
 *       So the enumerations cannot be forward declared - since the type is unknown
 */

#include "../../headers.h"

// enumClassic.cpp

int main()
{

    enum Colour {red=0, green=2, blue};
    cout << "red:" << red << endl;
    cout <<"green:" << green << endl;
    cout <<"blue:" << blue << endl;

    //int red = 5; // ERROR
}