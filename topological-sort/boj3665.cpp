#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int tc, n, m, a, b, t[501], indegree[501];
bool graph[501][501];
vector<int> res;


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
        if (!indegree[i]) q.push(i);

    while (!q.empty()) {
        int x = q.front();
        res.push_back(x);
        q.pop();

        for (int nx = 1; nx <= n; nx++) {
            if (!graph[x][nx]) continue;
            indegree[nx]--;
            if (!indegree[nx]) q.push(nx);
        }
    }
}


int main()
{
    cin >> tc;

    for (int i = 0; i < tc; i++) {
        cin >> n;

        for (int j = 1; j <= n; j++)
            cin >> t[j];

        cin >> m;

        for (int j = 1; j <= n; j++) {
            for (int k = j + 1; k <= n; k++) {
                graph[t[j]][t[k]] = true;
                indegree[t[k]]++;
            }
        }

        for (int j = 0; j < m; j++) {
            cin >> a >> b;
            if (graph[a][b]) {
                graph[a][b] = false;
                graph[b][a] = true;
                indegree[a]++;
                indegree[b]--;
            }
            else {
                graph[a][b] = true;
                graph[b][a] = false;
                indegree[a]--;
                indegree[b]++;
            }
        }

        TopologySort();

        if (res.size() == n) {
            for (int i = 0; i < n; i++)
                cout << res[i] << ' ';
            cout << '\n';
        }
        else {
            cout << "IMPOSSIBLE" << '\n';
        }

        res.clear();
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++)
                graph[j][k] = false;
            indegree[j] = 0;
        }
    }

    return 0;
}
