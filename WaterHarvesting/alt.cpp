
// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;
#define l long
// Function to return the maximum
// water that can be stored
int maxWater(l *arr, l n)
{

    // To store the maximum water
    // that can be stored
    l res = 0;

    // For every element of the array
    for (l i = 1; i < n - 1; i++)
    {

        // Find the maximum element on its left
        l left = arr[i];
        for (l j = 0; j < i; j++)
            left = max(left, arr[j]);

        // Find the maximum element on its right
        l right = arr[i];
        for (l j = i + 1; j < n; j++)
            right = max(right, arr[j]);

        // Update the maximum water
        res = res + (min(left, right) - arr[i]);
    }

    return res;
}

// Driver code
int main()
{
    l n = 0;
    cin >> n;
    l *arr = new l[n];

    for (l i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << maxWater(arr, n);

    return 0;
}