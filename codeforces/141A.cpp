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
    vector<int> a(26, 0), b(26, 0);
    for (int i = 0; i < 2; i++) {
        string s1; cin >> s1;
        for (char c : s1) {
            a[c - 'A']++;
        }
    }
    string s2; cin >> s2;
    for (char c : s2) {
        b[c - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}