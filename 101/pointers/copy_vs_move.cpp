//
// Created by Hariharan Ragothaman on 10/6/21.
//

#include "bits/stdc++.h"
using namespace std;

vector<int> a, b;
swap(a, b);

template <typename T>
void swap(T& a, T& b)
{
    T tmp(a);  // allocates tmp in stack and elements of tmp in the heap, copies each element from a to tmp
    a = b;
    b = tmp;
}

template <typename T>
void swap(T& a, T& b)
{
    T tmp(std::move(a));  // Redirects the pointer from tmp to a
    a = move(b);
    b = move(tmp);
}

int main()
{
    string str1("ABCDEF");
    string str2;
    str2  = str1;
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}