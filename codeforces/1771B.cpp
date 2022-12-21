#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll N = 1e5 + 5, M = 1e5 + 5;
ll n, m;
ll mn[N];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
            mn[i] = n;
        for (ll i = 0; i < m; i++)
        {
            ll x, y;
            cin >> x >> y;
            if (x > y)
                swap(x, y);
            mn[x] = min(mn[x], y - 1);
        }
        for (ll i = n - 1; i; i--)
            mn[i] = min(mn[i], mn[i + 1]);
        ll ans = n;
        for (ll i = 0; i < n; i++)
        {
            ans += (mn[i] - i);
        }
        cout << ans << endl;
    }
    return 0;
}