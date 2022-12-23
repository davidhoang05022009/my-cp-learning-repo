#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            cout << "I love";
        else
            cout << "I hate";
        if (n > 1 && i <= n - 1)
            cout << " that ";
    }
    cout << " it" << endl;
    return 0;
}