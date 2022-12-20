#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll k, n, w;
    cin >> k >> n >> w;
    ll t = 0;
    for (ll i = 1; i <= w; i++)
    {
        t += i * k;
    }
    if (t <= n)
        cout << 0;
    else
        cout << t - n;

    return 0;
}