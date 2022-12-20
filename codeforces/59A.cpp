#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    ll lNum = 0, uNum = 0, n = s.length();
    for (char &c : s)
    {
        if (c >= 'a' && c <= 'z')
            lNum++;
        else
            uNum++;
    }

    if (lNum > uNum || lNum == uNum)
    {
        for (ll i = 0; i < n; i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    }

    cout << s;
    return 0;
}