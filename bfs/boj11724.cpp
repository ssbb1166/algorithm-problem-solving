#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, u, v, cnt;
bool visited[1001];
vector<int> graph[1001];


void BFS(int x)
{
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i];
            if (!visited[nx]) {
                q.push(nx);
                visited[nx] = true;
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int x = 1; x <= n; x++) {
        if (!visited[x]) {
            BFS(x);
            cnt++;
        }
    }

    cout << cnt << '\n';

    return 0;
}
