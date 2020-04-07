#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
#define ll long long

ll GCD(ll a, ll b)
{

    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, (a % b));
    }
}

int main()
{

    ll a = 0, b = 0;
    cin >> a >> b;
    //Put smaller number in a
    if (a < b)
    {
        swap(a, b);
    }

    int gcd = GCD(a, b);
    cout << gcd;

    return 0;
}