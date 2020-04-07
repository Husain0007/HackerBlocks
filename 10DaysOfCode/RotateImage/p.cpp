#include <iostream>
using namespace std;

int main()
{

    int rows;
    cin >> rows;

    int array[100][100] = {0};

    int val = 1;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            array[i][j] = val++;
        }
    }
    // cout << "begining";
    for (int j = rows - 1; j >= 0; j--)
    {
        //cout << "start";
        for (int i = 0; i < rows; i++)
        {
            //cout << "inside";
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    // cout << "ending";
    return 0;
}