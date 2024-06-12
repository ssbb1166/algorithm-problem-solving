#include <iostream>
#include <queue>
#include <vector>
#define INF 1e9
using namespace std;


int n, m, a, b, c, s, t, dist[5001];
vector<pair<int, int>> graph[5001];


void Dijkstra(int start)
{
    priority_queue<pair<int, int>> pq;
    pq.push({ 0, start });
    dist[start] = 0;

    while (!pq.empty()) {
        int d = -pq.top().first;
        int x = pq.top().second;
        pq.pop();

        if (d > dist[x]) continue;

        for (pair<int, int> next : graph[x]) {
            int nx = next.first;
            int nd = d + next.second;
            if (nd < dist[nx]) {
                dist[nx] = nd;
                pq.push({ -nd, nx });
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    while (m--) {
        cin >> a >> b >> c;
        graph[a].push_back({ b, c });
        graph[b].push_back({ a, c });
    }

    cin >> s >> t;

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    Dijkstra(s);

    cout << dist[t];

    return 0;
}
