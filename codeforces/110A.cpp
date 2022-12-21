#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll cnt = 0;
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            cnt++;
        n /= 10;
    }
    cout << (cnt == 4 || cnt == 7 ? "YES" : "NO");
    return 0;
}