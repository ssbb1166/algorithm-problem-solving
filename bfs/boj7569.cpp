#include <iostream>
#include <queue>
using namespace std;


int m, n, h, day;
int map[100][100][100];
bool possible = true;
queue<pair<pair<int, int>, int>> q;


int dx[] = { 0, 0, 0, 0, -1, 1 };
int dy[] = { 0, 0, -1, 1, 0, 0 };
int dz[] = { -1, 1, 0, 0, 0, 0 };


void BFS()
{
    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();

        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n || nz < 0 || nz >= h)
                continue;

            if (map[nz][ny][nx] == 0) {
                q.push({ {nx, ny}, nz });
                day = map[z][y][x];
                map[nz][ny][nx] = map[z][y][x] + 1;
            }
        }
    }
}


int main()
{
    cin >> m >> n >> h;

    for (int z = 0; z < h; z++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                cin >> map[z][y][x];
                if (map[z][y][x] == 1)
                    q.push({ {x, y}, z });
            }
        }
    }

    BFS();

    for (int z = 0; z < h; z++)
        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                if (map[z][y][x] == 0)
                    possible = false;

    cout << (possible ? day : -1) << '\n';

    return 0;
}
