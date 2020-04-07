#include <iostream>
using namespace std;

void spiralprint(int a[][100], int m, int n)
{
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;
    //Print it
    while (startRow <= endRow && startCol <= endCol)
    {
        //First Row
        for (int i = startCol; i <= endCol; i++)
        {
            cout << a[startRow][i] << " ";
        }
        startRow++;
        for (int i = startRow; i <= endRow; i++)
        {
            cout << a[i][endCol] << " ";
        }
        endCol--;
        //Bottom Row
        if (endRow > startRow) // to address rect. matrices
        {
            for (int i = endCol; i >= startCol; i--)
            {
                cout << a[endRow][i] << " ";
            }
            endRow--;
        }

        //start Col
        if (endCol > startCol) // for rect. matrices
        {
            for (int i = endRow; i >= startRow; i--)
            {
                cout << a[i][startCol] << " ";
            }
            startCol++;
        }
    }
}

int main()
{

    int rows, cols;
    cin >> rows >> cols;

    int array[100][100] = {0};

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }

    spiralprint(array, rows, cols);

    return 0;
}