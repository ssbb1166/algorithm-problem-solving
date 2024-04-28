#include <iostream>
using namespace std;


int w, h, cnt, map[50][50];


int dx[] = { -1, 0, 1, -1, 1, -1, 0, 1 };
int dy[] = { -1, -1, -1, 0, 0, 1, 1, 1 };


void DFS(int x, int y)
{
    map[y][x] = 0;

    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= w || ny < 0 || ny >= h)
            continue;

        if (map[ny][nx] == 0)
            continue;

        DFS(nx, ny);
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
                    DFS(x, y);
                    cnt++;
                }
            }
        }

        cout << cnt << '\n';
    }

    return 0;
}
