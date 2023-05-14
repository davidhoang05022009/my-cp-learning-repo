#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int n; cin >> n;
    vector<int> sum(3, 0);
    for (int i = 0; i < n; ++i) {
        int x, y, z; cin >> x >> y >> z;
        sum.at(0) += x;
        sum.at(1) += y;
        sum.at(2) += z;
    }
    bool c = 1;
    for (int i : sum) {
        if (i != 0) c = 0;
    }
    cout << (c ? "YES" : "NO") << endl;
    return 0;
}