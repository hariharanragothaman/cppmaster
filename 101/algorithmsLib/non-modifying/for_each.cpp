#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

struct Sum
{
    void operator()(int n) {sum += n;}
    int sum{0};
};


int main()
{
	vector<int> A = {3, 4, 2, 8, 15, 267};

    cout << "Printing the initial vector" << endl;
    auto print  = [](const int& n) {cout << " " << n;};
    for_each(A.begin(), A.end(), print);
    cout << endl;

    // This is very similar to list-comprehension in python
    for_each(A.begin(), A.end(), [](int &n) {n++;});

    cout << "Printing the vector after update" << endl;
    for_each(A.begin(), A.end(), print);
    cout << endl;

    Sum s = for_each(A.begin(), A.end(), Sum());

    cout << "Printing after applying predicate" << endl;
    for_each(A.begin(), A.end(), print);
    cout << endl;

    cout << s.sum << endl;
    return 0;
}
