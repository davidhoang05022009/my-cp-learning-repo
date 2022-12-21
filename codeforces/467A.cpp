#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll p[n], q[n];
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i] >> q[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (q[i] - 2 >= p[i])
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}