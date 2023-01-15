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
void fileio(string inputFile, string outputFile = "")
{
    if (fopen(inputFile.c_str(), "r"))
    {
        freopen(inputFile.c_str(), "r", stdin);
        if (outputFile != "")
            freopen(outputFile.c_str(), "w", stdout);
    }
}

int main()
{
    unsync();
    fileio("Bai3.inp");
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0, b = 0;
    int n = s1.length(), m = s2.length();
    for (int i = 0; i <= m - n; i++)
    {
        bool c = true;
        for (int j = 0; j < n; j++)
        {
            if (s2[i + j] != s1[j])
            {
                c = false;
                break;
            }
        }
        if (c)
        {
            ++cnt;
            b += i + 1;
        }
    }
    cout << cnt << endl
         << b << endl;
    return 0;
}