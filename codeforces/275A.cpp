#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl "\n"

int p[4][4], t[4][4];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> p[i][j];
            t[i][j] = p[i][j];
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (p[i][j] != 0) {
                t[i][j - 1] += p[i][j];
                t[i][j + 1] += p[i][j];
                t[i - 1][j] += p[i][j];
                t[i + 1][j] += p[i][j];
            }
        }
    }
    for (int i = 1; i <= 3; ++i) {
        for (int j = 1; j <= 3; ++j) {
            if (t[i][j] % 2) cout << "0";
            else cout << "1";
        }
        cout << endl;
    }
    return 0;
}