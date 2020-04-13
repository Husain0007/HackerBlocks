#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long

int main()
{

    ll num = 0;
    cin >> num;

    ll *octal = new ll[100000000];
    ll count = 0;
    while (num != 0)
    {
        octal[count] = num % 8;
        num = num / 8;
        count++;
    }

    reverse(octal, octal + count);

    for (ll j = 0; j < count; j++)
    {
        cout << octal[j];
    }

    return 0;
}