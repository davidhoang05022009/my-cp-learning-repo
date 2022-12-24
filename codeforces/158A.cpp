#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    int a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll kScore = a[k - 1];
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (a[i] >= kScore)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}