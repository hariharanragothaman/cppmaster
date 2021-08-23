#include "../../headers.h"


int main()
{
    vector<int> v;

    for(int i=0; i<10; i++)
    {
        v.push_back(i);
    }

    set<int> s;
    for(auto&c : v)
    {
        s.insert(c);
    }
    return 0;
}