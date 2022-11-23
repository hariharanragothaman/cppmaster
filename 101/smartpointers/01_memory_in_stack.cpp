/**
 * File              : memory_in_stack.cpp
 * Author            : cppygod
 * Date              : 08.03.2022
 * Last Modified Date: 08.03.2022
 * Last Modified By  : cppygod
 */


#include "bits/stdc++.h"
using namespace std;

/*
 * Objects allocated on the stack are automatically destroyed when they go out of scope.
 */


int f(int a)
{
    if (a > 0)
    {
        std::string s = "a positive number";
        std::cout << s << '\n';
    }
    return a;
}


int main()
{
	f(5);

}
