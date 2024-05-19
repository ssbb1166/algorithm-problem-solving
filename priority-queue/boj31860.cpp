#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, k, d, y;
priority_queue<int> q;
vector<int> res;


int main()
{
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> d;
        q.push(d);
    }

    while (1) {
        int p = q.top();
        q.pop();

        if (p <= k)
            break;

        y = y / 2 + p;
        res.push_back(y);

        p -= m;
        q.push(p);
    }

    cout << res.size() << '\n';

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << '\n';

    return 0;
}
