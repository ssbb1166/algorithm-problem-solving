#include <iostream>
#include <string>
using namespace std;


int t, x, y, dir, l, r, d, u;
string cmd;


int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };


void UpdateMaxDist()
{
    if (x < l) l = x;
    if (x > r) r = x;
    if (y < d) d = y;
    if (y > u) u = y;
}


int GetSize()
{
    return (r - l) * (u - d);
}


int main()
{
    cin >> t;

    while (t--) {
        cin >> cmd;

        x = y = dir = 0;
        l = r = d = u = 0;

        for (int i = 0; cmd[i]; i++) {
            switch (cmd[i]) {
            case 'F':
                x += dx[dir];
                y += dy[dir];
                UpdateMaxDist();
                break;
            case 'B':
                x -= dx[dir];
                y -= dy[dir];
                UpdateMaxDist();
                break;
            case 'L':
                dir = (dir + 3) % 4;
                break;
            case 'R':
                dir = (dir + 1) % 4;
                break;
            }
        }

        cout << GetSize() << '\n';
    }

    return 0;
}
