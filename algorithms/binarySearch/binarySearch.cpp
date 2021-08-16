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
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define eb emplace_back

// Binary Search comforts
#define lb lower_bound
#define ub upper_bound

#define debug(x) cout << #x << " is " << x << endl

vector<int> sieve(int n)
{
    int*arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = 2 * i; j <= n; j += i)
                arr[j] = 1;
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


#define ONLINE_JUDGE   /* IF not ONLINE_JUDGE Comment this line*/

#ifndef ONLINE_JUDGE
ifstream  i_data("../io/data.in");
ofstream  o_data("../io/data.out");
#define cin  i_data
#define cout o_data
#else
#endif

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vi arr1 = {10, 15, 20, 25, 30, 35};
    vi arr2 = {10, 15, 20, 20, 25, 30, 35};
    vi arr3 = {10, 15, 25, 30, 35};

    int target = 20;
    // Use Binary search to check if 20 exists
    if(binary_search(arr1.begin(), arr1.end(), target))
        cout << target << " exists!" << endl;

    /* LOWER BOUND EXAMPLES */
    // Getting the position of 20 using lower_bound - where in arr1 20 exists
    cout << "The position of 20 in arr1 is: (single occurs) " << lower_bound(arr1.begin(), arr1.end(), target) - arr1.begin() << endl;

    // Getting the position of 20 using lower_bound - where in arr1 20 exists multiple times
    cout << "The position of 20 in arr2 is: (multiple time occurs) " << lower_bound(arr2.begin(), arr2.end(), target) - arr2.begin() << endl;

    // Getting the position of 20 using lower_bound - where in arr1 20 does not exists - similar to bisect_left
    cout << "The position of 20 in arr3 if inserted: (does not exists) " << lower_bound(arr3.begin(), arr3.end(), target) - arr3.begin() << endl;


    /* UPPER BOUND EXAMPLES */
    cout << "Upper Bound Examples..." << endl;
    // Returns index+1 if index exists - in single occurance
    cout << "The position of 20 in arr1 is: (single occurs) " << upper_bound(arr1.begin(), arr1.end(), target) - arr1.begin() << endl;
    // Returns last index+1 if multiple occurances
    cout << "The position of 20 in arr2 is: (multiple time occurs) " << upper_bound(arr2.begin(), arr2.end(), target) - arr2.begin() << endl;
    // If it doesn't exists - then returns similar to bisect_left it it doesn't exists
    cout << "The position of 20 in arr3 if inserted: (does not exists) " << upper_bound(arr3.begin(), arr3.end(), target) - arr3.begin() << endl;
}