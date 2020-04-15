/*
    Compiled and run on https://ide.codingblocks.com
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int compare(int x, int y)
{
    string a = to_string(x);
    string b = to_string(y);

    string ab = a.append(b);
    string ba = b.append(a);

    return ab.compare(ba) > 0 ? 1 : 0;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int m;
        cin >> m;

        int *arr = new int[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + m, compare);

        for (int i = 0; i < m; i++)
        {
            cout << arr[i];
        }
        cout << endl;
    }

    return 0;
}