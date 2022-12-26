#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    string s;
    set<char> a;
    getline(cin, s);
    for (ll i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') a.insert(s[i]);
    }
    cout << a.size() << endl;
}
