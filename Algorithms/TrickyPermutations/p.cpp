#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//Using BackTracking

int number = 0;
vector<string> permuts;

bool compare(string A, string B)
{
    return lexicographical_compare(A.begin(), A.end(), B.begin(), B.end());
}

void permutations(char *in, int i)
{
    //Base-Case
    if (in[i] == '\0')
    {
        permuts.push_back(in);
        number++;
        return;
    }

    //Recursive-Case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permutations(in, i + 1);
        /*----BackTracking----*/
        swap(in[i], in[j]); // undo swap while returning from function call
    }
}

int main()
{

    char in[100];

    cin >> in;

    permutations(in, 0);

    //cout << number << endl;
    //Lexicographically Sorted (Dictionary Order)
    sort(permuts.begin(), permuts.end(), compare);

    auto it = unique(permuts.begin(), permuts.end());
    permuts.resize(distance(permuts.begin(), it));

    for (int i = 0; i < permuts.size(); i++)
    {
        cout << permuts[i] << endl;
    }

    return 0;
}