//
// Created by cppygod on 9/2/21.
//

#include "bits/stdc++.h"
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.emplace(5);
    pq.emplace(10);
    pq.emplace(100);

    /* PQ always get the greatest by default*/
    while(!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }

    /* Let's create another priority Queue */
    priority_queue<int, vector<int>> pq2;
    return 0;
}