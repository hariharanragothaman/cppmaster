#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string, int> M;
    M["Hello"] = 1;
    M["World"] = 2;

    for(auto& c: M)
        cout << c.first << " " << c.second << endl;

    vector< pair<string, int> > V(M.begin(), M.end());

    for(auto&c : V)
        cout << c.first << " " << c.second << endl;

    return 0;
}
