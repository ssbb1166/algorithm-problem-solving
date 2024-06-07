#include <iostream>
#include <queue>
using namespace std;


int n, m, k, a[1001][1001];
bool visited[1001][1001];
priority_queue<pair<int, pair<int, int>>> q;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Harvest()
{
    int x = q.top().second.first;
    int y = q.top().second.second;
    q.pop();

    cout << y << ' ' << x << '\n';

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx <= 0 || nx > m || ny <= 0 || ny > n)
            continue;

        if (!visited[ny][nx]) {
            q.push({ a[ny][nx], { nx, ny } });
            visited[ny][nx] = true;
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= m; x++) {
            cin >> a[y][x];
            if (x == 1 || x == m || y == 1 || y == n) {
                q.push({ a[y][x], { x, y } });
                visited[y][x] = true;
            }
        }
    }

    cin >> k;

    for (int i = 0; i < k; i++)
        Harvest();

    return 0;
}
