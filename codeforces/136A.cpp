#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, p;
    cin >> n;
    vector<int> f(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> p;
        f[p] = i;
    }
    cout << f[1];
    for (ll i = 2; i <= n; i++)
    {
        cout << " " << f[i];
    }
    cout << endl;
    return 0;
}