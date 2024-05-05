#include <iostream>
#include <vector>
using namespace std;


int v, e, u, w, cnt;
bool visited[101];
vector<int> graph[101];


void DFS(int x)
{
    visited[x] = true;

    cnt++;

    for (int i = 0; i < graph[x].size(); i++) {
        int nx = graph[x][i];
        if (!visited[nx]) DFS(nx);
    }
}


int main()
{
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        cin >> u >> w;
        graph[u].push_back(w);
        graph[w].push_back(u);
    }

    DFS(1);

    cout << cnt - 1 << '\n';

    return 0;
}
