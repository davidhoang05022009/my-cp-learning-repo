#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll maxSize = 1e9;
ll a[20];
bool check[maxSize];

void fastio(char inputfile[], char outputfile[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    if (fopen(inputfile, "r"))
    {
        freopen(inputfile, "r", stdin);
        freopen(outputfile, "w", stdout);
    };
}

bool kiemTraDonDieu(ll n)
{
    vector<int> p;
    bool ans = true;
    while (n != 0)
    {
        p.push_back(n % 10);
        n /= 10;
    }

    for (ll i = 1; i < p.size() - 1; i++)
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
    for (ll i = 2; i < maxSize; i++)
    {
        check[i] = true;
    }

    for (ll i = 2; i < maxSize; i++)
    {
        if (check[i])
        {
            for (ll j = i * i; j < maxSize; j += i)
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
        for (ll j = pow(10, i); j > pow(10, i - 1) ; j--)
        {
            if (check[j] && kiemTraDonDieu(j))
            {
                b[i] = j;
                break;
            }
        }
    }

    cout << cnt << endl << b[k];
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

