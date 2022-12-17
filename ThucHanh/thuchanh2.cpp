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

    int n, sum = 0, length = 0; cin >> n;

    while (n != 0) {
        sum += n % 10;
        n /= 10;
        length++;
    }
    cout << sum << endl << length;

    return 0;
}

