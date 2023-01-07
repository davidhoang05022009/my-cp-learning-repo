#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using db = double;
#define endl "\n"
void unsync()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
void fileio(string inputFile, string outputFile)
{
    if (fopen(inputFile.c_str(), "r"))
    {
        freopen(inputFile.c_str(), "r", stdin);
        freopen(outputFile.c_str(), "w", stdout);
    }
}

int main()
{
    unsync();
    int n, ans = 0;
    cin >> n;
    int p[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i][0] >> p[i][1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && p[i][0] == p[j][1])
                ans++;
        }
    }

    cout << ans << endl;
    return 0;
}