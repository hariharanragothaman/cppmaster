//
// Created by Hariharan Ragothaman on 6/16/21.
//


/*
 *  @brief: const_cast allows to remove or add the const or volatile property from a variable.'
 *          const_cast is perhaps the most rarely cast operator because it's undefined behavior to
 *              remove const (or) volatile from a variable if its declared as volatile or const
 */

#include "../../headers.h"

#include <typeinfo>

int main (){
    std::cout << std::endl;
    int i{2011};
    const int* constI = const_cast<const int*>(&i); // A const int pointer for an int
    int* nonConstI = const_cast<int*>(constI); // Casting to an int pointer
    *nonConstI = 9000;

    std::cout << "i: " << i << std::endl;

    std::cout << std::endl;

    std::cout << "typeid(constI).name(): " << typeid(constI).name() << std::endl;
    std::cout << "typeid(nonConstI).name(): " << typeid(nonConstI).name() << std::endl;

    std::cout << std::endl;


    return 0;
}

