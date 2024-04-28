#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int n, s, e;
pair<int, int> t[200000];
priority_queue<int, vector<int>, greater<int>> lectures;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s >> e;
        t[i] = { s, e };
    }

    sort(t, t + n);

    lectures.push(0);

    for (int i = 0; i < n; i++) {
        if (lectures.top() <= t[i].first)
            lectures.pop();
        lectures.push(t[i].second);
    }

    cout << lectures.size() << '\n';

    return 0;
}
