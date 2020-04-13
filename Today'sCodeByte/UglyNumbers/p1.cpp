#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
ull ugly(ull n)
{
	ull result[n];
	result[0] = 1;
	ull i2 = 0, i3 = 0, i5 = 0;
	ull uglyi2 = 2;
	ull uglyi3 = 3;
	ull uglyi5 = 5;
	ull res = 1;
	for (ull i = 1; i < n; i++)
	{
		res = min(uglyi2, min(uglyi3, uglyi5));
		result[i] = res;
		if (res == uglyi2)
		{
			i2++;
			uglyi2 = result[i2] * 2;
		}
		if (res == uglyi3)
		{
			i3++;
			uglyi3 = result[i3] * 3;
		}
		if (res == uglyi5)
		{
			i5++;
			uglyi5 = result[i5] * 5;
		}
	}
	return res;
}
int main()
{
	ull t;
	cin >> t;
	while (t--)
	{
		ull n;
		cin >> n;
		cout << ugly(n) << endl;
	}
}