#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ll n;
	cin >> n;
	vector<bool> check(28, 0);
	for (ll i = 0; i < n; i++)
	{
		char inp;
		cin >> inp;
		check[tolower(inp) - 'a'] = true;
	}
	for (ll i = 0; i < 26; i++)
	{
		if (!check[i])
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
