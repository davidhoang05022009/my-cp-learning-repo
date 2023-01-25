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
    ll cnt = 0;
    while (n != 0) {
        if (n >= 100) {
            cnt += n / 100;
            n %= 100;
        }
        else if (n >= 20) {
            cnt += n / 20;
            n %= 20;
        }
        else if (n >= 10) {
            cnt += n / 10;
            n %= 10;
        }
        else if (n >= 5) {
            cnt += n / 5;
            n %= 5;
        }
        else {
            cnt += n;
            n = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}