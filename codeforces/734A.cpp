#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll a = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a > d)
        cout << "Anton" << endl;
    else if (a < d)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;
    return 0;
}