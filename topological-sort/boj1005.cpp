#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int t, n, k, x, y, w;
int d[1001], dp[1001], indegree[1001];
vector<int> graph[1001];


void Initialize()
{
    for (int i = 1; i <= n; i++) {
        d[i] = dp[i] = indegree[i] = 0;
        graph[i].clear();
    }
}


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (indegree[i] == 0) {
            q.push(i);
            dp[i] = d[i];
        }
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int nx : graph[x]) {
            indegree[nx]--;

            dp[nx] = max(dp[nx], dp[x] + d[nx]);

            if (indegree[nx] == 0)
                q.push(nx);
        }
    }
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;

        Initialize();

        for (int j = 1; j <= n; j++)
            cin >> d[j];

        for (int j = 0; j < k; j++) {
            cin >> x >> y;
            graph[x].push_back(y);
            indegree[y]++;
        }

        cin >> w;

        TopologySort();

        cout << dp[w] << '\n';
    }

    return 0;
}
