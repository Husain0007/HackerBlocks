/*
Find the number of trailing zeroes in N!
Where N is in range [0, 10^9]
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int N = 0;
    cin >> N;
    int count = 0;
    int i = 1;
    //Total power of 5 present N dictates the total number of trailing zeroes

    while (floor(N / pow(5, i)) != 0)
    {
        count = count + floor(N / pow(5, i));
        i++;
    }

    cout << count;

    return 0;
}