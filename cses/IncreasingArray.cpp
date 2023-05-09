#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define endl "\n"
void unsync() { ios::sync_with_stdio(0); cin.tie(nullptr); }
ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void fileio(string inputFile, string outputFile = "") { if(fopen(inputFile.c_str(), "r")) { freopen(inputFile.c_str(), "r", stdin); if (outputFile != "") freopen(outputFile.c_str(), "w", stdout); } }


int main() {
    unsync();
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    ll cnt = 0;
    for (ll i = 1; i < n; ++i) {
        if (a[i] < a[i - 1]) {
            cnt += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << cnt << endl;
    return 0;
}