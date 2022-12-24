#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, p, q;
    cin >> n;
    cin >> p;
    ll s[n * 2];
    for (ll i = 0; i < p; i++)
    {
        cin >> s[i];
    }
    cin >> q;
    for (ll i = p; i < p + q; i++)
    {
        cin >> s[i];
    }
    sort(s, s + (p + q));
    ll cnt = 0;
    for (ll i = 0; i < p + q; i++)
    {
        if (s[i] != s[i + 1])
            cnt++;
    }
    cout << (cnt == n ? "I become the guy." : "Oh, my keyboard!") << endl;
    return 0;
}