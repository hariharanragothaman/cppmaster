/**
 * File              : createThread.cpp
 * Author            : cppygod
 * Date              : 13.02.2022
 * Last Modified Date: 13.02.2022
 * Last Modified By  : cppygod
 */

#include <bits/stdc++.h>
#include <thread>
using namespace std; 

/*
 * A thread - std::thread represents an executable unit.
 * This executable unit which the thread instantly starts, gets it work package as callable unit
 * What is a callable unit?
 * 	A callable unit is a entity that behaves like a function.
 * 	This can be a function, function object or a lambda function
 *
 */

void helloFunction()
{
	cout << "Hello from a function" << endl;
}

class HelloFunctionObject
{
	public:
		void operator()() const
		{
			cout << "Hello from a function object" << endl;
		}
};

int main()
{
	cout << endl;
	thread t1(helloFunction);

	HelloFunctionObject obj1;

	thread t2(obj1);

	thread t3([]{cout << "Hello from lambda" << endl;});
	
	t1.join();
	t2.join();
	t3.join();
}
