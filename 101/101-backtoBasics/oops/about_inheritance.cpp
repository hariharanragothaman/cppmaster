#include <iostream>
using namespace std;
/*
 *  Inheritance provides a way to create a new class from an existing class
 *  New class is a specialized version of existing class
 *
 *  Base Class (Parent) : inherited by child class
 *  Derived class (Child) : inherits from the base class
 */


/*

Here Undergrad class inherits Student Class

class Student
{

};

class Undergrad : public Student
{

};

*/


/* Rules classification
 *
 * An object of the child has:
 *  1. All members defined in the child class.
 *  2. All members declared in the parent class.
 *
 *  An object of the child class can use:
 *  1. All public members defined in the child class
 *  2. All public members defined in the parent class
 *
 * Protected Members:
 *  -> Protected members is similar to private - but accessible by objects of derived class
 *  -> allows derived class to know details of parents
 *
*/

// Base Class
class Shape
{
public:
    Shape()
    {
        length = 0;
    }
    void setlength(int l)
    {
        length = l;
    }

protected:
    int length;
};

// Derived Class
class Square: public Shape{
public:
    Square(): Shape()
    {
        length = 0;
    }

    int get_Area()
    {
        return (length*length);
    }
};


 int main()
{
     Square sq;
     sq.setlength(5);
     cout << "The total area of the square is: " << sq.get_Area() << endl;

     return 0;
}