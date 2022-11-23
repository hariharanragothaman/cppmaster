/**
 * File              : 04_smart_pointers_begin.cpp
 * Author            : cppygod
 * Date              : 08.03.2022
 * Last Modified Date: 08.03.2022
 * Last Modified By  : cppygod
 */



#include "bits/stdc++.h"
using namespace std;



/* Now we saw in the previous example - how deleting ptr twice can lead to undefined behavior
 * We also have to come up with a mechanism to figure out how ptrs are copied
 * Otherwise - a default copy constructor will lead to undefined behavior.
 *
 */

/*
 *	unique_ptr
 *	raw pointer
 *	shared_ptr
 *	weak_ptr
 *	scoped_ptr
 *	auto_ptr
 *
 */


int main()
{
	// unique_ptr is the default pointer to use 
	// It will hold this pointer and delete it in it's destructor 
	
	/*
	 *  consider this: unique_ptr<House> buildAHouse();
	 *  No-one will delete this except the unique_ptr returned by this function.
	 *  unique_ptr is the prefered ptr to be returned from the factory function.
	 */
	return 0;
}
