//
// Created by Hariharan Ragothaman on 6/16/21.
//

/*
 *  1. static_cast is the simplest casting operator and is used in simple conversions
 *  2. It can only perform all the conversions that are well defined by the compiler
 *  3. For example a string to integer won't cast
 *  4. It allows bi-directional conversion between related data-types
 *      a. pointer types in class heirarchies
 *      b. integrals and floating point numbers
 *      c. integrals and enumerations
 *  5. static_cast cannot be used for polymorphic types
 *  6. This is performed during compile time
 *  7. Feeling - I think this will be highly used in CP
 *  8. In the classes world - this can be used to cast pointers belonging to the same class heirarchy
 */


#include "../../headers.h"

class Account{};
class BankAccount: public Account{};

enum Color{
    red,
    blue,
    green
};

int main(){

    std::cout << std::endl;

    Account * a = nullptr;
    BankAccount * b = nullptr;

    a = static_cast<Account*> (b);                         // upcast
    a = b;                                                 // upcast

    b = static_cast<BankAccount*>(a);                      // downcast

    int i{2};
    Color col = static_cast<Color>(i);
    std::cout << "i: "  << i << std::endl;
    std::cout << "col: " << col << std::endl;

    int i2= static_cast<int>(3.14);
    std::cout << "i2: " << i2 << std::endl;

    std::cout << std::endl;

}