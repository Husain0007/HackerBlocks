#include <iostream>
#include <vector>
using namespace std;

const int n = 100000;

vector<int> primes;

int p[n] = {0};

void sieve()
{

    for (int i = 2; i <= n; i++)
    {
        if (p[i] == 0)
        {
            // storei in the primes vector
            primes.push_back(i);
            //mark all multiples of i as not prime
            for (int j = i; j <= n; j += i)
            {
                p[j] = 1;
            }
        }
    }
}

int main()
{
    sieve(); // build sieve once for all

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> m >> n;

        bool *segment = new bool[n - m + 1];

        for (int i = 0; i < n - m + 1; i++)
        {
            segment[i] = 0;
        }

        //here segmented sieve logic
        for (auto x : primes)
        {
            if (x * x > n)
            { // stop the loop if remaining primes are not needed
                break;
            }
            int start = (m / x) * x;
            // mark all multiples in range start to n as not prime

            if (x >= m && x <= n) // prime lies in segmented sieve range
            {
                start = x * 2;
            }

            for (int i = start; i <= n; i += x)
            {
                segment[i - m] = 1;
            }
        }

        //Loop over the range m..n and print the primes
        for (int i = m; i <= n; i++)
        {
            if (segment[i - m] == 0 && i != 1)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }

    return 0;
}