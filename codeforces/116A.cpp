#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    ll p = 0, m = 0;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        p -= a;
        p += b;
        m = max(m, p);
    }
    cout << m;
    return 0;
}