#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    ll a[t], b[t];
    for (ll i = 0; i < t; i++)
    {
        cin >> a[i] >> b[i];
    }
    for (ll i = 0; i < t; i++)
    {
        if (a[i] % b[i] == 0)
            cout << 0 << endl;
        else
            cout << b[i] - a[i] % b[i] << endl;
    }
    return 0;
}