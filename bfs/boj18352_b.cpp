#include <iostream>
#include <queue>
#include <vector>
#define INF 1e6
using namespace std;


int n, m, k, x, a, b, cnt, dist[300001];
vector<int> graph[300001];


void BFS()
{
    queue<int> q;
    q.push(x);
    dist[x] = 0;

    while (!q.empty()) {
        int x = q.front();
        q.pop();

        for (int nx : graph[x]) {
            if (dist[nx] == INF) {
                q.push(nx);
                dist[nx] = dist[x] + 1;
            }
        }
    }
}


int main()
{
    cin >> n >> m >> k >> x;

    while (m--) {
        cin >> a >> b;
        graph[a].push_back(b);
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    BFS();

    for (int i = 1; i <= n; i++) {
        if (dist[i] == k) {
            cout << i << '\n';
            cnt++;
        }
    }

    if (cnt == 0)
        cout << -1 << '\n';

    return 0;
}
