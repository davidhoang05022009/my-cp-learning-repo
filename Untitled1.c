#include<iostream>

using namespace std;

int main() {
    // Input: 5, 10, 5, 11, 16
    // Output: 3 (10, 11, 16)
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] != arr[i]) {
                count++;
            }
            else {
                count--;
            }
        }
    }
    return 0;
}
