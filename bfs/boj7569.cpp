#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int m, n, h, box[100][100][100];
queue<pair<pair<int, int>, int>> q;


int dx[] = { 0, 0, -1, 1, 0, 0 };
int dy[] = { 0, 0, 0, 0, 1, -1 };
int dz[] = { 1, -1, 0, 0, 0, 0 };


void Spread()
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

            if (nx < 0 || nx > m - 1 || ny < 0 || ny > n - 1 || nz < 0 || nz > h - 1)
                continue;

            if (box[nz][ny][nx] == 0) {
                q.push({ {nx, ny}, nz });
                box[nz][ny][nx] = box[z][y][x] + 1;
            }
        }
    }
}


int GetMinDay()
{
    int day = 0;
    for (int z = 0; z < h; z++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (box[z][y][x] == 0) return -1;
                day = max(day, box[z][y][x]);
            }
        }
    }
    
    return day - 1;
}


int main()
{
    cin >> m >> n >> h;

    for (int z = 0; z < h; z++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                cin >> box[z][y][x];
                if (box[z][y][x] == 1)
                    q.push({ {x, y}, z });
            }
        }
    }

    Spread();

    cout << GetMinDay();

    return 0;
}
