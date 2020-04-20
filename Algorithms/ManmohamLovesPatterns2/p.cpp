#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 1 << endl;
        int i = 1;
        do
        {
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    cout << i;
                }
                else
                {
                    cout << 0;
                }
            }
            cout << endl;
            i++;
        } while (i != n);
    }
    return 0;
}