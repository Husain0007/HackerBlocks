#include <iostream>
using namespace std;

int countBits(int n)
{
    int ans = 0;
    while (n > 0)
    {
        ans += (n & 1); // retrieve lowest bit
        n = n >> 1;     // right shift by 1
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << countBits(n) << endl;

    return 0;
}