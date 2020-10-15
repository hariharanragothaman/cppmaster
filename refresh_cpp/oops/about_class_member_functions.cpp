#include <iostream>
using namespace std;

class DayofYear
{
public:
    void output();  // member function
    int month;
    int day;
    void setYear(int year);
private:
    int year;
};

// Setter and Getter implementations
void DayofYear::setYear(int yr)
{
    year = yr;
}

void DayofYear::output()
{
    cout << "Month = " << month << endl;
    cout << "Day = " << day << endl;
    cout << "Year = " << year << endl;
}

int main()
{
    DayofYear birthday, today;

    birthday.month = 8;
    birthday.day = 5;
    birthday.setYear(2000);
    cout << "Your birthday date is:" << endl;
    birthday.output();

    return 0;
}