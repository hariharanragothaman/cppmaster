#include "../headers.h"

vector<vector<int>> getTranspose(vector<vector<int>> A)
{
    int R = A.size();
    int C = A[0].size();
    vector<vector<int>> Transpose(C, vector<int>());

    if(R == 0)
        return Transpose;


    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
        {
            Transpose[j].push_back(A[i][j]);
        }
    }
    return Transpose;

}


int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> transpose = getTranspose(arr);
    for(int i=0; i<transpose.size(); i++)
    {
        for (int j = 0; j < transpose[0].size(); j++) {
            cout << transpose[i][j];
        }
        cout << endl;
    }
    return 0;
}