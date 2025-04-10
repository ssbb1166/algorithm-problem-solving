#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, m, u, v, w, src, dst, dist[1001], previous[1001];
vector<pair<int, int>> graph[1001];
vector<int> route;


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

        for (int i = 0; i < graph[x].size(); i++) {
            int nx = graph[x][i].first;
            int nd = d + graph[x][i].second;
            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
                previous[nx] = x;
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        graph[u].push_back({ v, w });
    }

    cin >> src >> dst;

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    Dijkstra(src);

    int node = dst;
    while (node) {
        route.push_back(node);
        node = previous[node];
    }

    cout << dist[dst] << '\n';
    cout << route.size() << '\n';
    for (int i = route.size() - 1; i >= 0; i--)
        cout << route[i] << ' ';

    return 0;
}
