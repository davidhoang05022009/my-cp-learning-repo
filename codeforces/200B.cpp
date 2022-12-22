#include <bits/stdc++.h>
using namespace std;
using db = double;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    db n;
    cin >> n;
    db x = 0;
    for (int i = 0; i < n; i++)
    {
        db inp;
        cin >> inp;
        x += inp;
    }
    cout << fixed << setprecision(12) << x / n << endl;
    return 0;
}