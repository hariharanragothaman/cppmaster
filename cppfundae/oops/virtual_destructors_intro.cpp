//
// Created by Hariharan Ragothaman on 6/16/21.
//

#include "../../headers.h"

class Base
{
public:
    virtual ~Base() // When it's virtual
    //~Base()   // When it's not virtual
    {
        cout << "Calling destructor for ~Base()" << endl;
    }
};


class Derived: public Base
{
private:
    int* m_array;

public:
    Derived(int length)
    :m_array {new int[length]}
    {}

    ~Derived()
    {
        cout << "Calling destructor for ~Derived()" << endl;
        delete[] m_array;
    }
};

int main()
{
    Derived * derived {new Derived(5)};
    Base * base {derived};
    delete base;
    return 0;
}