#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
typedef long long ll;
ll T, n;

void matrix_mult(ll x[][2], ll y[][2])
{ //mulitplies two matrices %MOD
    ll a = ((x[0][0] * y[0][0]) % MOD + (x[0][1] * y[1][0]) % MOD) % MOD;
    ll b = ((x[0][0] * y[0][1]) % MOD + (x[0][1] * y[1][1]) % MOD) % MOD;
    ll c = ((x[1][0] * y[0][0]) % MOD + (x[1][1] * y[1][0]) % MOD) % MOD;
    ll d = ((x[1][0] * y[0][1]) % MOD + (x[1][1] * y[1][1]) % MOD) % MOD;
    x[0][0] = a;
    x[0][1] = b;
    x[1][0] = c;
    x[1][1] = d;
}

ll fib(ll n)
{ //returns nth fibonacci number
    ll A[2][2] = {{1, 1}, {1, 0}};
    ll res[2][2] = {{1, 0}, {0, 1}};
    while (n > 0)
    {
        if (n & 1)
        {
            matrix_mult(res, A);
        }
        matrix_mult(A, A);
        n >>= 1;
    }
    return res[1][0] % MOD;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> n;
        cout << fib(n) << "\n";
    }
}
