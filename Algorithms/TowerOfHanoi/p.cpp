#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char aux)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Recursive Case
    else
    {
        // move n-1 disks from src to aux
        towerOfHanoi(n - 1, src, aux, dest);
        cout << "Moving ring " << n << " from " << src << " to " << dest << endl;
        towerOfHanoi(n - 1, aux, dest, src);
    }
}

int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}