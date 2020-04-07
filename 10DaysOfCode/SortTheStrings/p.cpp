/* https://hack.codingblocks.com/app/practice/6/1042/problem*/
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;

string extractStringAtKey(string str, int key)
{
    char *s = strtok((char *)str.c_str(), " ");
    while (key > 1)
    {
        s = strtok(NULL, " ");
        key--;
    }
    return (string)s;
}

bool numericCompare(pair<string, string> A, pair<string, string> B)
{
    string key1, key2;
    key1 = A.second;
    key2 = B.second;

    return stoi(key1) < stoi(key2);
}

bool lexicoCompare(pair<string, string> A, pair<string, string> B)
{
    string key1, key2;
    key1 = A.second;
    key2 = B.second;

    return key1 < key2;
}

int main()
{

    int n;
    cin >> n;
    cin.get(); // to get '\n'

    string a[100];
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i]);
    }
    int key;
    string reversal, ordering;
    //Make a pair of string and it's corresponding key
    pair<string, string> strPair[100];

    for (int i = 0; i < n; i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractStringAtKey(a[i], key);
    }

    //Next perform sorting

    if (ordering == "numeric")
    {
        sort(strPair, strPair + n, numericCompare);
    }
    else
    {
        sort(strPair, strPair + n, lexicoCompare);
    }
    // Reversal
    if (reversal == "true")
    {
        for (int i = 0; i < n / 2; i++)
        {
            swap(strPair[i], strPair[n - i - 1]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << strPair[i].first << " ";
    }

    return 0;
}