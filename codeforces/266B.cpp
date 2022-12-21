#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, t;
    cin >> n >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i - 1] == 'B')
            {
                swap(s[i], s[i - 1]);
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}