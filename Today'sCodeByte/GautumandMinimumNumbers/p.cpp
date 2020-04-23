#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> seq;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        seq.push(num);
    }

    while (seq.size() != 1)
    {
        int min, min2;

        min = seq.top();
        seq.pop();
        min2 = seq.top();
        seq.pop();

        int type;
        cin >> type;

        if (type == 1)
        {
            int p;
            cin >> p;
            seq.push(min + min2 + p);
        }
        else
        {
            int q;
            cin >> q;
            seq.push(min - min2 + q);
        }
    }
    cout << seq.top() << endl;

    return 0;
}