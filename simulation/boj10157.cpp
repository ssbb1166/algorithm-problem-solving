#include <iostream>
using namespace std;


int c, r, k, x, y, dir;
bool visited[1001][1001];


int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };


int main()
{
    cin >> c >> r >> k;

    if (k > c * r) {
        cout << 0;
        return 0;
    }

    x = y = 1;
    visited[y][x] = true;
    while (--k) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 1 || nx > c || ny < 1 || ny > r || visited[ny][nx])
            dir = (dir + 1) % 4;

        x += dx[dir];
        y += dy[dir];
        visited[y][x] = true;
    }

    cout << x << ' ' << y;

    return 0;
}
