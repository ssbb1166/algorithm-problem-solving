#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
#define INF 1e6
using namespace std;


int n, m, k, x, a, b, dist[300001];
vector<int> res, graph[300001];


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
                if (dist[nx] == k) res.push_back(nx);
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

    sort(res.begin(), res.end());

    if (!res.empty())
        for (int x : res)
            cout << x << '\n';
    else cout << -1;

    return 0;
}
