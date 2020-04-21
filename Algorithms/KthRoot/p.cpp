#include <iostream>
#include <cmath>
using namespace std;

#define ll long long
bool isFeasible(ll n, ll k, ll mid)
{
    if (pow(mid, k) <= n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ll binarySearch(ll n, ll k)
{
    ll s = 1;
    ll e = (ll)pow(10, 15);
    ll ans = -1;
    while (s <= e)
    {
        ll mid = (s + e) / 2;
        if (isFeasible(n, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        ll n, k;
        cin >> n >> k;
        cout << binarySearch(n, k) << endl;
    }

    return 0;
}