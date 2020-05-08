#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long
#define INT_MAX 1e8

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = INT_MAX;

        //Factorization of K
        //p1, p2, p3, ..., pl

        int occ = 0;

        for (int i = 2; i * i <= k; i++)
        {
            if (k % i == 0)
            {
                occ = 0;
                while (k % i == 0)
                {
                    occ++;
                    k /= i;
                }
                //Find out the powers of 'i' in n! side by side
                int count = 0;
                ll p = i;
                while (p <= n)
                {
                    count += n / p;
                    p *= i; // p is powers of i
                }
                ans = min(ans, count / occ);
            }
        }
        if (k > 1) // if we have a prime factor left
        {
            int count = 0;
            int p = k;
            while (p <= n)
            {
                count += n / p;
                p *= k;
            }
            ans = min(ans, count);
        }
        if (ans == INT_MAX)
        {
            ans = 0;
        }
        cout << ans << endl;
    }
    return 0;
}
