#include "../headers.h"

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int v)
{
    visited[v] = true;
    for(int u: adj[v])
    {
        if(!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    return 0;
}