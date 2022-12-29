#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;

ll calc(ll a, ll b)
{
    return b * 2 - a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, a, b, q;
    cin >> n >> a >> b >> q;
    ll x[q], mp[n];
    for (ll i = 0; i < q; i++)
    {
        cin >> x[i];
    }
    mp[0] = a;
    mp[1] = b;
    for (ll i = 2; i < n; i++)
    {
        mp[i] = calc(mp[i - 2], mp[i - 1]);
    }
    for (ll i = 0; i < q; i++)
    {
        cout << abs(mp[x[i] - 1] % mod) << endl;
    }
    return 0;
}