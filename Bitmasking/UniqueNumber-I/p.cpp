#include <iostream>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    cout << result;
    return 0;
}