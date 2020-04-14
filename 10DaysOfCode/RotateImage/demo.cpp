#include <iostream>
using namespace std;

void rotateprint(int **arr, int n, int m)
{

    for (int j = m - 1; j >= 0; j--)
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{

    int rows, cols;
    cin >> rows >> cols;

    int **array = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> array[i][j];
        }
    }

    rotateprint(array, rows, cols);

    return 0;
}