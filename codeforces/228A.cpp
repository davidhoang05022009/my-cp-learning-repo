#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    set<ll> s;
    for (ll i = 0; i < 4; i++)
    {
        int inp;
        cin >> inp;
        s.insert(inp);
    }
    cout << (4 - s.size()) << endl;
    return 0;
}