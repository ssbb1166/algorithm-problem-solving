#include <iostream>
#include <vector>
using namespace std;


int n, m, u, v, x, y, degree;
bool visited[101];
vector<int> graph[101];


void DFS(int x, int cnt)
{
    visited[x] = true;

    if (x == v)
        degree = cnt;

    for (int i = 0; i < graph[x].size(); i++) {
        int nx = graph[x][i];
        if (!visited[nx]) DFS(nx, cnt + 1);
    }
}


int main()
{
    cin >> n >> u >> v >> m;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    DFS(u, 0);

    if (degree)
        cout << degree << '\n';
    else
        cout << -1 << '\n';

    return 0;
}
