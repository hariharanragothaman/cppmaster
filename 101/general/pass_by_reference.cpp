//
// Created by cppygod on 8/20/21.
//

#include "../../headers.h"

class Foo {
public:
    int data[100];
};
void PassByReference(Foo& f, int n){
    // Do something with f and n.
}


int main()
{
    int count = 0;
    int& count_ref = count;
    count++;
    count_ref++;

    // count is now 2
    // In simple temrs & to the left like int& - means passing by reference

    Foo foo;
    int i = 0;
    PassByReference(foo, i);

    return 0;
}