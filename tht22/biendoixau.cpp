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
    string s; cin >> s;
    int m; cin >> m;
    while (m--) {
        int  i, j;
        char c1, c2;
        cin >> i >> j >> c1 >> c2;
        for (; i <= j; ++i) {
            if (s[i] == c1) s[i] = c2;
        }
    }
    cout << s << endl;
    return 0;
}