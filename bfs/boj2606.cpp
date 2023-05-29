#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, e, u, v, cnt;
bool visited[101];
vector<int> computer[101];


void BFS(int x)
{
    queue<int> q;
    q.push(x);
    visited[x] = true;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        cnt++;

        for (int i = 0; i < computer[x].size(); i++) {
            int nx = computer[x][i];
            if (!visited[nx]) {
                q.push(nx);
                visited[nx] = true;
            }
        }
    }
}


int main()
{
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        cin >> u >> v;
        computer[u].push_back(v);
        computer[v].push_back(u);
    }

    BFS(1);

    cout << cnt - 1 << '\n';

    return 0;
}
