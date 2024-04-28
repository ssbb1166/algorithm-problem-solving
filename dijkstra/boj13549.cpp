#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int n, k, dist[100001];


void Dijkstra()
{
    priority_queue<pair<int, int>> pq;
    pq.push({ 0, n });
    dist[n] = 0;

    while (!pq.empty()) {
        int d = -pq.top().first;
        int x = pq.top().second;
        int dx[] = { -1, 1, x };
        int w[] = { 1, 1, 0 };
        pq.pop();

        if (d > dist[x]) continue;

        for (int i = 0; i < 3; i++) {
            int nx = x + dx[i];
            int nd = d + w[i];

            if (nx < 0 || nx > 100000)
                continue;

            if (nd < dist[nx]) {
                pq.push({ -nd, nx });
                dist[nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> n >> k;

    for (int i = 0; i <= 100000; i++)
        dist[i] = INF;

    Dijkstra();

    cout << dist[k] << '\n';

    return 0;
}
