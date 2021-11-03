#include "bits/stdc++.h"
using namespace std;

// Let's say we want to have a custom comparator
bool cmp(int a, int b)
{
    return abs(a) < abs(b);
}


int main()
{
	vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}};
	std::vector<int> v = { 4, 7, 5, 2, 6, 9 };


	sort(v.begin(), v.end());
	for(auto& c: v) cout << c << " ";
	cout << endl;

	sort(v.begin(), v.end(), greater<int>());
    for(auto& c: v) cout << c << " ";
    cout << endl;

	return 0;
}