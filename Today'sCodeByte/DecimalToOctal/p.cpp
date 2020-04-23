#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    ll p = 1;
    while (n != 0)
    {
        sum += (n % 8) * p;
        p *= 10;
        n /= 8;
    }
    cout << sum << endl;
    return 0;
}