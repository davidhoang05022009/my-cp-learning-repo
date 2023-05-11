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
    fileio("shell.in", "shell.out");
    int n; cin >> n;
    vector<int> shell_pos(3), cnt(3);
    for (int i = 0; i < 3; ++i) {
        shell_pos[i] = i;
    }
    for (int i = 0; i < n; ++i) {
        int a, b, g; cin >> a >> b >> g;
        --a; --b; --g;
        swap(shell_pos[a], shell_pos[b]);
        ++cnt[shell_pos[g]];
    }
    cout << max({cnt[0], cnt[1], cnt[2]}) << endl;
    return 0;
}