//
// Created by Hariharan Ragothaman on 10/12/21.
//

/*
 * Deleting a derived class object using a pointer of base class type that has a non-virtual destructor results in undefined behavior.
 * To correct this situation, the base class should be defined with a virtual destructor.
 * This is also one of the fundae of secure coding.
 */

/*
 *  Some other general thoughts
 *  Guideline #4: A base class destructor should be either public and virtual, or protected and nonvirtual
 *  if you delete polymorphically without a virtual destructor, you summon the dreaded specter of "undefined behavior,"
 *  a specter I personally would rather not meet in even a moderately well-lit alley, thank you very much
 */

#include "bits/stdc++.h"
using namespace std;

class Base
{
public:
    Base() { cout << "Constructing Base " << endl; }
    // If the base class destructor is not virtual - "Destructor Derived" will not be cleaned cleanly
    virtual ~Base() { cout << "Destructing Base" << endl; }
};

class Derived: public Base
{
public:
    Derived() { cout << "Constructing Derived " << endl; }
    ~Derived() { cout << "Destructing Derived " << endl; }
};

int main()
{
    Derived *d = new Derived();
    Base *b = d;
    delete b; // Here's the problem!
    return 0;
}
