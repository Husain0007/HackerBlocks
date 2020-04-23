#include <iostream>
using namespace std;

void printDiamond(int n)
{
    cout << endl;

    int i, j = 0;

    // for top half
    for (i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j < n - i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    // for below half
    for (i = 0; i <= n - 1; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            for (int j = 0; j <= 2 * (n - i - 2); j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    printDiamond(n);
}