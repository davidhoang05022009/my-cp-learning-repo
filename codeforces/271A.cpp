#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool distinct(ll y)
{
    vector<ll> digits(10, 0);
    while (y != 0)
    {
        ll digit = y % 10;
        digits[digit]++;
        if (digits[digit] > 1)
            return false;
        y /= 10;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll y;
    cin >> y;
    y++;
    while (!distinct(y))
    {
        y++;
    }
    cout << y;
    return 0;
}