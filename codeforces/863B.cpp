#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define endl "\n"
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin >> n;
    n *= 2;
    vector<int> w(n);
    for (auto &a : w) cin >> a;
    sort(w.begin(), w.end());
    int ans = INT_MAX, sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sum = 0;
            vector<int> v;
            for (int k = 0; k < n; ++k) {
                if (k != j && k != i) v.push_back(w[k]);
            }
            sort(v.begin(), v.end());
            for (int k = 0; k < v.size(); k += 2) {
                sum += (v[k + 1] - v[k]);
            }
            ans = min(ans, sum);
        }
    }
    cout << ans << endl;
    return 0;
}