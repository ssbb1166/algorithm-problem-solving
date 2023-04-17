#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, e, a, b, c, v1, v2, dist[801];
long long int one_v1, one_v2, v1_v2, v1_n, v2_v1, v2_n, res = INF;
vector<pair<int, int>> graph[801];


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
    cin >> n >> e;

    for (int i = 0; i < e; i++) {
        cin >> a >> b >> c;
        graph[a].push_back({ b, c });
        graph[b].push_back({ a, c });
    }

    cin >> v1 >> v2;

    // (1 >> v1), (v1 >> v2), (v1 >> n)
    Dijkstra(v1);
    one_v1 = dist[1];
    v1_v2 = dist[v2];
    v1_n = dist[n];

    // (1 >> v2), (v2 >> v1), (v2 >> n)
    Dijkstra(v2);
    one_v2 = dist[1];
    v2_v1 = dist[v1];
    v2_n = dist[n];

    // (1 >> v1) + (v1 >> v2) + (v2 >> n)
    // (1 >> v2) + (v2 >> v1) + (v1 >> n)
    res = min(res, one_v1 + v1_v2 + v2_n);
    res = min(res, one_v2 + v2_v1 + v1_n);

    if (res == INF)
        cout << -1 << '\n';
    else
        cout << res << '\n';

    return 0;
}
