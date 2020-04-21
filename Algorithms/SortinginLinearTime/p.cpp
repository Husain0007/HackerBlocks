#include <iostream>
#include <utility> // make_pair
#include <map>
using namespace std;
#define l long

void printMap(map<l, l> &freqMap)
{
    for (auto it : freqMap)
    {
        cout << "Key: " << it.first << " Value: " << it.second << endl;
    }
}

void countingSort(l *arr, l n)
{
    map<l, l> freqMap;

    for (l i = 0; i < n; i++)
    {
        freqMap[arr[i]]++;
    }
    int size = freqMap.size();

    //printMap(freqMap);
    l i = 0;
    for (auto it : freqMap)
    {
        l value = it.first;

        l freq = it.second;
        for (auto j = 0; j < freq; j++)
        {
            arr[i++] = value;
        }
    }
    for (auto i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{

    l n;
    cin >> n;
    l *arr = new l[n];

    for (l i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    countingSort(arr, n);
}