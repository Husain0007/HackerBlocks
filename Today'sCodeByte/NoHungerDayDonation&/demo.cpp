#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{

    int cases;
    cin >> cases;
    while (cases--)
    {
        int n = 0, z = 0;
        cin >> n >> z;
        ll *arr = new ll[100000];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int count = 0;
        int currItems;
        int maxItems = 0;
        bool flag;

        for (ll i = 2; i < n; i++)
        {
            int j = 0;
            currItems = 0;
            int sum = arr[i];
            while (7)
            {
                if (i != j)
                {
                    sum = sum + arr[j];
                    if (sum % 3 != 0)
                    {
                        currItems++;
                        if (currItems > maxItems)
                        {
                            maxItems = currItems;
                        }
                    }
                    else
                    {
                        sum = sum - arr[j];
                        j++;
                    }
                }
                j++;
            }
        }

        cout << count << endl;
    }

    return 0;
}