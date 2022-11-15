/**
 * File              : for_each.cpp
 * Author            : cppygod
 * Date              : 15.11.2022
 * Last Modified Date: 15.11.2022
 * Last Modified By  : cppygod
 */

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main()
{
	vector<int> A = {3, 4, 2, 8, 15, 267};

    cout << "Printing the initial vector" << endl;
    auto print  = [](const int& n) {cout << " " << n;};
    for_each(A.begin(), A.end(), print);
    cout << endl;

    // This is very similar to list-comprehension in python
    for_each(A.begin(), A.end(), [](int &n) {n++;});

    cout << "Printing the vector after list comprehension" << endl;
    for_each(A.begin(), A.end(), print);
    cout << endl;

    return 0;
}
