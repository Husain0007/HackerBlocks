#include <iostream>
#include <cmath>
using namespace std;

int highestPowerAllowed(int n)
{
    int i = 0;
    while (n - pow(2, i) >= 0)
    {
        i++;
    }
    return --i;
}

int moves(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int i = highestPowerAllowed(n);
        return 1 + moves(n - pow(2, i));
    }
}

int main()
{
    int cases = 0;
    cin >> cases;
    while (cases--)
    {
        int n = 0;
        cin >> n;

        int i = 0;

        int jumps = moves(n);

        //moves = 1 + (n - pow(2, i));
        cout << jumps << endl;
    }
    return 0;
}