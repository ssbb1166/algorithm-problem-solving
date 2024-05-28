#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int n, k, m, v, idx, c[300000];
pair<int, int> jewerly[300000];
priority_queue<int, vector<int>> pq;


int main()
{
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        cin >> m >> v;
        jewerly[i] = { m, v };
    }

    for (int i = 0; i < k; i++)
        cin >> c[i];

    sort(jewerly, jewerly + n);
    sort(c, c + k);

    long long int total = 0;
    for (int i = 0; i < k; i++) {
        while (idx < n && jewerly[idx].first <= c[i]) {
            pq.push(jewerly[idx].second);
            idx++;
        }
        if (!pq.empty()) {
            total += pq.top();
            pq.pop();
        }
    }

    cout << total;

    return 0;
}
