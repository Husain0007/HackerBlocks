#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int maxElements(ll *items, int n)
{
    int current = 0;
    int max = 0;
    int size = 2;
    while (size != n)
    {
        ll set[size];
        int moduloSum = 0;

        size++;
    }
}

int main()
{
    int cases;
    while (cases--)
    {
        int n, z;
        cin >> n >> z;
        ll *items = new ll[100000];
        for (int i = 0; i < n; i++)
        {
            cin >> items[i];
        }
        int count = maxElements(items, n);
    }

    return 0;
}