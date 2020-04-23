#include <iostream>
using namespace std;
#define ll long
int main()
{

    ll n;
    cin >> n;
    ll sum = 0;
    ll p = 1;
    while (n != 0)
    {
        sum += (n % 10) * p;
        p *= 2;
        n /= 10;
    }
    cout << sum << endl;
    return 0;
}