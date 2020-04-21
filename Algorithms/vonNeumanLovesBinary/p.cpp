#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{

    int cases;
    cin >> cases;

    while (cases--)
    {
        string num;
        cin >> num;
        reverse(num.begin(), num.end());
        int n = num.length();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x = num[i] - '0';
            sum = sum + pow(2, i) * x;
        }
        cout << sum << endl;
    }

    return 0;
}