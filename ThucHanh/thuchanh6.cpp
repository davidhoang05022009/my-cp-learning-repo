#include<bits/stdc++.h>
using namespace std;

using ll = long long;
char inputfile[] = "SPRIME.INP";
char outputfile[] = "SPRIME.OUT";

bool check[sizeof(long long)];

bool superPrime(int a, int b)
{
    bool hasSuperPrime = false;
    for (ll i = a; i <= b; i++)
    {
        check[i] = true;
    }

    for (ll i = a; i <= b; i++)
    {
        if (check[i] == true)
        {
            for (ll j = i*i; j <= b; j+=i)
            {
                check[i] = true;
            }
            int p = i;
            while (p != 0)
            {
                if (p < 2)
                {
                    check[i] = false;
                    break;
                }
                for (int m = 2; m <= sqrt(p); m++)
                {
                    if (p % m == 0)
                    {
                        check[i] = false;
                        break;
                    }
                }
                p /= 10;
            }
            if (check[i])
            {
                hasSuperPrime = true;
                cout << i << endl;
            }
        }
    }

    return hasSuperPrime;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (fopen(inputfile, "r"))
    {
        freopen(inputfile, "r", stdin);
        freopen(outputfile, "w", stdout);
    };

    ll a, b;
    cin >> a >> b;
    if (a < 2) a = 2;

    if(!superPrime(a, b)) cout << "NO";

    return 0;
}

