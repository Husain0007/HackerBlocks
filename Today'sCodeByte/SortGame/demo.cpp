#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main()
{

    int arr[6] = {12, 5, 2, 34, 5, 12};
    sort(arr, arr + 6, compare);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}