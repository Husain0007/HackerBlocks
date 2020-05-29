// CPP program to find minimum and maximum no. of pairs
#include <iostream>
#include <cmath>
using namespace std;

#define ll long long

void MinimumMaximumPairs(ll n, ll m)
{
    ll max_pairs = ((n - m + 1) * (n - m)) / 2;
    //cout << n - m + 1 << " " << n - m << " ";

    ll min_pairs = m * (((n - m) / m + 1) * ((n - m) / m)) / 2 + ceil((n - m) / double(m)) * ((n - m) % m);
    // cout << m * (((n - m) / (m + 1)) * ((n - m) / m)) / 2 << endl;

    cout << "Minimum no. of pairs = " << min_pairs << "\n";
    cout << "Maximum no. of pairs = " << max_pairs << "\n";
}

// Driver code
int main()
{
    ll n, m;
    cin >> n >> m;

    MinimumMaximumPairs(n, m);
    return 0;
}
