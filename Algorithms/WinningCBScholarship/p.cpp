#include <iostream>
using namespace std;

bool isFeasible(long int students, long int totalCoupons, long int reqCoupons, long int extraCoupons, long int mid)
{
    if (mid * reqCoupons <= totalCoupons + (students - mid) * extraCoupons)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long int binarySearch(long int students, long int totalCoupons, long int reqCoupons, long int extraCoupons)
{
    long int s = 0;        // minimum: zero students get scholarship
    long int e = students; //maximum: all students get scholarship
    long int ans = -1;
    while (s <= e)
    {
        long int mid = (s + e) / 2;
        if (isFeasible(students, totalCoupons, reqCoupons, extraCoupons, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    long int n, m, x, y;
    cin >> n >> m >> x >> y;

    cout << binarySearch(n, m, x, y) << endl;

    return 0;
}