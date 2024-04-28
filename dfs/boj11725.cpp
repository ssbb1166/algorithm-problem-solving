#include <iostream>
#include <vector>
using namespace std;


int n, u, v, parent[100001];
vector<int> graph[100001];


void DFS(int x)
{
    for (int i = 0; i < graph[x].size(); i++) {
        int nx = graph[x][i];
        if (!parent[nx]) {
            parent[nx] = x;
            DFS(nx);
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    DFS(1);

    for (int i = 2; i <= n; i++)
        cout << parent[i] << '\n';

    return 0;
}
