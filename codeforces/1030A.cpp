#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    bool hard = false;
    cin >> n;
    while (n--)
    {
        ll h;
        cin >> h;
        if (h == 1)
            hard = true;
    }
    cout << (hard ? "HARD" : "EASY") << endl;
    return 0;
}