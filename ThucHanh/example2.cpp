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

int A[100], B[100], C[100];

int main() {
    unsync();
    int n; cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> C[i];
    }
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        int amt = min (A[i], C[i + 1] - A[i + 1]);
        A[i] -= amt;
        A[i + 1] += amt;
    }

    for (int i = 0; i < n; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}