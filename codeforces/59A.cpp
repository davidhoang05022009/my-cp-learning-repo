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
    for (char c : s)
    {
        if (c >= 'a' && c <= 'z')
            lNum++;
        else
            uNum++;
    }

    if (lNum >= uNum)
    {
        for (auto &c : s) {
            if (c >= 'A' && c <= 'Z')
                c += 32;
        }
    }
    else
    {
        for (auto &c : s) {
            if (c >= 'a' && c <= 'z')
                c -= 32;
        }
    }

    cout << s;
    return 0;
}