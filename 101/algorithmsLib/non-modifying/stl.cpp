/*
* @Author: Hariharan Ragothaman
* @Date:   2022-04-30 20:58:03
* @Last Modified by:   Hariharan Ragothaman
* @Last Modified time: 2022-04-30 21:40:08
*/

#include "bits/stdc++.h"
using namespace std;

int main()
{
	vector<int> v{5, 3, 7, 9, 4};

	// allof() - Check if all elements satisfy a condition
	auto morethanOne = [](int i) { return i > 1;};
	bool allGreaterThanOne = all_of(v.begin(), v.end(), morethanOne);
	cout << "Are all elements greater than one? " << allGreaterThanOne << endl;

	// any_of() - Check if any condition satisfies a condition
	auto greaterthanEight = [](int i) { return i > 8;};
	bool anyGreaterThanEight = any_of(v.begin(), v.end(), greaterthanEight);
	cout << "Is there any element greater than eight" << anyGreaterThanEight << endl;


	// none_of() - Check if none of the elements satisfy a condition
	auto more_than_twenty = [](int i) {return i > 20;};
	bool noneMoreThanTwenty = none_of(v.begin(), v.end(), more_than_twenty);
	cout << "Are none of the elements greater than 20 " << noneMoreThanTwenty << endl;

	// for_each - Do Something for each item in range
	auto print_every_element = [] (int i) { cout << i << " ";};
	for_each(v.begin(), v.end(), print_every_element);
	cout << endl;

	// find() - find the item in a given range
	// returns the iterator to the first item equal to the range.
	auto it_find = find(v.begin(), v.end(), 3);
	cout << "The iterator for 3 now points to: " << it_find - v.begin() << endl;

	// Find the first item that does not satisfy the condition
	// Returns an iterator to the first item that is not satisfy condition
	auto GreaterThanSix = [](int i) { return i > 6;};
	auto it_find_if_not = find_if_not(v.begin(), v.end(), GreaterThanSix);
	cout << "The first element that is greater than 6 is at: " << *it_find_if_not  << endl;

	// Find the the first occurrance of a sequence from the end
	string s = "malayalam";
	string t = "la";
	auto find_from_end = find_end(s.begin(), s.end(), t.begin(), t.end());
	cout << "The iterator now points to: " << find_from_end - s.begin() << endl;

	//







}