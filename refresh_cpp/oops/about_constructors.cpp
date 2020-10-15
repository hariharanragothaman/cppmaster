#include <iostream>
using namespace std;

/*
 * Rules of a constructor
 * 1. constructor is automatically called when an object of the class is - "declared"
 * 2. constructor can be used to initialize member variables - when an object is declared.
 * 3. constructor's name must be the same as the name of the class it's declared in.
 * 4. constructor cannot return a value -  it cannot even be void.
 */

// Class declarations

class DayofYear
{
public:
    DayofYear(int new_month, int new_day);
    DayofYear();

    int myVar;
    void output();
    int get_month();
    int get_day();

private:
    void check_date();
    int month;
    int day;

};

// Defining constructor with parameters
DayofYear::DayofYear(int new_month, int new_day)
{
    month = new_month;
    day = new_day;
}

DayofYear::DayofYear()
{
    cout << "Calling default constructor" << endl;
    month = 0;
    day = 0;
}

// Hence in the above example - constructor is overloaded.

int DayofYear::get_month()
{
    return month;
}

int DayofYear::get_day()
{
    return day;
}

// Beginning of Main function

int main()
{
    DayofYear birthday(3, 29);
    DayofYear today;
    cout << "Birthday day is: " << birthday.get_day()<<endl;
    cout << "Birthday month is: "<< birthday.get_month()<<endl;
    cout << "Today the day is: " << today.get_day()<<endl;
    cout << "Today month is: " << today.get_month()<<endl;
    return 0;

}