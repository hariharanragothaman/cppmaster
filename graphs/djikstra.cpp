#include "bits/stdc++.h"
using namespace std;

void dijkstra(int start, vector<pair<int, ll>>* edges, ll *arr, int n, bool* visited, int* parent)
{
    set<pair<ll, int>> s;
    s.insert({ll(0), 0});
    while (!s.empty())
    {
        pair<ll, int> top = *s.begin();
        int element = top.second;
        visited[element] = true;
        int distance = top.first;
        arr[element] = distance;
        s.erase(s.begin());

        for (int i = 0; i < edges[element].size(); i++)
        {
            if (visited[edges[element][i].first])
                continue;
            if (distance + edges[element][i].second < arr[edges[element][i].first])
            {
                auto f = s.find({arr[edges[element][i].first], edges[element][i].first});
                if (f != s.end())
                    s.erase(f);
                s.insert({distance + edges[element][i].ss, edges[element][i].ff});
                arr[edges[element][i].ff] = distance + edges[element][i].ss;
                parent[edges[element][i].ff] = element;
            }
        }
    }
}
void solve()
{

    int n, m;
    cin >> n >> m;
    vector<pair<int, ll>> *edges = new vector<pair<int, ll>>[n];
    int* parent = new int[n];
    for (int i = 0; i < n; i++)
        parent[i] = i;
    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        a--;
        b--; 	//considering bidirectional edges
        edges[a].pb({b, c});
        edges[b].pb({a, c});
    }

    ll* shortest_paths = new ll[n]; // from the vertex 0
    for (int i = 0; i < n; i++)
        shortest_paths[i] = 1e18;
    shortest_paths[0] = 0;

    int start = 0;
    bool *visited = new bool[n]();

    dijkstra(start, edges, shortest_paths, n, visited, parent);

    if (shortest_paths[n - 1] != 1e18)
    {
        int i = n - 1;
        vector<int> v1;
        while (parent[i] != i)
        {
            v1.pb(parent[i] + 1);
            i = parent[i];
        }
        for (int i = v1.size() - 1; i >= 0; i--)
            cout << v1[i] << " ";
        cout << n << " ";
        cout << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T=1;
    while(T--) solve();
    return 0;

}
