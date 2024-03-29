 // staticAssert.cpp
#include <iostream>
#include <type_traits>
using namespace std;

template< class T >
struct Add
{
  // check the assertion
  static_assert(std::is_arithmetic<T>::value, "Argument T must be an arithmetic type");

} ;

int main(){

  // will work 
  static_assert(sizeof(void*) >= 8, "64-bit addressing is required for this program");

  // int is arithmetic
  Add<int> addInt= Add<int>();

  // double is arithmetic
  Add<double> addDouble= Add<double>();

  // char is arithmetic
  Add<char> addChar= Add<char>();

  // std::string is not arithmetic
  Add<std::string> addString= Add<std::string>(); // if you comment this line, the code will run fine

}