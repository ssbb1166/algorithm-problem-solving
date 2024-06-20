#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int n, m, cnt, res, paint[500][500];


int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };


int GetSize(int x, int y)
{
    int size = 0;
    queue<pair<int, int>> q;
    q.push({ x, y });
    paint[y][x] = 0;
    size++;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (paint[ny][nx] == 1) {
                q.push({ nx, ny });
                paint[ny][nx] = 0;
                size++;
            }
        }
    }

    return size;
}


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++)
        for (int x = 0; x < m; x++)
            cin >> paint[y][x];

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (paint[y][x] == 1) {
                cnt++;
                res = max(res, GetSize(x, y));
            }
        }
    }

    cout << cnt << '\n' << res;

    return 0;
}
