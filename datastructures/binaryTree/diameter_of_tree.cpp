#include "bits/stdc++.h"
using namespace std;

void getDiameter(map<int, vector<int>>&g, int& nodes)
{
    /* We need to do DFS twice */

    deque<pair<int, int>> q;
    q.emplace_back(make_pair(1, 0));
    set<int> visited;
    int current_max_length = 0;
    pair<int, int> node_and_length;
    int arbitrary_node = 1;

    while(q.size() > 0)
    {
        node_and_length = q.back();
        q.pop_back();

        visited.insert(node_and_length.first);
        if(node_and_length.second > current_max_length)
        {
            current_max_length = node_and_length.second;
            arbitrary_node = node_and_length.first;
        }

        for(auto child: g[node_and_length.first])
        {
            if (visited.find(child) == visited.end())
                q.emplace_back(make_pair(child, node_and_length.second + 1));
        }
    }

    cout << "The arbitrary node is: " << arbitrary_node << endl;
    cout << "The max_length is: " << current_max_length << endl;

    /* Doing DFS the second time */

    deque<pair<int, int>> q2;
    q2.emplace_back(make_pair(arbitrary_node, 0));
    set<int> visited2;
    int diameter_of_tree = 0;
    pair<int, int> node_and_length2;

    while(q2.size() > 0)
    {
        node_and_length2 = q2.back();
        q2.pop_back();
        visited2.insert(node_and_length2.first);

        cout << "The node is:" << node_and_length2.first << endl;
        cout << "The length is:" << node_and_length2.second << endl;

        if(node_and_length2.second >= diameter_of_tree)
            diameter_of_tree = node_and_length2.second;

        for(auto child: g[node_and_length2.first])
        {
            if(visited2.find(child) == visited2.end())
                q2.emplace_back(make_pair(child, node_and_length2.second + 1));
        }
        cout << "The diameter is:" << diameter_of_tree << endl ;
    }
}

int main()
{
    int nodes;
    cin >> nodes;
    int edges = nodes - 1;
    int u, v;
    map<int, vector<int>> g;
    while(edges)
    {
        cin >> u >> v;
        // The Tree is an undirected graph by definition
        g[u].emplace_back(v);
        g[v].emplace_back(u);
        edges--;
    }
     getDiameter(g, nodes);
}