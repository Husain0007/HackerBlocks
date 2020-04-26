#include <iostream>
using namespace std;

char maze[1000][1000];
int soln[1000][1000];

bool ratInMaze(char maze[1000][1000], int soln[1000][1000], int i, int j, int m, int n)
{
    // Base-Case
    if (i == m && j == n)
    {
        soln[m][n] = 1;
        //Print the Path
        for (int i = 0; i <= m; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                cout << soln[i][j] << " ";
            }
            cout << endl;
        }
        exit(0);
        return true;
    }
    else //Recursive-Case
    {
        if (i > m || j > n)
        {
            return false;
        }
        if (maze[i][j] == 'X') // dead-end
        {
            return false;
        }

        //Assume soln exists through current cell

        soln[i][j] = 1;
        bool rightSuccess = ratInMaze(maze, soln, i, j + 1, m, n);
        bool downSuccess = ratInMaze(maze, soln, i + 1, j, m, n);

        // BackTracking
        soln[i][j] = 0;

        if (rightSuccess || downSuccess)
        {
            return true;
        }
        return false;
    }
}

int main()
{

    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    bool ans = ratInMaze(maze, soln, 0, 0, m - 1, n - 1);
    if (ans == false)
    {
        cout << -1 << endl;
    }
    return 0;
}