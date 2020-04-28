#include <bits/stdc++.h>
using namespace std;

string replacePi(string input)
{
    string output;

    int size = input.length();

    for (int i = 0; i < size; ++i)
    {

        if (i + 1 < size and input[i] == 'p' and input[i + 1] == 'i')
        {
            output += "3.14";
            i++;
        }

        else
        {
            output += input[i];
        }
    }

    return output;
}
int main()
{
    int cases;
    cin >> cases;
    while (cases--)
    {
        string input;
        cin >> input;
        cout << replacePi(input) << endl;
    }
    return 0;
}