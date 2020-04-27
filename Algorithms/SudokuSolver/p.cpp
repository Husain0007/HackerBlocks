#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

bool canPlace(int mat[][90], int i, int j, int n, int number)
{
    for (int x = 0; x < n; x++)
    {
        //Row and Col check
        if (mat[x][j] == number || mat[i][x] == number)
        {
            return false;
        }
    }

    int rn = sqrt(n);
    int sx = (i / rn) * rn;
    int sy = (j / rn) * rn;

    for (int x = sx; x < sx + rn; x++)
    {
        for (int y = sy; y < sy + rn; y++)
        {
            if (mat[x][y] == number)
            {
                return false;
            }
        }
    }

    return true;
}

bool solveSudoku(int mat[][90], int i, int j, int n)
{
    //Base-Case
    if (i == n)
    {
        //Print the Matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }

        return true;
    }
    // Case for row end
    if (j == n)
    {
        return solveSudoku(mat, i + 1, 0, n);
    }
    //Skip prefilled cells
    if (mat[i][j] != 0)
    {
        return solveSudoku(mat, i, j + 1, n);
    }
    //Recursive-Case
    //Fill the current cell with possible options
    for (int number = 1; number <= 9; number++)
    {
        if (canPlace(mat, i, j, n, number))
        {
            //Assume this is the right number
            mat[i][j] = number;
            bool couldWeSolve = solveSudoku(mat, i, j + 1, n);
            if (couldWeSolve == true)
            {
                return true;
            }
        }
    }
    //Backtrack here
    mat[i][j] = 0;
    return false;
}

int main()
{

    int n;
    cin >> n;

    int mat[90][90];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    solveSudoku(mat, 0, 0, n);

    return 0;
}