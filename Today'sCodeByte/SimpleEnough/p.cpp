#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define ll long long

vector<ll> sequence;

void seqGenerator(ll n)
{
    if (n == 1)
    {
        sequence.push_back(1);
        //sequence.push_back(1);
    }
    else if (n == 0)
    {
        sequence.push_back(0);
        //sequence.push_back(1);
    }
    else
    {
        seqGenerator(floor(n / 2));
        seqGenerator(n % 2);
        seqGenerator(floor(n / 2));
    }
}

int main()
{

    ll n = 0;
    ll l, r;
    cin >> n >> l >> r;
    seqGenerator(n);

    ll count = 0;

    for (ll i = l - 1; i <= r - 1; i++)
    {
        if (sequence[i] == 1)
        {
            count++;
        }
    }
    // for (ll i = 0; i < sequence.size(); i++)
    // {
    //     cout << sequence[i];
    // }
    cout << endl;

    cout << count << endl;
    return 0;
}