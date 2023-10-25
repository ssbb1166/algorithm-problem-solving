#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, m, r, t, a, b, l, res, map[101], dist[101];
vector<pair<int, int>> graph[101];


void Dijkstra(int start)
{
    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    priority_queue<pair<int, int>> pq;
    pq.push({ 0, start });
    dist[start] = 0;

    while (!pq.empty()) {
        int d = -pq.top().first;
        int x = pq.top().second;
        pq.pop();

        if (d > dist[x]) continue;

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i].first;
            int nd = d + graph[x][i].second;
            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> n >> m >> r;

    for (int i = 1; i <= n; i++) {
        cin >> map[i];
    }

    for (int i = 0; i < r; i++) {
        cin >> a >> b >> l;
        graph[a].push_back({ b, l });
        graph[b].push_back({ a, l });
    }

    for (int i = 1; i <= n; i++) {
        Dijkstra(i);

        int cnt = 0;
        for (int j = 1; j <= n; j++)
            if (dist[j] <= m)
                cnt += map[j];

        if (cnt > res)
            res = cnt;
    }

    cout << res << '\n';

    return 0;
}
