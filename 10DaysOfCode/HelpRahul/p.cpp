#include <iostream>
using namespace std;

/*     /    
      / |  
     /  |  /
    /   | /     ==> Since the Array is rotated we have
   /    |/          a graphical representation like this
      4 5 1 2 3
*/
//Retrieve index from sorted rotated array

int find(int a[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (a[s] <= a[mid])
        { // midpoint lies in the first part
            if (key >= a[s] && key <= a[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        { //midpoint lies in second part of array
            if (key >= a[mid] && key <= a[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{

    int n;
    cin >> n;
    int *a = new int[1000000];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cin >> key;

    int index = find(a, n, key);
    cout << index;

    return 0;
}