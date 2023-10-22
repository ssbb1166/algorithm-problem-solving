#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int t, n, map[125][125], dist[125][125];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Dijkstra(int x, int y)
{
    priority_queue<pair<int, pair<int, int>>> pq;
    pq.push({ -map[y][x], {x, y} });
    dist[y][x] = map[y][x];

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

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
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
    while (1) {
        t++;

        cin >> n;

        if (n == 0) break;

        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++) {
                cin >> map[y][x];
                dist[y][x] = INF;
            }
        }

        Dijkstra(0, 0);

        cout << "Problem " << t << ": " << dist[n - 1][n - 1] << '\n';
    }

    return 0;
}
