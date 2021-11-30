//
// Created by Hariharan Ragothaman on 11/30/21.
//

#include "bits/stdc++.h"
using namespace std;


/*
 * In line 21, myData is an lvalue reference since it has a name and address.
 * MyData() is an rvalue reference since it does not have a name or an address.
 *  It is just a call to the default constructor of the struct MyData.
 *  std::move(myData) creates an rvalue reference as well since we can neither determine the destination address of myData,
 *  nor the destination variable’s name.
 *
 *
 */
struct MyData {};

std::string function( const MyData & ) {
    return "lvalue reference";
}

std::string function( MyData && ) {
    return "rvalue reference";
}

int main(){

    std::cout << std::endl;

    MyData myData;

    std::cout << "function(myData): " << function(myData) << std::endl;
    std::cout << "function(MyData()): " << function(MyData()) << std::endl;
    std::cout << "function(std::move(myData)): " << function(std::move(myData)) << std::endl;

    std::cout << std::endl;

}