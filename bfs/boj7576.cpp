#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;


int m, n, box[1000][1000];
queue<pair<int, int>> q;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Spread()
{
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > m - 1 || ny < 0 || ny > n - 1)
                continue;

            if (box[ny][nx] == 0) {
                q.push({ nx, ny });
                box[ny][nx] = box[y][x] + 1;
            }
        }
    }
}


int GetMinDay()
{
    int day = 0;
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (box[y][x] == 0) return -1;
            day = max(day, box[y][x]);
        }
    }

    return day - 1;
}


int main()
{
    cin >> m >> n;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> box[y][x];
            if (box[y][x] == 1)
                q.push({ x, y });
        }
    }

    Spread();

    cout << GetMinDay();

    return 0;
}
