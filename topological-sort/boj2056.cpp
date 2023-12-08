#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, x, cnt, res, t[10001], dp[10001], indegree[10001];
vector<int> graph[10001];


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++) {
        if (!indegree[i]) {
            q.push(i);
            dp[i] = t[i];
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

            if (dp[nx] < dp[x] + t[nx])
                dp[nx] = dp[x] + t[nx];
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> t[i] >> cnt;

        for (int j = 0; j < cnt; j++) {
            cin >> x;
            graph[x].push_back(i);
            indegree[i]++;
        }
    }

    TopologySort();

    for (int i = 1; i <= n; i++)
        if (dp[i] > res)
            res = dp[i];

    cout << res << '\n';

    return 0;
}
