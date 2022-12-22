#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n)
{
    if (n % 2 == 0)
        return n / 2;
    return -(n + 1) / 2;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}