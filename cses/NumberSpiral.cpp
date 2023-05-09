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

void solve() {
    ll x, y; cin >> y >> x;
    if (y > x) {
        if (y % 2 == 0) cout << (y * y - x + 1) << endl;
        else cout << ((y - 1) * (y - 1) + x) << endl;
    }
    else {
        if (x % 2 == 0) cout << ((x - 1) * (x - 1) + y) << endl;
        else cout << (x * x - y + 1) << endl;
    }
}

int main() {
    unsync();
    ll t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}