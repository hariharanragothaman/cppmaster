/*
    Some General Advice
    REMEMBER CLEAR GLOBAL STATE
    REMEMBER READ THE PROBLEM STATEMENT AND DON'T SOLVE A DIFFERENT PROBLEM
    remember hidden T factor of 1e2
    read the bounds for stupid cases
    did you restart your editor
    pushing back vectors is garbage, pre-initialize them
    function calls are not free
*/


#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("inline")

#include <iostream>
#include <fstream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

// For Hash
#include <functional>

// For all useful constants
#include <climits>

// Data-Structures and related stuff.
#include <map>
#include <set>
#include <stack>
#include <random>
#include <deque>
#include <queue>   // Includes Priority Queue
#include <vector>
#include <unordered_map>
#include <unordered_set>


// Some basic typedef's for comfort
typedef vector<int> vi;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define vector<pii> vpii;
#define vector<vpii> vvpii;

// #defines for bounds comfort
#define double long double
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound


#define debug(x) cout << #x << " is " << x << endl
#define  mset(a,x)      memset(a,x,sizeof(a))
#define  debv(a)        for(auto it: a)cout<<it<<" ";newl;
#define  deb1(a)        cout<<a<<"\n";
#define  deb2(a,b)      cout<<a<<" "<<b<<"\n";
#define  deb3(a,b,c)    cout<<a<<" "<<b<<" "<<c<<"\n";
#define  deb4(a,b,c,d)  cout<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
#define  uniq(a)        a.resize(unique(a.begin(), a.end()) - a.begin());


// # defines for Traversals
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()



#define ONLINE_JUDGE   /* IF not ONLINE_JUDGE Comment this line*/

#ifndef ONLINE_JUDGE
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
#endif


vector<int> djikstra(vvpii g, int n, int start)
{
    const int INF = 10000000000000;
    vector<int> parents(n, -1);
    vector<int> distance(n, INF);
    distance[start] = 0;

    // Create a priority Q
    priority_queue<pii, vpii, greater<pii>> Q;
    Q.push({0, start});

    while(!Q.empty())
    {
        int u = Q.top().second;
        Q.pop();

        for(auto &c: g[u])
        {
            int v = c.first;
            int w = c.second;
            if(distance[v] > distance[u] + w)
            {
                parents[v] = u;
                distance[v] = distance[u] + w;
                Q.push({distance[v], v});
            }
        }
    }
    return parents;
}

void solve()
{
    int vertices;
    int edges;
    cin >> vertices;
    cin >> edges;

    /* Incrementing this just for the purpose of since node starts from 1*/
    vertices++;
    edges++;

    vvpii g;

    rep(i, 0, vertices)
    {
        vpii row;
        g.push_back(row);
    }

    rep(i, 0, edges)
    {
        int u;
        int v;
        int w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    int start = 1;
    vi parents = djikstra(g, vertices, start);

//    for(auto c: parents)
//        cout << c << " ";
//    cout << endl;

    int end = vertices - 1;
    vi result;
    while(parents[end] != -1)
    {
        result.push_back(end);
        end = parents[end];
    }
    result.push_back(end);

    if(result.size()==0 || result.back() != 1){
        cout << "-1" << endl;
    }
    else {
        reverse(result.begin(), result.end());
        for (auto c: result)
            cout << c << " ";
        cout << endl;
    }

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
