/*
* @Author: Hariharan Ragothaman
* @Date:   2021-12-11 14:14:47
* @Last Modified by:   Hariharan Ragothaman
* @Last Modified time: 2022-01-08 13:56:44
*/
#include "../headers.h"
using namespace std;

int main()
{
    string s2 = "HELLO WORLD";
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
}