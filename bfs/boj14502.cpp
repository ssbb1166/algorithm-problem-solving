#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, m, res, map[8][8], simulation[8][8];
vector<pair<int, int>> blank, virus;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Spread(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    simulation[y][x] = 1;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx > m - 1 || ny < 0 || ny > n - 1)
                continue;

            if (simulation[ny][nx] != 1) {
                q.push({ nx, ny });
                simulation[ny][nx] = 1;
            }
        }
    }
}


int GetSafeZoneSize()
{
    int cnt = 0;
    for (int y = 0; y < n; y++)
        for (int x = 0; x < m; x++)
            if (simulation[y][x] == 0)
                cnt++;

    return cnt;
}


void BuildWall(int idx, int cnt)
{
    if (cnt == 3) {
        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                simulation[y][x] = map[y][x];

        for (pair<int, int> v : virus) {
            int x = v.first;
            int y = v.second;
            if (simulation[y][x] == 2)
                Spread(x, y);
        }

        res = max(res, GetSafeZoneSize());

        return;
    }

    for (int i = idx; i < blank.size(); i++) {
        int x = blank[i].first;
        int y = blank[i].second;
        map[y][x] = 1;
        BuildWall(i + 1, cnt + 1);
        map[y][x] = 0;
    }
}


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> map[y][x];
            if (map[y][x] == 0)
                blank.push_back({ x, y });
            if (map[y][x] == 2)
                virus.push_back({ x, y });
        }
    }

    BuildWall(0, 0);

    cout << res;

    return 0;
}
