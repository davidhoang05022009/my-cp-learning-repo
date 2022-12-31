#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll maxSize = 1e9;
ll a[20];
vector<bool> check(maxSize + 1, true);

void fastio(string inputfile, string outputfile)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen(inputfile.c_str(), "r"))
    {
        freopen(inputfile.c_str(), "r", stdin);
        freopen(outputfile.c_str(), "w", stdout);
    }
}

bool kiemTraDonDieu(ll n)
{
    int p[10];
    bool ans = true;
    int j = 0;
    while (n != 0)
    {
        p[j] = n % 10;
        n /= 10;
        j++;
    }

    for (ll i = 1; i < j; i++)
    {
        if (p[i] > p[i - 1] && p[i] > p[i + 1])
            ans = true;
        else if (p[i] < p[i - 1] && p[i] < p[i + 1])
            ans = true;
        else
        {
            ans = false;
            break;
        }
    }
    return ans;
}

void sangSNT()
{
    check[0] = check[1] = false;
    for (ll i = 2; i * i <= maxSize; i++)
    {
        if (check[i])
        {
            for (ll j = i * i; j <= maxSize; j += i)
            {
                check[j] = false;
            }
        }
    }
}

void solve(ll n, ll k)
{
    ll cnt = 0;
    ll b[10];
    sangSNT();

    for (ll i = 0; i < 20; i++)
    {
        if (check[a[i]] && a[i] > 10 && kiemTraDonDieu(a[i]))
            cnt++;
    }

    for (ll i = 2; i < 10; i++)
    {
        for (ll j = pow(10, i); j > pow(10, i - 1); j--)
        {
            if (check[j] && kiemTraDonDieu(j))
            {
                b[i] = j;
                break;
            }
        }
    }

    cout << cnt << endl
         << b[k];
}

int main()
{
    fastio("inp", "out");
    ll n, k;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;
    solve(n, k);
    return 0;
}
