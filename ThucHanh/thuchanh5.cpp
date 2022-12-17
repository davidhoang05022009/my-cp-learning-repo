#include<bits/stdc++.h>

using namespace std;

bool doiXung(string s) {
    int j = 0, m = s.length() - 1;
    while (j <= m) {
        if (s[j] != s[m]) return false;
        j++;
        m--;
    }
    return true;
}

int main()
{
    int n; cin >> n;
    cin.ignore();

    string output = "";

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        output += (doiXung(s) ? "1" : "0");
    }
    cout << output;

    return 0;
}

