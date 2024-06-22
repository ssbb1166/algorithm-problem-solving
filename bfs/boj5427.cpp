#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#define INF 1000000
using namespace std;


int t, w, h, f[1000][1000], s[1000][1000];
string map[1000];
queue<pair<int, int>> fq, sq;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void SpreadFire()
{
    while (!fq.empty()) {
        int x = fq.front().first;
        int y = fq.front().second;
        fq.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > w - 1 || ny < 0 || ny > h - 1)
                continue;

            if (map[ny][nx] != '#' && f[ny][nx] == INF) {
                fq.push({ nx, ny });
                f[ny][nx] = f[y][x] + 1;
            }
        }
    }
}


void EscapeMaze()
{
    while (!sq.empty()) {
        int x = sq.front().first;
        int y = sq.front().second;
        sq.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > w - 1 || ny < 0 || ny > h - 1)
                continue;

            if (map[ny][nx] != '#' && s[ny][nx] == INF && s[y][x] + 1 < f[ny][nx]) {
                sq.push({ nx, ny });
                s[ny][nx] = s[y][x] + 1;
            }
        }
    }
}


int GetMinTime()
{
    SpreadFire();
    EscapeMaze();

    int res = INF;
    for (int y = 0; y < h; y++)
        for (int x = 0; x < w; x++)
            if (x == 0 || x == w - 1 || y == 0 || y == h - 1)
                res = min(res, s[y][x]);

    return res;
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> w >> h;

        for (int y = 0; y < h; y++) {
            cin >> map[y];
            for (int x = 0; x < w; x++) {
                f[y][x] = s[y][x] = INF;
                if (map[y][x] == '*') {
                    fq.push({ x, y });
                    f[y][x] = 1;
                }
                if (map[y][x] == '@') {
                    sq.push({ x, y });
                    s[y][x] = 1;
                }
            }
        }

        if (GetMinTime() != INF)
            cout << GetMinTime() << '\n';
        else
            cout << "IMPOSSIBLE" << '\n';
    }

    return 0;
}
