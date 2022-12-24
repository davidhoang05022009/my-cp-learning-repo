#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n, a;
    cin >> n >> a;
    int minA = a,
        maxA = a,
        minI = 0,
        maxI = 0;
    for (ll i = 1; i < n; i++)
    {
        cin >> a;
        if (a > maxA)
        {
            maxA = a;
            maxI = i;
        }
        if (a <= minA)
        {
            minA = a;
            minI = i;
        }
    }
    cout << maxI + (n - 1 - minI) - (minI < maxI ? 1 : 0) << endl;
    return 0;
}