#include <iostream>
using namespace std;

class Score {
    int x;
};

int main()
{
    Score sc;
    // cout << sc.x; - This will raise a compile error, since x is private
    return 0;
}