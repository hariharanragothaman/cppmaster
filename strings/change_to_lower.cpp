//
// Created by Hariharan Ragothaman on 11/30/21.
//

#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s = "HELLO WORLD";
    transform(s.begin(), s.end(), s.begin(), ::tolower);
}