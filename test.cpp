#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 7, b = 3;
    int c = (a & b) + (a | b) + (a ^ b);
    cout << c;
    return 0;
}