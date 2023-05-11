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
    fileio("mixmilk.in", "mixmilk.out");
    ll c[3], m[3];
    for (int i = 0; i < 3; ++i) {
        cin >> c[i] >> m[i];
    }
    int curr = 0;
    for (int i = 1; i <= 100; ++i) {
        int nb = curr == 2 ? 0 : curr + 1;
        ll amt = min(m[curr], c[nb] - m[nb]);
        m[curr] -= amt;
        m[nb] += amt;
        if (curr == 2) curr = 0;
        else ++curr;
    }
    for (int i = 0; i < 3; ++i) {
        cout << m[i] << endl;
    }
    return 0;
}