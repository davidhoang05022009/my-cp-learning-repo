#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll cnt = 0;
    ll a[n], b[n], c[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                if (a[i] + b[j] == c[k])
                {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}