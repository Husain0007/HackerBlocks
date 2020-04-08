#include <iostream>
using namespace std;

int main()
{

    int n = 0;
    cin >> n;

    //Print certain stars
    //First Component
    cout << "*";
    for (int i = 1; i <= (n - 3) / 2; i++)
    {
        cout << " ";
    }
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        cout << "*";
    }
    cout << endl;
    //Second Component
    for (int rows = 1; rows <= (n - 3) / 2; rows++)
    {
        cout << "*";
        for (int i = 1; i <= (n - 3) / 2; i++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    //Third Component
    for (int i = 1; i <= n; i++)
    {
        cout << "*";
    }
    cout << endl;

    //Fourth Component
    for (int rows = 1; rows <= (n - 3) / 2; rows++)
    {
        //spaces
        for (int i = 1; i <= (n - 3) / 2 + 1; i++)
        {
            cout << " ";
        }
        //star
        cout << "*";
        //spaces
        for (int i = 1; i <= (n - 3) / 2; i++)
        {
            cout << " ";
        }

        //start
        cout << "*" << endl;
    }
    //Fifth Component
    //stars
    for (int i = 1; i <= (n + 1) / 2; i++)
    {
        cout << "*";
    }

    //spaces
    for (int i = 1; i <= (n - 3) / 2; i++)
    {
        cout << " ";
    }

    //single star
    cout << "*";
    return 0;
}