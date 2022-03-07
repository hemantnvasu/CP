#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
// using namespace __gnu_pbds;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define nline                   "\n"
#define ff                      first
#define ss                      second
#define pb                      push_back
#define ppb                     pop_back
#define eb                      emplace_back
#define mp                      make_pair
#define sz(x)                   (int)((x).size())
#define setbits(x)              __builtin_popcount(x) // # setbits i.e, # 1
#define zrobits(x)              _builtin_ctzll(x) // # 0 before the first 1 bit
#define INF                     1e18
#define MOD                     1000000007
#define PI                      3.141592653589793238462
#define ps(x,y)                 fixed<<setprecision(y)<<x // if x double and we need precision till y decimal places
#define mk(arr,n,type)          type *arr = new type[n]
#define w(tt)                   int tt; cin>>tt; while(tt--) //for multiple test cases
#define nPerm(a,n)              next_permutation(a,a+n)
#define rep(i,a,b)              for(int i = a; i < b; i++)
#define all(x)                  x.begin(), x.end()
#define rall(x)                 x.rbegin(), x.rend()


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

// __int128 read() {
//  __int128 x = 0, f = 1;
//  char ch = getchar();
//  while (ch < '0' || ch > '9') {if (ch == '-') f = -1; ch = getchar();}
//  while (ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
//  return x * f;
// }

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef __int128 ell;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

/*---------------------------------------------------------------------------------------------------------------------------*/

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
// void _print(ell t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
// void _print(pbds v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/

ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
bool revsort(ll a, ll b) {return a > b;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

/*---------------------------------------------------------------------------------------------------------------------------*/

void solve() {
    w(tt) {
        cout << 1 << nline;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    solve();
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}
