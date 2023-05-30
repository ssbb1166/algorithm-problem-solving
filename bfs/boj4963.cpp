#include <iostream>
#include <queue>
using namespace std;


int w, h, cnt, map[50][50];


int dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 };


void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    map[y][x] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= w || ny < 0 || ny >= h)
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
    while (1) {
        cin >> w >> h;

        if (w == 0 && h == 0) break;

        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                cin >> map[y][x];

        cnt = 0;
        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++) {
                if (map[y][x] == 1) {
                    BFS(x, y);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
