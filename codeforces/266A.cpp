#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    char s[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt;
    return 0;
}