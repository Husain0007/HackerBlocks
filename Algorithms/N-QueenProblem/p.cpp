#include <iostream>
using namespace std;

int number = 0;

bool isSafe(int board[][10], int i, int j, int n)
{
    // You can check for col
    for (int row = 0; row < i; row++)
    {
        if (board[row][j] == 1)
        {
            return false;
        }
    }
    // You can check for Left Diagonal
    int x = i;
    int y = j;

    while (x >= 0 && y >= 0)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y--;
    }

    //You can check for Right Diagonal
    x = i;
    y = j;
    while (x >= 0 && y < n)
    {
        if (board[x][y] == 1)
        {
            return false;
        }
        x--;
        y++;
    }

    // The position is now safe, col and diagonals
    return true;
}

bool solveNQueen(int board[][10], int i, int n)
{
    //Base-Case
    if (i == n)
    {
        //You have successfully placed n queens in n rows (0,..., n-1)
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (board[i][j] == 1)
                {
                    cout << "{" << i + 1 << "-" << j + 1 << "} ";
                }
            }
        }
        cout << " ";
        number += 1;
        return false; //
    }

    //Recursive-Case
    //Try to place the queen in the current row and call on the remaining part which will be solved by recursion
    for (int j = 0; j < n; j++)
    {
        // Have to check if i,j pos is safe to place the queen or not
        if (isSafe(board, i, j, n))
        { //Place the Queen Assuming i,j is the right position
            board[i][j] = 1;

            bool nextQueenRakhPaye = solveNQueen(board, i + 1, n);
            if (nextQueenRakhPaye)
            {
                return true;
            }
            // Means i,j is not the right position
            board[i][j] = 0; //BackTrack
        }
    }
    return false; // You have tried for all pos in current row, but could not place the Queen, curr row returns false to previous queen
}

int main()
{
    int n;
    int board[10][10] = {0};

    cin >> n;

    solveNQueen(board, 0, n);
    cout << "\n"
         << number << endl;

    return 0;
}