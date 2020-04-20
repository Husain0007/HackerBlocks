#include <iostream>
using namespace std;

int fact(int n)
{
    int result[10] = {0};
    if (n >= 0)
    {
        result[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            result[i] = i * result[i - 1];
        }
        return result[n];
    }
    return 0;
}

void PascalsTriangle(int n)
{
    if (n == 1)
    {
        cout << 1 << endl;
    }

    else
    {
        int i = 0;
        do
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int j = 0; j <= i; j++)
            {
                cout << fact(i) / (fact(i - j) * fact(j)) << " ";
            }
            cout << endl;
            i++;
        } while (i != n);
    }
}

int main()
{
    int n;
    cin >> n;
    PascalsTriangle(n);
    return 0;
}