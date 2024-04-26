#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int n, s, e;
pair<int, int> t[200000];
priority_queue<int, vector<int>, greater<int>> lectures;


bool cmp(pair<int, int> t1, pair<int, int> t2)
{
    if (t1.first == t2.first)
        return t1.second < t2.second;
    return t1.first < t2.first;
}


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        t[i] = { s, e };
    }

    sort(t, t + n, cmp);

    lectures.push(0);

    for (int i = 0; i < n; i++) {
        if (lectures.top() <= t[i].first)
            lectures.pop();
        lectures.push(t[i].second);
    }

    cout << lectures.size() << '\n';

    return 0;
}
