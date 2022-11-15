/**
 * File              : need_for_smart_pointers.cpp
 * Author            : cppygod
 * Date              : 08.03.2022
 * Last Modified Date: 08.03.2022
 * Last Modified By  : cppygod
 */


/*
 *
 *
 *  House* buildAHouse();
 *  Here - should I delete the pointer this function returns?
 *  What if someone is already deleting it?; and I delete it twice - it leads to undefined behavior.
 *  
 *  Welcome to the concept of RAII
 *  Resource Allocation is Initialization
 *
 */ 

#include "bits/stdc++.h"

/*
 *
 *  Through this, we can manipulate smart pointers as objects allocated on the stack.
 *  Compiler will automatically call the destructor of the smart pointer ----
 *  because objects allocated in the stack - automatically get destroyed when they go out of scope.
 *
 *
 */ 



template <typename T>
class SmartPointer
{
	private:
		T* p_;

	public:
		explicit SmartPointer(T* p) : p_(p) {}
		~SmartPointer() { delete p_; }
};

int main()
{
	SmartPointer<int> sp1(new int(42));
	SmartPointer<int> sp2 = sp1;

	// When sp1 and sp2 are both destroyed - it leads to undefined behavior.

}




