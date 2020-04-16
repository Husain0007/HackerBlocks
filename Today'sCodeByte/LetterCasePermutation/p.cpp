#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

// void permute(string input)
// {

//     int n = input.length();
//     int max = 1 << n;

//     // transform(input.begin(), input.end(), input.begin(), ::tolower);

//     for (int i = 0; i < max; i++)
//     {
//         string combination = input;
//         for (int j = 0; j < n; j++)
//         {
//             if ((int)input[j] >= 48 && (int)input[j] <= 57)
//             {
//                 j++;
//             }
//             if (((i >> j) & 1) == 1)
//                 combination[j] = toupper(input.at(j));
//         }
//         if (combination != input)
//             cout << combination << endl;
//     }
// }

vector<string> letterCasePermutation(string S)
{
    vector<string> res;
    int cnt = 0;
    for (char c : S)
    {
        if (c > '9')
            ++cnt;
    }
    for (int i = 0; i < (1 << cnt); ++i)
    {
        int j = 0;
        string word = "";
        for (char c : S)
        {
            if (c > '9')
            {
                if (((i >> j++) & 1) == 1)
                {
                    word.push_back(tolower(c));
                }
                else
                {
                    word.push_back(toupper(c));
                }
            }
            else
            {
                word.push_back(c);
            }
        }
        res.push_back(word);
    }
    return res;
}

int main()
{
    string word;
    cin >> word;
    vector<string> vect = letterCasePermutation(word);

    vector<string>::iterator ip;

    ip = unique(vect.begin(), vect.end());
    vect.resize(distance(vect.begin(), ip));

    for (ip = vect.begin(); ip != vect.end(); ++ip)
    {
        cout << *ip << endl;
    }
    return 0;
}