#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, x = 49, y = 49, sx, sy, ex, ey, dir;
bool map[99][99];
string movement;


int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };


int main()
{
    cin >> n >> movement;

    map[49][49] = true;
    sx = sy = ex = ey = 49;

    for (int i = 0; i < n; i++) {
        switch (movement[i]) {
        case 'F':
            x += dx[dir];
            y += dy[dir];
            sx = min(x, sx);
            sy = min(y, sy);
            ex = max(x, ex);
            ey = max(y, ey);
            map[y][x] = true;
            break;
        case 'L':
            dir = (dir + 3) % 4;
            break;
        case 'R':
            dir = (dir + 1) % 4;
            break;
        }
    }

    for (int y = sy; y <= ey; y++) {
        for (int x = sx; x <= ex; x++)
            cout << (map[y][x] ? '.' : '#');
        cout << '\n';
    }

    return 0;
}
