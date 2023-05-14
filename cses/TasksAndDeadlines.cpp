#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<pair<ll, ll>> t(n);
    for (auto &[a, d] : t) cin >> a >> d;
    sort(t.begin(), t.end());
    ll ans = 0, curr = 0;
    for (auto &[a, d] : t) {
        curr += a;
        ans += d - curr;
    }
    cout << ans << endl;
    return 0;
}