#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int checkPrime(int n)
{

    if (n == 1 || n < 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int CBCount(int *arr, int n, bool *flag)
{
    static int totalCount = 0;
    static int size = 1;

    for (int j = 0; j <= n - size; j++)
    {
        int sum = 0;
        int i = 0;
        cout << "Size is : " << size << " ";
        while (i < size)
        {
            if (flag[j + i] == 0)
            {
                sum = sum + arr[j + i] * pow(10, i);
                cout << "Sum is : " << sum << endl;
            }
            else
            {
                break;
            }
            i++;
            //cout << "sum is still " << sum << endl;
        }
        if (checkPrime(sum))
        {
            cout << sum << " is a Prime\n";
            totalCount = totalCount + 1;
            for (int q = j; q < size + j; q++)
            {
                flag[q] = 1;
            }
        }
    }
    cout << endl;
    while (size != n)
    {
        size++;
        CBCount(arr, n, flag);
    }

    return totalCount;
}

int main()
{
    int n;
    cin >> n;
    string word;
    cin >> word;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = word[i] - '0';
    }

    bool *flag = new bool[n];
    fill(flag, flag + n, 0);
    cout << "This is the flag array: ";
    for (int i = 0; i < n; i++)
    {
        cout << flag[i] << " ";
    }
    reverse(arr, arr + n);

    cout << "\nThis is after reversing: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << CBCount(arr, n, flag) << endl;
}