#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, v, u, w;
bool visited[1001];
vector<int> graph[1001];


void DFS(int x)
{
    visited[x] = true;

    cout << x << ' ';

    for (int i = 0; i < graph[x].size(); i++) {
        int nx = graph[x][i];
        if (!visited[nx]) DFS(nx);
    }
}


void BFS(int x)
{
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        cout << x << ' ';

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
    cin >> n >> m >> v;

    for (int i = 0; i < m; i++) {
        cin >> u >> w;
        graph[u].push_back(w);
        graph[w].push_back(u);
    }

    for (int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end());

    DFS(v);

    cout << '\n';

    for (int i = 1; i <= n; i++)
        visited[i] = false;

    BFS(v);

    return 0;
}
