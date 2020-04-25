#include <iostream>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll queries;
    cin >> queries;

    while (queries--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll count = 0;
        for (int i = (l - 1); i <= (r - 1); i++)
        {
            if (arr[i] >= k)
            {
                count += 1;
            }
        }
        cout << count << endl;
    }

    return 0;
}