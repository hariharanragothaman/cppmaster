
#include "bits/stdc++.h"
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix)
{
    int R = matrix.size();
    int C = matrix[0].size();

    vector<vector<int>> A(C);

    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            A[i].push_back(matrix[i][j]);
        }
    }

    return A;
}
