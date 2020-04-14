#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

#define ll long long

ll maxBitonicSubArray(ll *arr, ll n)
{
    // Length of increasing subarray
    // ending at all indexes
    ll *inc = new ll[n];

    // Length of decreasing subarray
    // starting at all indexes
    ll *dec = new ll[n];
    ll i, max;

    // length of increasing sequence
    // ending at first index is 1
    inc[0] = 1;

    // length of increasing sequence
    // starting at first index is 1
    dec[n - 1] = 1;

    // Step 1) Construct increasing sequence array
    for (i = 1; i < n; i++)
        inc[i] = (arr[i] >= arr[i - 1]) ? inc[i - 1] + 1 : 1;

    // Step 2) Construct decreasing sequence array
    for (i = n - 2; i >= 0; i--)
        dec[i] = (arr[i] >= arr[i + 1]) ? dec[i + 1] + 1 : 1;

    // Step 3) Find the length of
    // maximum length bitonic sequence
    max = inc[0] + dec[0] - 1;
    for (i = 1; i < n; i++)
        if (inc[i] + dec[i] - 1 > max)
            max = inc[i] + dec[i] - 1;

    return max;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {

        ll n;
        cin >> n;
        ll *arr = new ll[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << maxBitonicSubArray(arr, n) << endl;
    }

    return 0;
}