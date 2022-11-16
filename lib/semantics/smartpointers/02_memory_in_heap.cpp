/**
 * File              : memory_in_heap.cpp
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

int main()
{
	int *pi = new int(42);
	// memory allocated dynamically is in the heap
	// technically it's in the "free store" space.
	
	// objects in the heap are not destroyed automatically
	// So it gives us a lot of flexibility to have them longer in scope.
	// But we are in charge of their deletion.
	//
	// not calling delete will lead to a memory leak, calling it multiple times, leads to undefined behavior.
	
	delete pi;


}
