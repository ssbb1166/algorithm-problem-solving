#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int m, n, map[101][101], dist[101][101];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Dijkstra(int x, int y)
{
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({ 0, {x, y} });
    dist[y][x] = 0;

    while (!pq.empty()) {
        int d = -pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (d > dist[y][x]) continue;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nd = d + map[ny][nx];

            if (nx < 1 || nx > m || ny < 1 || ny > n)
                continue;

            if (nd < dist[ny][nx]) {
                pq.push({ -nd, {nx, ny} });
                dist[ny][nx] = nd;
            }
        }
    }
}


int main()
{
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++)
            map[i + 1][j + 1] = line[j] - '0';
    }

    for (int y = 1; y <= n; y++)
        for (int x = 1; x <= m; x++)
            dist[y][x] = INF;

    Dijkstra(1, 1);

    cout << dist[n][m] << '\n';

    return 0;
}