#include "../headers.h"
using namespace std;

int main()
{
    string s = "HELLO WORLD";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}