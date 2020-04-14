#include <iostream>
#include <algorithm>
using namespace std;

#define l long

l findWater(l *arr, l n)
{

    l *left = new l[n];
    l *right = new l[n];

    l water = 0;

    left[0] = arr[0];
    for (l i = 1; i < n; i++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }

    right[n - 1] = arr[n - 1];
    for (l i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], arr[i]);
    }

    for (l i = 0; i < n; i++)
    {
        water += min(left[i], right[i]) - arr[i];
    }

    return water;
}

int main()
{

    l n = 0;
    cin >> n;
    l *arr = new l[n];

    for (l i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findWater(arr, n);

    return 0;
}