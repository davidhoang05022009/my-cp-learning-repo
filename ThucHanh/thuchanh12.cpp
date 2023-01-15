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
    int t, ans = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s = n;
        bool c = true;
        vector<int> v;
        while (n != 0)
        {
            v.push_back(n % 10);
            n /= 10;
        }
        for (int i = 0; i < (int)v.size() - 1; i++)
        {
            if (!(v[i] < v[i + 1]))
            {
                c = false;
                break;
            }
        }
        if (c)
            ans += s;
    }
    cout << ans << endl;
    return 0;
}