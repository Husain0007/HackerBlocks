#include <iostream>
using namespace std;
#define ll long long

void fibonacci(int n)
{
    int a = 0; // 0th fibonacci
    int b = 1; //1st fibonacci
    int sum = 0;

    while (a <= n)
    {

        sum = a + b;
        cout << a << endl;
        a = b;
        b = sum;
    }
}

int main()
{
    ll n;
    cin >> n;
    fibonacci(n);

    return 0;
}