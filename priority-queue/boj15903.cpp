#include <iostream>
#include <queue>
using namespace std;


int n, m, a;
long long x, y, sum;
priority_queue<long long, vector<long long>, greater<long long>> pq;


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
        pq.push(a);
    }

    for (int i = 0; i < m; i++) {
        x = pq.top(); pq.pop();
        y = pq.top(); pq.pop();
        sum += x + y;
        pq.push(x + y);
        pq.push(x + y);
    }

    cout << sum;

    return 0;
}
