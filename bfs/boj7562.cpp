#include <iostream>
#include <queue>
using namespace std;


int t, l, sx, sy, ex, ey, cnt[300][300];


int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[] = { -2, -1, 1, 2, 2, 1, -1, -2 };


void Count(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    cnt[y][x] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > l - 1 || ny < 0 || ny > l - 1)
                continue;

            if (cnt[ny][nx] == -1) {
                q.push({ nx, ny });
                cnt[ny][nx] = cnt[y][x] + 1;
            }
        }
    }
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> l >> sx >> sy >> ex >> ey;

        for (int y = 0; y < l; y++)
            for (int x = 0; x < l; x++)
                cnt[y][x] = -1;

        Count(sx, sy);

        cout << cnt[ey][ex] << '\n';
    }

    return 0;
}
