//
// Created by Hariharan Ragothaman on 6/17/21.
//

/*
 *    1. allows us to convert pointer of a particular type to a pointer of any other type, regardless
 *       of whether the types are related or not.
 *    2. Allows conversion b/w pointer and integral
 *    3. It guarantees if pointer is cast into another type, casting it back would return the original value.
 *    4. It's not recommended - as it does not take any safety measures before converting b/w types.
 *       This can result in faulty or accidental conversions
 */


#include "../../headers.h"

int main(){

    double * myDouble = new double(3.14);
    std::cout << *myDouble << std::endl;

    void * myVoid = reinterpret_cast<void*>(myDouble);

    double * myDouble1 = reinterpret_cast<double*>(myVoid); // Original value retrieved
    std::cout << *myDouble1 << std::endl;

}