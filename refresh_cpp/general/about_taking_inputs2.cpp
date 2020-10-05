#include <iostream>
using namespace std;

int main() {

    // Write your code here
    string name;
    string address;
    string phonenumber;

    getline(cin, name);
    getline(cin, address);
    getline(cin, phonenumber);

    cout << "Name is " << name;
    cout << "Address is " << address;
    cout << "Phone number is " << phonenumber;


    return 0;
}