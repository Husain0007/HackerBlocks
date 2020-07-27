#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int buySellStocks(int *arr, int n, int k)
{
    int profit = 0;
    int i = 0;
    while (k--)
    {
        if (n == 1)
        {
            return 0;
        }
        while ((i < n - 1) && arr[i] >= arr[i + 1])
        {
            i++;
        }
        if (i == n - 1)
        {
            break;
        }
        int buy = arr[i];
        i++;

        while ((i < n) && arr[i] >= arr[i - 1])
        {
            i++;
        }
        int sell = arr[i - 1];
        profit = profit + abs(sell - buy);
        // cout << "Buy : " << buy << " Sell: " << sell << endl;
        // cout << "Profit: " << profit << endl;
    }
    return profit;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int k, n;
        cin >> k >> n;
        int *arr = new int[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << buySellStocks(arr, n, k) << endl;
    }

    return 0;
}