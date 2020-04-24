#include <bits/stdc++.h>
using namespace std;
#define ll long long
// a-97,
int main()
{
    string word;
    cin >> word;

    ll queries;
    cin >> queries;

    while (queries--)
    {
        ll type;
        cin >> type;

        if (type == 1)
        {
            ll shift;
            cin >> shift;

            for (ll i = 0; i < word.size(); i++)
            {
                int num;
                num = (int)(word[i] - 97);
                num = (num + shift) % 26;
                word[i] = (char)(num + 97);
            }
        }
        else
        {
            ll length;
            cin >> length;

            for (ll i = 0; i < length; i++)
            {
                cout << word[i];
            }
            cout << endl;
        }
    }

    return 0;
}