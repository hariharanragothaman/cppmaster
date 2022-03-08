/**
 * File              : thread_without_join.cpp
 * Author            : cppygod
 * Date              : 22.02.2022
 * Last Modified Date: 23.02.2022
 * Last Modified By  : cppygod
 */

#include <iostream>
#include <thread>
using namespace std;

int main()
{
	std::thread t1([] {cout << std::this_thread::get_id() << endl;} );
	t1.detach();
}
