#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;

bool compare(pair<string, int> A, pair<string, int> B)
{
    if (A.second != B.second)
    {
        return A.second > B.second;
    }

    else
    {
        return A.first < B.first;
    }
}

main()
{

    int minSalary;
    cin >> minSalary;
    int num;
    cin >> num;
    pair<string, int> employees[num];
    int i = 0;

    while (num != 0)
    {
        string name;
        int salary;
        cin >> name >> salary;

        employees[i].first = name;
        employees[i].second = salary;

        i++;
        num--;
    }

    // cout << "----------" << endl;
    // for (int j = 0; j < i; j++)
    // {
    //     cout << employees[j].first << " " << employees[j].second << endl;
    // }

    //Sorting
    sort(employees, employees + i, compare);

    for (int j = 0; j < i; j++)
    {
        if (employees[j].second < minSalary)
        {
            continue;
        }
        else
        {
            cout << employees[j].first << " " << employees[j].second << endl;
        }
    }

    return 0;
}