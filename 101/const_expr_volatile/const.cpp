#include "bits/stdc++.h"
using namespace std;


int main()
{
    const int i = 0;
    i = 20; // Error cannot modify a constant variable

    // Pointers can also be const
    int g = 2011;
    int const* ip = &i;
    *ip = 2012;// This is going to give an error

    /*
     *  int const* ip = & i -- value pointed to is const (type const* / const type*)
     *  int* const p -- In this case, the pointer is constant (type* const)
     *                  cannot point to a different integer in it's lifetime
     *
     *  const int* const p = &i; -- both value and pointer are constant
     *  const int* const p, should be read from right to left.
     *  p is a constant pointer, * const points to an int that is const.
     *  We can modify i directly, but we can’t modify it through p.
     */


}