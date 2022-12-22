#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    string m[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (m[i] != m[i + 1])
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}