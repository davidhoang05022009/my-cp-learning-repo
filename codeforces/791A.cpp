#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b;
    cin >> a >> b;
    int numOfYears = 0;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        numOfYears++;
    }
    cout << numOfYears;
    return 0;
}