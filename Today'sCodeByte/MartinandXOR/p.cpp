#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], odd = 0, even = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] & 1)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        cout << odd * even << "\n";
    }
    return 0;
}