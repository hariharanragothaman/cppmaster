//
// Created by harih on 11/19/2020.
//
#include <iostream>
using namespace std;

class Parent
{
public:
    virtual void view() { cout<<" In Parent \n"; }
};

class Child: public Parent
{
public:
    void view() { cout<<"In Child \n"; }
};

int main()
{
    Parent *p = new Child;
    p->view();

    Parent &pr = *p;
    pr.view();

    return 0;
}