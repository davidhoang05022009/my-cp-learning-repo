#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n = 5;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= n; j++)
        {
            ll a;
            cin >> a;
            if (a == 1)
                cout << (abs(3 - i) + abs(3 - j));
        }
    }
    return 0;
}