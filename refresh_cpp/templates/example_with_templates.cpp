/*
 *  Templates definition are typically of the format:
 *  template<class Type> (or)
 *  template<typename Type>
 *
 *  Here class and typename keywords are one and the same.
 */


#include <iostream>
using namespace std;

template<class Type>
Type multiply( Type x, Type y)
{
   return (x*y);
}

int main()
{
    int result = multiply<int>( 2, 5);
    double result2 = multiply<double>(2.5, 5.5);
    cout << "Result when integer values are passed is: " << result <<endl;
    cout << "Result when double values are passed is: "<<result2;
    return 0;
}