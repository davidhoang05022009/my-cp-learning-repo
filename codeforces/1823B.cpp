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
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        int p[n];
        int bad = 0;
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            --p[i];
        }
        for (int i = 0; i < n; ++i) {
            if (p[i] % k != i % k) ++bad;
        }
        if (bad == 0) cout << 0 << endl;
        else if (bad == 2) cout << 1 << endl;
        else cout << -1 << endl;
    }
    return 0;
}