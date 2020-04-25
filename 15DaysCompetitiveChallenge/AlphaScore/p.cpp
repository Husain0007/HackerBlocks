#include <iostream>
#include <stack>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ll n;
    cin >> n;
    ll *arr = new ll[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll count = 0;

    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (arr[j] < arr[i])
            {
                count = (count % mod + arr[j] % mod) % mod;
            }
        }
    }
    cout << count << endl;
}