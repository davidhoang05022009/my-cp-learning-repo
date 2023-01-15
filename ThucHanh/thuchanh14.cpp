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

string RIGHT(string s, int n)
{
    vector<string> words;
    string ans = "";
    string w = "";
    int i = 0;
    int sl = s.length();
    for (; i < sl; i++)
    {
        if (s[i] != ' ' && s[i] != '\0')
            w += s[i];
        else
        {
            if (w != "")
            {
                words.push_back(w);
                w = "";
            }
        }
    }
    int ws = words.size();
    i = 0;
    if (n < ws)
        i = ws - n;
    for (; i < ws - 1; i++)
    {
        ans += words[i] + " ";
    }
    ans += words[ws - 1];
    return ans;
}

int main()
{
    unsync();
    string s;
    int n;
    getline(cin, s);
    cin >> n;
    cout << RIGHT(s, n) << endl;
    return 0;
}