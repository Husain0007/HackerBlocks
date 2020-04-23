#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n, sb, db;
    cin >> sb >> db >> n;
    cout << "Source base: " << sb << endl;
    cout << "Desired base: " << db << endl;
    ll m = 0;
    ll p = 1;
    while (n != 0)
    {
        m += (n % 10) * p;
        p *= sb;
        n /= 10;
    }
    ll sum = 0;
    p = 1;
    while (m != 0)
    {
        sum += (m % db) * p;
        p *= 10;
        m /= db;
    }
    cout << sum << endl;

    return 0;
}