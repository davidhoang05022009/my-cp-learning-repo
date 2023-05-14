#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.length();
    vector<int> ans_v;
    for (int i = 0; i < n; ++i) {
        string s1 = string() + s[i] + s[i + 1];
        if (s1 == "--") {
            ans_v.push_back(2);
            ++i;
        }
        else if (s1 == "-.") {
            ans_v.push_back(1);
            ++i;
        }
        else ans_v.push_back(0);
    }
    string ans = "";
    for (int i : ans_v) {
        ans += to_string(i);
    }
    cout << ans << endl;
    return 0;
}