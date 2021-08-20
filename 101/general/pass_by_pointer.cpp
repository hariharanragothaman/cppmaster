#include "../../headers.h"

/*
 *  The various drawback of pass by pointer are:
 *  1. What if the data you are pointing to gets deleted by another thread?
 *      so you need mutexes here.
 *  2. Null pointer deferencing check needs to be enabled.
 *  3. Things stored in the heap (dynamic memory or free store)
 *     So who is responsible for deleting foo?
 */

class Foo
{
public:
    int data[100];
};

void PassbyPointer(Foo *f, int n)
{
    if(f == nullptr) return;
    //* Do something *f and n
    cout << f->data << endl;
}

int main()
{
    Foo f;  // Here is foo allocated to the heap
    int i = 0;
    PassbyPointer(&foo, i);
    return 0;
}