#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, x;
int t[501], dp[501], indegree[501];
vector<int> graph[501];


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
        cin >> t[i];
        while (1) {
            cin >> x;
            if (x == -1) break;
            graph[x].push_back(i);
            indegree[i]++;
        };
    }

    TopologySort();

    for (int i = 1; i <= n; i++)
        cout << dp[i] << '\n';

    return 0;
}
