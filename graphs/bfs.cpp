#include "../headers.h"

vector<vector<int>> adj;
int n;
int start;

queue<int> q;
vector<bool> visited(n);
vector<int> d(n);
vector<int> parent(n);

int main()
{
    q.push(start);
    visited[start] = true;
    parent[start] = -1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();
        for(int nei: adj[node])
        {
            if(!visited[nei])
            {
                visited[nei] = true;
                q.push(nei);
                d[nei] = d[node] + 1;
                parent[nei] = node;
            }
        }
    }
    return 0;
}