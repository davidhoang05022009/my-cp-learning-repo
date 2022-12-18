#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string name;
    cin >> name;
    int n = name.length();

    sort(name.begin(), name.end());
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (name[i] != name[i + 1])
        {
            cnt++;
        }
    }
    cout << (cnt % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
    return 0;
}