#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, u, v;
bool visited[300001];
vector<int> graph[300001];


void BFS()
{
    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int nx : graph[x]) {
            if (!visited[nx]) {
                q.push(nx);
                visited[nx] = true;
            }
        }
    }
}


int main()
{
    cin >> n;

    for (int i = 0; i < n - 2; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    BFS();

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            cout << 1 << ' ' << i;
            break;
        }
    }

    return 0;
}
