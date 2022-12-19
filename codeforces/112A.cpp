#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1, s2;
    cin >> s1 >> s2;
    ll n1 = (ll)s1.length(), n2 = (ll)s2.length();
    for (ll i = 0; i < n1; i++)
    {
        s1[i] = tolower(s1[i]);
    }
    for (ll i = 0; i < n2; i++)
    {
        s2[i] = tolower(s2[i]);
    }
    bool isEqual = false, isBigger = false, isSmaller = false;
    for (ll i = 0; i < n1; i++)
    {
        if (s1[i] == s2[i])
            isEqual = true;
        if (s1[i] < s2[i])
        {
            isEqual = false;
            isSmaller = true;
            break;
        }
        if (s1[i] > s2[i])
        {
            isEqual = false;
            isBigger = true;
            break;
        }
    }
    if (isEqual)
        cout << 0;
    if (isSmaller)
        cout << -1;
    if (isBigger)
        cout << 1;
    return 0;
}