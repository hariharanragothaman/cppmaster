/*
Function overriding makes it impossible to dispatch virtual functions statically (at compile time)
Dispatching of virtual functions needs to happen at runtime
The virtual table method is a popular implementation of dynamic dispatch
For every class that defines or inherits virtual functions the compiler creates a virtual table
The virtual table stores a pointer to the most specific definition of each virtual function
For every class that has a vtable, the compiler adds an extra member to the class: the vpointer
The vpointer points to the corresponding vtable of the class
Always declare desctructors of base classes as virtual

*/


#include <bits/stdc++.h>
using namespace std;

// Vtable support dynamic dispatch - aka meaning the right function to call.

class A
{
public:
	void foo();
};

/*
Here since there is one function named foo(), the compiler will remember it's address.
This routine will be executed every time the compiler finds a call to foo() on an instance of A
Here what is happening is early dispatch or static binding
*/


void A::foo()
{
	cout << "Hello this is foo" << endl; 
}


/*
  Now what do vtables have to do with this?
  There are cases where it is not possible for the compiler to know which routine to execute at compile time.
  This is teh case, for instance we declare virtual function.
*/


class B
{
public:
  virtual void bar();
  virtual void qux();
};

void B::bar()
{
  std::cout << "This is B's implementation of bar" << std::endl;
}

void B::qux()
{
  std::cout << "This is B's implementation of qux" << std::endl;
}

// Now this can be overriddden by child classes.

class C : public B
{
public:
  void bar() override;
};

void C::bar()
{
  std::cout << "This is C's implementation of bar" << std::endl;
}

/*

If we use static dispatch as above, the call b->bar() would execute B::bar(), 
since (from the point of view of the compiler) b points to an object of type B. 
This would be horribly wrong, off course, because b actually points to an object of type C and C::bar() should be called instead.

Hopefully you can see the problem by now: given that virtual functions can be redefined in subclasses, calls via pointers (or references) to a base type can not be dispatched at compile time. 
The compiler has to find the right function definition (i.e. the most specific one) at runtime. 
This process is called dynamic dispatch or late method binding.

*/


/*

Hopefully you have grasped how dynamic function dispatch can be implemented by using vtables:
when a call to a virtual function on an object is performed, the vpointer of the object is used to find the corresponding vtable of the class.
Next, the function name is used as index to the vtable to find the correct (most specific) routine to be executed. Done!


*/


int main()
{
	B* b = new C();
	b->bar();
	return 0;
}
