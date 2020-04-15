/*Calculate Factorial of large numbers*/
#include <iostream>
using namespace std;

int multiply(int factor, int *result, int result_size)
{

    int carry = 0;
    for (int i = 0; i < result_size; i++)
    {
        int product = result[i] * factor + carry;
        result[i] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        result[result_size] = carry % 10;
        carry = carry / 10;
        result_size++;
    }

    return result_size;
}

void factorial(int n)
{
    int *result = new int[100000000];

    result[0] = 1;
    int result_size = 1;

    for (int i = 2; i <= n; i++)
    {
        result_size = multiply(i, result, result_size);
    }

    for (int i = result_size - 1; i >= 0; i--)
    {
        cout << result[i];
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;

    factorial(n);

    return 0;
}