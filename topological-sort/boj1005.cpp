#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int t, n, k, x, y, w;
int d[1001], dp[1001], indegree[1001];
vector<int> graph[1001];


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (!indegree[i]) {
            q.push(i);
            dp[i] = d[i];
        }
    }

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i];
            indegree[nx]--;

            if (!indegree[nx])
                q.push(nx);

            if (dp[nx] < dp[x] + d[nx])
                dp[nx] = dp[x] + d[nx];
        }
    }
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> n >> k;

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

        for (int j = 1; j <= n; j++) {
            d[j] = dp[j] = indegree[j] = 0;
            graph[j].clear();
        }
    }

    return 0;
}
