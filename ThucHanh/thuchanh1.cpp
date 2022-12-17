#include<bits/stdc++.h>

using namespace std;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastio();

    int n;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }

    if (n != 1)
    {
        cout << n;
    }

    return 0;
}
