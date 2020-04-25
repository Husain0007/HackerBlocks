#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ppb pop_back
#define ll long long

bool v[100000005];
vector<ll> prime_vector;
void Sieve()
{
    for (ll i = 2; i < 100000005; i += 2)
    {
        //even numbers have smallest prime factor 2
        v[i] = true;
    }
    prime_vector.pb(2);
    for (ll i = 3; i < 100000005; i += 2)
    {
        if (!v[i])
        {
            prime_vector.pb(i);
            for (ll j = i; (j * i) < 100000005; j += 2)
            {
                if (!v[j * i])
                    v[j * i] = true;
            }
        }
    }
}

int main()
{

    Sieve();

    ll queries;
    cin >> queries;

    while (queries--)
    {
        ll m, n;
        cin >> m >> n;

        for (ll i = m; i <= n; i++)
        {
            if (!v[i])
            {
                cout << i << endl;
            }
        }
    }
    return 0;
}