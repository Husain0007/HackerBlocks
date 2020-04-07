#include <iostream>
using namespace std;

void magicalPark(char a[][100], int n, int m, int k, int s)
{

    bool success = true; // Piyush exits park

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch = a[i][j];
            if (s < k)
            {
                success = false;
                break;
            }
            if (ch == '*')
            {
                s += 5;
            }
            else if (ch == '.')
            {
                s -= 2;
            }
            else
            { // in case of '#'
                break;
            }
            // we loose 1 point per move
            // except for last column
            if (j != m - 1)
            {
                s--;
            }
        }
    }
    if (success)
    {
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{

    int n, m; // dimensions of park
    int k, s; // strength parameters
    cin >> n >> m >> k >> s;

    char park[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> park[i][j];
        }
    }

    magicalPark(park, n, m, k, s);
    return 0;
}