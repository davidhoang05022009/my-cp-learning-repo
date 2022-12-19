#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str;
    cin >> str;
    ll cnt = 0, n = str.length();
    int arr[100];
    for (ll i = 0; i < n; i++)
    {
        if (str[i] == '+')
        {
            continue;
        }
        else
        {
            arr[cnt++] = str[i] - '0';
        }
    }
    sort(arr, arr + cnt);
    for (ll i = 0; i < cnt; i++)
    {
        cout << arr[i];
        if (i == cnt - 1)
        {
            break;
        }
        cout << '+';
    }
    return 0;
}