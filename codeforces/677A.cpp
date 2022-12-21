#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, h;
    cin >> n >> h;
    ll cnt = 0;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > h)
            cnt++;
    }
    cout << (n - cnt) + (2 * cnt);
    return 0;
}