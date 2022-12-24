#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int n = str.length();
        if (n > 10)
        {
            string abbr;
            abbr = str[0] + to_string(n - 2) + str[n - 1];
            cout << abbr << endl;
        }
        else
            cout << str << endl;
    }

    return 0;
}