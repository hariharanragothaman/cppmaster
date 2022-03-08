#include <bits/stdc++.h>
using namespace std;

class Cont
{
	vector<string> vals;
public:
	Cont() = default;

	void insert(string&& v)
	{
		vals.push_back(move(v));
	}

	void print() const 
	{
		cout << "Cont" << endl;
		for(auto c: vals)
			cout << ">" << c << endl;
	}
};


int main()
{
	Cont txt;
	string str("Hello");
	cout << str << endl;
	txt.insert(str);
	txt.print();

	return 0;
}