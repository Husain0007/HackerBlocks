#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#include <deque>
using namespace std;
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n, z;
        cin >> n >> z;
        int *arr = new int[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "hello\n";

        vector<vector<int>> max_pairs;

        bool flag[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                flag[i][j] = 0;
            }
        }

        sort(arr, arr + n);

        int curr = 0, max = 0;

        for (int i = 0; i < n; i++)
        {
            int j = i + 1;
            while (j != n - 1)
            {
                int sum = arr[i] + arr[j];
                if (sum % z == 0)
                {
                    j++;
                    continue;
                }
                else
                {
                    if (flag[i][j] == 0 && flag[j][i] == 0)
                    {
                        flag[i][j] = 1;
                        flag[j][i] = 1;
                        curr = arr[i] + arr[j];
                        if (curr >= max)
                        {
                            max = curr;
                            max_pairs[i].push_back(max);
                        }
                    }
                }
                j++;
            }
        }

        int count = 0;
        int first;
        for (int i = 0; i < n; i++)
        {
            int largest = INT_MIN;
            for (int j = 0; i < max_pairs[i].size(); j++)
            {
                if (max_pairs[i][j] > largest)
                {
                    largest = max_pairs[i][j];
                }
                else if (largest - max_pairs[i][j] == 0)
                {
                    first = j - 1;
                    break;
                }
            }
            for (int j = first; i < max_pairs[i].size(); j++)
            {
                if (max_pairs[i][j] == largest)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}