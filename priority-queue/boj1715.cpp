#include <iostream>
#include <queue>
using namespace std;


int n, cnt, x, y, res;
priority_queue<int, vector<int>, greater<int>> pq;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cnt;
        pq.push(cnt);
    }

    while (pq.size() > 1) {
        x = pq.top();
        pq.pop();
        y = pq.top();
        pq.pop();
        res += x + y;
        pq.push(x + y);
    }

    cout << res << '\n';

    return 0;
}
