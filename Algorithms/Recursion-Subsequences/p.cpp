#include <iostream>
#include <vector>
using namespace std;

long long int count;
vector<string> substrings;

void subsequences(char *in, char *out, int i, int j)
{
    //Base-Case
    if (in[i] == '\0')
    {
        out[j] = '\0';
        substrings.push_back(out);
        count += 1;
        return;
    }

    //Recursive-Case
    //1.Include the current character
    out[j] = in[i];
    subsequences(in, out, i + 1, j + 1);
    //2.Exclude the current character
    subsequences(in, out, i + 1, j);
}

int main()
{
    char in[100];
    cin >> in;

    char out[100];

    subsequences(in, out, 0, 0);

    for (int i = substrings.size() - 1; i >= 0; i--)
    {
        cout << substrings[i] << " ";
    }

    cout << count << endl;

    return 0;
}