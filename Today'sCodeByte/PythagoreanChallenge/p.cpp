#include <iostream>
#include <cmath>
using namespace std;

void pythagorean(int c)
{
    for (int a = 0; a * a <= c; a++)
    {

        for (int b = a; b * b <= c; b++)
        {

            if (a * a + b * b == c)
            {
                cout << "(" << a << "," << b << ") ";
            }
        }
    }
    cout << endl;
}

int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        int n;
        cin >> n;
        pythagorean(n);
    }

    return 0;
}