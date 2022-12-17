#include<bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c, v0, v1, v2;
    cin >> a >> b >> c >> v0 >> v1 >> v2;

    a = min(a, b + c);
    b = min(b, a + c);
    c = min(c, a + b);

    double time1 = a / v0 + a / v1 + b / v0 + b / v1;
    double time2 = a / v0 + c / v1 + b / v2;
    double time3 = b / v0 + c / v1 + a / v2;

    cout << fixed << setprecision(5) << min(time1, min(time2, time3));

    return 0;
}
