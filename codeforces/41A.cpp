#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    ll n = s.length() / 2, j = s.length() - 1;
    for (ll i = 0; i < n; i++)
    {
        swap(s[i], s[j]);
        j--;
    }
    cout << (s == t ? "YES" : "NO");
    return 0;
}