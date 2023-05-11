#include <bits/stdc++.h>
using namespace std;
// BEGIN MACROS
using ll = long long;
using db = double;
using vi = vector<int>;
using vll = vector<ll>;
using vii = vector<vi>;
using ii = pair<int, int>;
#define endl "\n"
#define pb push_back
void unsync() { ios::sync_with_stdio(0); cin.tie(nullptr); }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void fileio(string inputFile, string outputFile = "") { if(fopen(inputFile.c_str(), "r")) { freopen(inputFile.c_str(), "r", stdin); if (outputFile != "") freopen(outputFile.c_str(), "w", stdout); } }
// END MACROS

const ll mod = 1e9 + 7;

int main() {
    unsync();
    ll n; cin >> n;
    n %= mod;
    ll res = 1, x = 2;
    while (n > 0) {
        if (n & 1) 
            res = (res * x) % mod;
        n = n >> 1;
        x = (x * x) % mod;
    }
    cout << res << endl;
    return 0;
}