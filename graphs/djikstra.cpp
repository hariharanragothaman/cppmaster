#include "../headers.h"


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

// #defines for bounds comfort
#define double long double

// #defines for comfort
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define eb emplace_back

// Binary Search comforts
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

vector<int> sieve(int n)
{
    int*arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)arr[j] = 1;
        }
    return vect;
}
ll gcd(ll a, ll b) {
    if (b > a) {
        return gcd(b, a);
    }
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
ll expo(ll a, ll b, ll mod) {
    ll res = 1;
    while (b > 0) {
        if (b & 1)res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
void extendgcd(ll a, ll b, ll*v) {
    if (b == 0) {
        v[0] = 1;    //pass an arry of size 3
        v[1] = 0;
        v[2] = a;
        return ;
    }
    extendgcd(b, a % b, v);
    ll x = v[1];
    v[1] = v[0] - v[1] * (a / b);
    v[0] = x;
    return;
}
ll mminv(ll a, ll b) {
    ll arr[3];    //for non prime b
    extendgcd(a, b, arr);
    return arr[0];
}
ll mminvprime(ll a, ll b) {
    return expo(a, b - 2, b);
}
bool revsort(ll a, ll b) {
    return a > b;
}
void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}
ll combination(ll n, ll r, ll m, ll* fact) {
    ll val1 = fact[n];
    ll val2 = mminvprime(fact[r], m);
    ll val3 = mminvprime(fact[n - r], m);
    return ((val1 * val2) % m * val3) % m;
}


#define min(x,y) ({ __typeof__(x) __var0 = x; __typeof__(y) __var1 = y; __var0 < __var1 ? __var0 : __var1; })
#define max(x,y) ({ __typeof__(x) __var0 = x; __typeof__(y) __var1 = y; __var0 < __var1 ? __var1 : __var0; })

// BEGIN NO SAD
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define trav(a, x) for(auto& a : x)
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
// END NO SAD

typedef vector<pii> vpii;
typedef vector<vpii> vvpii;


//#define ONLINE_JUDGE   /* IF not ONLINE_JUDGE Comment this line*/

#ifndef ONLINE_JUDGE
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
#endif

/********************************************************************************************************************/

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
