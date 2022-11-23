#include <iostream>
using namespace std;

/*
 * cin operation takes input only till first space is detected
 */

int main()
{

    int num;
    cout << "Enter your number " << endl;
    cin >> num;
    cout << "Your number is: " << num <<endl;

    // When we don't want to count spaces - we can use getline()
    string name;
    cout << "Please enter your name" << endl;
    getline(cin, name);
    cout << "Hello, " << name << "!\n";




}