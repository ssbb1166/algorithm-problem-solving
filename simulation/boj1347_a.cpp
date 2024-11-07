#include <algorithm>
#include <iostream>
#include <set>
#include <string>
using namespace std;


string movement;
set<pair<int, int>> path;
int n, x, y, sx, sy, ex, ey, dir;


int dx[] = { 0, -1, 0, 1 };
int dy[] = { 1, 0, -1, 0 };


int main()
{
    cin >> n >> movement;

    path.insert({ 0, 0 });
    for (int i = 0; i < n; i++) {
        switch (movement[i]) {
        case 'F':
            x += dx[dir];
            y += dy[dir];
            sx = min(x, sx);
            sy = min(y, sy);
            ex = max(x, ex);
            ey = max(y, ey);
            path.insert({ x, y });
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
            cout << (path.find({ x, y }) != path.end() ? '.' : '#');
        cout << '\n';
    }

    return 0;
}
