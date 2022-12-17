#include<bits/stdc++.h>
using namespace std;

void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main() {
    // Input: 5, 10, 5, 11, 16
    // Output: 3 (10, 11, 16)
    fastio();

    int n, count = 0;
    cin >> n;
    int a[n + 1];
    int b[10000] = {0};
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        b[a[i]]++;
    }

    for (int i = 1; i <= n ; ++i) {
        if (b[a[i]] == 1) ++count;
    }

    cout << count;
    return 0;
}
