#include <iostream>
#include <deque>
#include <cmath>
using namespace std;

#define ll long long

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        ll x, a;
        cin >> x >> a;
        ll i = 1;
        deque<ll> digits;

        while (i <= x)
        {
            int dig = 0;
            int j = i;
            //dig = (ll)(floor(log(i) / log(a)) + 1);
            while (j != 0)
            {
                j = j / a;
                dig++;
            }
            digits.push_back(dig);
            // cout << "Number of digits for " << i << " in base " << a << " is :" << dig << endl;
            i++;
        }
        ll sum = 0;
        for (ll i = 0; i < digits.size(); i++)
        {
            sum = sum + digits[i];
        }
        cout << sum + 1 << endl;
    }
    return 0;
}