#include <bits/stdc++.h>

using namespace std;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool kiemTraSoNguyenTo(int x)
{
    if (x < 2)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main()
{
    fastio();

    int n;
    cin >> n;

    for (int i = 2; i < n; i++)
    {
        while (x % i == 0 && kiemTraSoNguyenTo(i))
        {
            cout << i;
            n /= i;
        }
    }

    return 0;
}
