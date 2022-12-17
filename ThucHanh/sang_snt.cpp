#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    bool check[n + 1];

    for (ll i = 2; i <= n; i++)
    {
        check[i] = true;
    }

    for (ll i = 2; i <= n; i++)
    {
        if (check[i])
        {
            for (ll j = 2 * i; j <= n; j += i)
            {
                check[j] = false;
            }
        }
    }

    for (ll i = 2; i <= n; i++)
    {
        if (check[i]) cout << i << endl;
    }

    return 0;
}
