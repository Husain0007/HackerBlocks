#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> permuts;

void permute(string in, int i)
{
    //Base-Case
    if (in[i] == '\0')
    {
        permuts.push_back(in);
        return;
    }

    //Recursive-Case
    for (int j = i; in[j] != '\0'; j++)
    {
        swap(in[i], in[j]);
        permute(in, i + 1);
        /*----BackTracking----*/
        swap(in[i], in[j]); // undo swap while returning from function call
    }
}

int main()
{
    map<string, int> unique;
    int n;
    cin >> n;
    string word;
    cin >> word;
    permute(word, 0);

    for (int i = 0; i < permuts.size(); i++)
    {
        unique[permuts[i]]++;
    }

    for (auto it : unique)
    {
        cout << it.first << endl;
    }

    return 0;
}