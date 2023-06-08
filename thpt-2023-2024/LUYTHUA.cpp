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

int main() {
    unsync();
    ll n; cin >> n;
    ll p[n];
    for (ll i = 0; i < n; ++i) {
        cin >> p[i];
    }
    ll res = 0;
    for (ll i = 0; i < n; ++i) {
        ll a = p[i] / 10, x = p[i] % 10;
        res += pow (a, x);
    }
    cout << res << endl;
    return 0;
}