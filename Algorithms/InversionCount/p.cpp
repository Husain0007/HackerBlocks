#include <iostream>
using namespace std;

int merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int i = s;
    int j = (mid + 1);
    int k = s;

    int temp[100000];

    int count = 0; //cross inversions

    while (i <= mid && j <= e)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k++] = arr[j++];
            count += mid - i + 1;
        }
    }

    //fill the array if some elements are left
    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }
    while (j <= e)
    {
        temp[k++] = arr[j++];
    }

    //Copy all the elements back to arr
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[i];
    }

    return count;
}

int inversion_count(int *arr, int s, int e)
{
    if (s >= e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int x = inversion_count(arr, s, mid);
    int y = inversion_count(arr, mid + 1, e);
    int z = merge(arr, s, e);
    return x + y + z;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << inversion_count(arr, 0, n - 1) << endl;
    }

    return 0;
}