#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < k; i++)
    {
        ll lastDigit = n % 10;
        if (lastDigit != 0)
            n--;
        else
            n /= 10;
    }
    cout << n;
    return 0;
}