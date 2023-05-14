#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

vector<int> freq_cnt(string s) {
    vector<int> freq(26, 0);
    for (char c : s) freq.at(c - 'a')++;
    return freq;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    freopen("blocks.in", "r", stdin);
    freopen("blocks.out", "w", stdout);
    int n; cin >> n;
    vector<pair<string, string>> words(n);
    for (auto &[w1, w2] : words) cin >> w1 >> w2;
    vector<int> max_blks(26, 0);
    for (const auto &[w1, w2] : words) {
        vector<int> freq1 = freq_cnt(w1),
            freq2 = freq_cnt(w2);
        for (int c = 0; c < 26; ++c) {
            max_blks[c] += max(freq1.at(c), freq2.at(c));
        }
    }
    for (auto &x : max_blks) cout << x << endl;
    return 0;
}