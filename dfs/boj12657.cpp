#include <iostream>
using namespace std;


int t, h, w, map[10][10];
char label, res[10][10];


int dx[] = { 0, -1, 1, 0 };
int dy[] = { -1, 0, 0, 1 };


char GetLabel(int x, int y)
{
    int min_nx = -1, min_ny = -1, min_altitude = 10;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx > w - 1 || ny < 0 || ny > h - 1 || map[ny][nx] >= map[y][x])
            continue;

        if (map[ny][nx] < min_altitude) {
            min_altitude = map[ny][nx];
            min_nx = nx;
            min_ny = ny;
        }
    }

    if (min_nx != -1 && min_ny != -1)
        res[y][x] = GetLabel(min_nx, min_ny);

    return (res[y][x] ? res[y][x] : res[y][x] = label++);
}


int main()
{
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> h >> w;

        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++) {
                cin >> map[y][x];
                res[y][x] = 0;
            }
        }

        label = 'a';
        for (int y = 0; y < h; y++)
            for (int x = 0; x < w; x++)
                if (!res[y][x]) GetLabel(x, y);

        cout << "Case #" << i << ":" << '\n';
        for (int y = 0; y < h; y++) {
            for (int x = 0; x < w; x++)
                cout << res[y][x] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
