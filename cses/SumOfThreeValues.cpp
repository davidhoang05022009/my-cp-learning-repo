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
    int n, x; cin >> n >> x;
    vector<ii> arr;
    for (int i = 1; i <= n; ++i) {
        int a; cin >> a;
        ii p;
        p = {a, i};
        arr.pb(p);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; ++i) {
        int l = 0, r = n - 1;
        while (l != r) {
            int target = x - arr[i].first;
            if (l != i && r != i && arr[l].first + arr[r].first == target) {
                cout << arr[i].second << " " << arr[l].second << " " <<  arr[r].second << endl;
                return 0;
            }
            if (arr[l].first + arr[r].first < target) l++;
            else r--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return 0;
}