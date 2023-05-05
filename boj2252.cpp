#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, a, b, indegree[32001];
vector<int> graph[32001], res;


void TopologySort()
{
    queue<int> q;

    for (int i = 1; i <= n; i++)
        if (!indegree[i]) q.push(i);

    while (!q.empty()) {
        int x = q.front();
        q.pop();
        res.push_back(x);

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i];
            indegree[nx]--;
            if (!indegree[nx]) q.push(nx);
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        indegree[b]++;
    }

    TopologySort();

    for (int i = 0; i < n; i++)
        cout << res[i] << ' ';

    return 0;
}
