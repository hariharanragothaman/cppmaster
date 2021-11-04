/*
 * Finding the lowest common ancestor using binary lifting
 *
 *  So how much we want to move up?,Given the 2 nodes can be in different levels
 *  Here we can do binary search and figure it out.
 *  Reference : https://cses.fi/problemset/task/1688
 */

#include "bits/stdc++.h"

void lca_using_binary_lifting(vector<int> parents, int a, int b)
{

}

int main()
{
    int number_of_employees, queries;
    cin >> number_of_employees >> queries;

    vector<int> parents(n+1);
    for(int i=2; i<n+1; i++)
    {
        cin >> parents[i];
    }

    int a, b;
    while(queries--)
    {
        cin >> a >> b;
        lca_using_binary_lifting(parents, a, b);
    }

}

