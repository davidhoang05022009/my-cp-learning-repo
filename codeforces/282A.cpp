#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, x = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "X++" || cmd == "++X")
            x++;
        else if (cmd == "X--" || cmd == "--X")
            x--;
    }
    cout << x;
    return 0;
}