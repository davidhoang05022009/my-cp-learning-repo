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
    fileio("cowsignal.in", "cowsignal.out");
    int m, n, k; cin >> m >> n >> k;
    vector<string> res;
    for (int i = 0; i < m; ++i) {
        string s = "";
        for (int j = 0; j < n; ++j) {
            char c; cin >> c;
            for (int t = 0; t < k; ++t) {
                s += c;
            }    
        }
        for (int j = 0; j < k; ++j) {
            res.push_back(s);
        }
    }
    for (string s : res) cout << s << endl;
    return 0;
}