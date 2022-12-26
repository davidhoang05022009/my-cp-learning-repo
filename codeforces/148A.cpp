#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll k, l, m, n, d;
	cin >> k >> l >> m >> n >> d;
	ll cnt = d;

	if (k == 1 || l == 1 || m == 1 || n == 1)
	{
		cout << d << endl;
	}
	else
	{
		for (ll i = 0; i <= d; i++)
		{
			if ((i % k != 0) && (i % l != 0) && (i % m != 0) && (i % n != 0))
				cnt--;
		}
		cout << cnt << endl;
	}
}
