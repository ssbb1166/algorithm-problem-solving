#include <iostream>
#include <queue>
#include <string>
#define INF 1000000
using namespace std;


int r, c, f[1000][1000], j[1000][1000];
string map[1000];
queue<pair<int, int>> fq, jq;


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

            if (nx < 0 || nx > c - 1 || ny < 0 || ny > r - 1)
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
    while (!jq.empty()) {
        int x = jq.front().first;
        int y = jq.front().second;
        jq.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > c - 1 || ny < 0 || ny > r - 1)
                continue;

            if (map[ny][nx] != '#' && j[ny][nx] == INF && j[y][x] + 1 < f[ny][nx]) {
                jq.push({ nx, ny });
                j[ny][nx] = j[y][x] + 1;
            }
        }
    }
}


int GetMinTime()
{
    SpreadFire();
    EscapeMaze();

    int res = INF;
    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            if (x == 0 || x == c - 1 || y == 0 || y == r - 1)
                res = min(res, j[y][x]);

    return res;
}


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        cin >> map[y];
        for (int x = 0; x < c; x++) {
            f[y][x] = j[y][x] = INF;
            if (map[y][x] == 'F') {
                f[y][x] = 1;
                fq.push({ x, y });
            }
            if (map[y][x] == 'J') {
                j[y][x] = 1;
                jq.push({ x, y });
            }
        }
    }

    if (GetMinTime() != INF)
        cout << GetMinTime();
    else
        cout << "IMPOSSIBLE";

    return 0;
}
