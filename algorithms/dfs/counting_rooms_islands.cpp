//
// Created by Hariharan Ragothaman on 11/28/21.
// Problem: https://cses.fi/problemset/task/1192

// Rememeber function calls are not FREEEEE......

#include "bits/stdc++.h"
using namespace std;
#define ENABLEFASTIO() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

vector<vector<int>> get_neighbours(int r, int c, int R, int C)
{
    vector<vector<int>> directions = {{r+1, c}, {r, c+1}, {r-1, c}, {r, c-1}};
    vector<vector<int>> nei;
    for(auto d: directions)
    {
        if(0 <= d[0] && d[0]< R && d[1] >= 0 && d[1] < C)
            nei.push_back({d[0], d[1]});
    }
    return nei;
}


void dfs(vector<vector<char>>& A, int& r, int& c, int& R, int& C)
{
    deque<pair<int, int>> Q;
    Q.push_back(make_pair(r, c));
    pair<int, int> node;

    int nr, nc;

    while(!Q.empty())
    {
        node = Q.back();
        Q.pop_back();
        A[node.first][node.second] = '#';   // Mark node as visited

        nr = node.first;
        nc = node.second;
        vector<vector<int>> directions = {{nr+1, nc}, {nr, nc+1}, {nr-1, nc}, {nr, nc-1}};

        for(auto d: directions)
            if(0 <= d[0] && d[0]< R && d[1] >= 0 && d[1] < C)
                if(A[d[0]][d[1]] == '.')
                    Q.push_back(make_pair(d[0], d[1]));
    }
}

#define LOCAL
#ifdef LOCAL
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
// Submit to Online Judge
#endif

int main()
{
    ENABLEFASTIO();
    int R, C;
    cin >> R >> C;
    vector<vector<char>> A;

    string s;
    vector<char> tmp;
    for (int i = 0; i < R; i++)
    {
        cin >> s;
        for(auto c: s) tmp.push_back(c);
        A.push_back(tmp);
        tmp.clear();
    }

    int rooms = 0;
    for (int i = 0; i < R; ++i)
        for (int j = 0; j < C; ++j)
            if (A[i][j] == '.')
            {
                dfs(A, i, j, R, C);
                rooms++;
            }

    cout << rooms << endl;


    return 0;
}