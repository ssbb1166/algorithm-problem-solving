#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, m, k, x, a, b, cnt, dist[300001];
vector<int> graph[300001];


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
            int nx = graph[x][i];
            int nd = d + 1;
            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> n >> m >> k >> x;

    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
    }

    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    Dijkstra(x);

    for (int i = 1; i <= n; i++) {
        if (dist[i] == k) {
            cnt++;
            cout << i << '\n';
        }
    }

    if (cnt == 0)
        cout << -1 << '\n';

    return 0;
}
