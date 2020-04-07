//Brute Force Approach
// O(N*N)

//**Naive Approach
#include <bits/stdc++.h>
using namespace std;

#define ll long long

// bool isPrime(int n)
// {
//     if (n == 1)
//     {
//         return false;
//     }
//     if (n == 2)
//     {
//         return true;
//     }
//     for (int i = 2; i < n; i++)
//     //for(int i=2; i*i<n; i++)  O(N*N^(0.5)) Slightly better algorithm, for N numbers
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

//Sieve Approach - Generate a array containing Prime Numbers

void prime_sieve(int *p)
{
    //first mark all odd numbers' as prime
    for (int i = 3; i <= 1000000; i += 2)
    {
        p[i] = 1;
    }
    //Sieve
    for (ll i = 3; i <= 10000; i += 2)
    {

        // if current number is not marked (it is prime)
        if (p[i] == 1) // mark all multiples of this number as not prime
        {
            //cout << "hello";
            //mark all the multiples of i as not prime
            for (ll j = i * i; j <= 1000000; j = j + i)
            {
                p[j] = 0;
            }
        }
    }
    //Special cases
    p[2] = 1;
    p[1] = p[0] = 0;
}

// Large array causing StackOverFlow
int main()
{
    int *p = new int[1000000]; //Used to allocate space on heap
    int *csum = new int[1000000];
    prime_sieve(p);

    //precompute primes upto an index i
    for (ll i = 1; i <= 1000000; i++)
    {
        csum[i] = csum[i - 1] + p[i];
    }

    int queries;
    cin >> queries;

    while (queries--)
    {
        int a, b;
        cin >> a >> b;
        cout << csum[b] - csum[a - 1] << endl;
    }

    return 0;
}