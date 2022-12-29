#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

bool kiemTraSoCoiMo(ll n)
{
    if (n == 0)
        return false;
    while (n != 0)
    {
        ll i = n % 10;
        if (!(i == 1 || i == 2 || i == 3 || i == 5 || i == 7))
            return false;
        n /= 10;
    }
    return true;
}

void solve(string s)
{
    ll cnt = 0, tmp = 0, p = 0;
    for (ll i = 0; i < (ll)s.length(); i++)
    {
        ll num = s[i] - '0';
        if (kiemTraSoCoiMo(num))
        {
            cnt++;
            tmp = tmp * 10 + (num);
        }
        else
        {
            if (kiemTraSoCoiMo(tmp))
            {
                p = max(tmp, p);
            }
            tmp = 0;
        }
    }
    cout << cnt << endl
         << p << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    solve(s);
    return 0;
}
