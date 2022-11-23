#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 5;
    vector<int> A(n, 0);
    for(int i=0; i<n; i++)
        A[i] = i;
    vector<int> PS(n+1, 0);
    for(int i=1; i<n+1; i++)
        PS[i] = PS[i-1] + A[i-1];
}
