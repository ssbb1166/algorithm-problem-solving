#include <iostream>
#include <queue>
using namespace std;


int t, m, n, k, x, y, cnt;
int map[50][50];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    map[y][x] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (map[ny][nx] == 1) {
                q.push({ nx, ny });
                map[ny][nx] = 0;
            }
        }
    }
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> m >> n >> k;

        for (int j = 0; j < k; j++) {
            cin >> x >> y;
            map[y][x] = 1;
        }

        cnt = 0;
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (map[y][x] == 1) {
                    BFS(x, y);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';

        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                map[y][x] = 0;
    }

    return 0;
}
