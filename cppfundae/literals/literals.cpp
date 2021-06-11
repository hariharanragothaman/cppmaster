#include <iostream>

/*
 *  Literals are explicit values in the program
 *  They can be of any type - int, bool, string etc
 *  The value of literal is fixed - Hence they are called constants
 *
 *  They are not just restricted to simple values
 *  lambda function [](int a, int b){ return a+b; }
 */

int main()
{
    int unsigned_int = u'U'; // Unsigned integer
    int hex = 0x2a; // Hexadecimal
    std::string raw = R"(Raw String)"; // Raw String
    std::cout << unsigned_int << ", " << hex << ", " << raw << std::endl;

    std::string raw_path = R"(C:\tmp\newFile.txt)";
    std::cout << raw_path << std::endl;

}