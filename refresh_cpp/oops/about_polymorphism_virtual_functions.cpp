/*
 *  A virtual function is a member function which is declared in the base class
 *  It's redefined / overridden by the derived class
 *
 *  Polymorphism means the ability to take many forms.
 *  It occurs if there is a hierarchy of classes which are related to each other by inheritance.
 *
 */

// Polymorphism can be implemented both with and without virtual functions.

#include <iostream>
using namespace std;

// Case1 - without virtual functions

class Shape
{
protected:
    int length;
    int width;

public:
    Shape(int l, int w)
    {
        length = l;
        width = w;
    }

    // - If 'virtual' keyword is not used - this will introduce static linkage.
    virtual int get_Area()
    {
        cout << "This is call to parent class area" << endl;
    }
};

// Derived class - Case1

class Square: public Shape
{
public:
    // declaring and initializing derived class constructor
    Square(int l=0, int w=0): Shape(l,w) {}
    int get_Area()
    {
        cout <<"Square area: " << length * width << endl;
        return (length*width);
    }
};

// Derived class - Case2
class Rectangle: public Shape
{
public:
    Rectangle(int l=0, int w=0): Shape(l,w) {} // declaring and initializing constructor
    int get_Area()
    {
        cout << "Rectangle are: " << length * width << endl;
    }
};

int main(void)
{
    Shape *s;
    Square sq(5,5);
    Rectangle rec(4, 5);

    s = &sq;
    s->get_Area();
    s = &rec;
    s->get_Area();

    return 0;
}