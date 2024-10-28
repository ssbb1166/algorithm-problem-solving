#include <iostream>
#include <string>
using namespace std;


int r, c, sx, sy, ex, ey, cnt, cnt_x[10], cnt_y[10];
string map[10], res[10];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        cin >> map[y];
        res[y] = map[y];
    }

    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            cnt = 0;
            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];
                if (nx < 0 || nx > c - 1 || ny < 0 || ny > r - 1 || map[ny][nx] == '.') cnt++;
            }

            if (cnt >= 3)
                res[y][x] = '.';

            if (res[y][x] == '.') {
                cnt_x[y]++;
                cnt_y[x]++;
            }
        }
    }

    for (sx = 0; cnt_y[sx] == r; sx++);
    for (sy = 0; cnt_x[sy] == c; sy++);
    for (ex = c - 1; cnt_y[ex] == r; ex--);
    for (ey = r - 1; cnt_x[ey] == c; ey--);

    for (int y = sy; y <= ey; y++) {
        for (int x = sx; x <= ex; x++)
            cout << res[y][x];
        cout << '\n';
    }

    return 0;
}
