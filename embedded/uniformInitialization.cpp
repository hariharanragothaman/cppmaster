//
// Created by Hariharan Ragothaman on 8/28/21.
//

#include "bits/stdc++.h"
using namespace std;


int main()
{
    // Direct Initialization
    string str{"My String"};

    // Copy Initialization
    string str2 = {"My String"};

    /* Initialization with {} prohibits narrow conversion */
    // This talks about implicit conversion of arithmetic values - which is extremely dangerous

    char c1(999);
    char c2 = 999;

    cout << "The value of c1 is:" << c1 << endl;
    cout << "The value of c2 is:" << c2 << endl;

    int i1(3.14);
    int i2= 3.14;
    std::cout << "i1: " << i1 << std::endl;
    std::cout << "i2: " << i2 << std::endl;


    /* Let's now try {} initialization */
//    char c3{999};
//    char c4 = {999};
//    std::cout << "c3: " << c3 << std::endl;
//    std::cout << "c4: " << c4 << std::endl;


}
