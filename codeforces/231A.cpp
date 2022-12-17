#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n, p = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        int cnt = 0;
        for (ll j = 0; j < 3; j++)
        {
            ll sure;
            cin >> sure;
            if (sure == 1)
                cnt++;
        }
        if (cnt > 1)
            p++;
    }
    cout << p;
    return 0;
}