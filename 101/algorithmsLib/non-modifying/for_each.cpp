#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

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

    /*
     *  This is similar to list-comprehension
     *  Note - Here, in the lambda we are passing by reference, so it modifies it in-place
     *  If we pass by value this will not happen
     */
    for_each(A.begin(), A.end(), [](int &n) {n++;});

    cout << "Printing the vector after update" << endl;
    for_each(A.begin(), A.end(), print);
    cout << endl;

    Sum s = for_each(A.begin(), A.end(), Sum());

    cout << "Printing after applying predicate" << endl;
    for_each(A.begin(), A.end(), print);
    cout << endl;

    cout << s.sum << endl;

    /**
     *  Now let's try for_each with map()
     *  This is not possible, and will result in an an error.
     *  The problem with changing the key of a std::map (or the value of a std::set)
        Contrary to sequence containers such as std::vector, std::map and std::set offers 2 guarantees:
            they maintain their elements in sorted order,
            they ensure their elements are unique (except for std::multimap and std::multiset).
        If you don’t need those invariants, you can just use a std::vector and be done with it.
        However in the case of a map, the sorted order is convenient to make find the value associated to a key in logarithmic complexity.
        To maintain these invariants, the containers std::map and std::set need to keep some control about the relative positions of their values inside of the collection.
        If you just go about and modify a value by using an iterator, like in the example above, the container won’t be notified. This will make its structure inconsistent and break the invariants.
    */
    map<int, int> H;
    for(int i=0; i<5; i++)
    {
        H[i]++;
    }

    cout << "Printing the map" << endl;
    for(auto c: H)
    {
        cout << c.first << " " << c.second << endl;
    }

    cout << "Modifying the map using lambda" << endl;
    for_each(H.begin(), H.end(), [](pair<int, int> c)
    {
        c.first++;
    });

    cout << "Printing the map after update" << endl;
    for(auto c: H)
    {
        cout << c.first << " " << c.second << endl;
    }

    return 0;
}
