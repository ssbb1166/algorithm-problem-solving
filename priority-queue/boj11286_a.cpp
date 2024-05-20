#include <iostream>
#include <queue>
using namespace std;


int n, x, sign;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x > 0) {
            pq.push({ x, 1 });
        }
        else if (x < 0) {
            pq.push({ -x, -1 });
        }
        else if (pq.empty()) {
            cout << 0 << '\n';
        }
        else {
            x = pq.top().first;
            sign = pq.top().second;
            pq.pop();
            cout << x * sign << '\n';
        }
    }

    return 0;
}
