#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int m, n, k, lx, ly, rx, ry, area, cnt;
bool map[100][100];
vector<int> areas;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void DFS(int x, int y)
{
    map[y][x] = true;

    area++;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            continue;

        if (map[ny][nx])
            continue;

        DFS(nx, ny);
    }
}


int main()
{
    cin >> m >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> lx >> ly >> rx >> ry;
        for (int y = ly; y < ry; y++)
            for (int x = lx; x < rx; x++)
                map[y][x] = true;
    }

    for (int y = 0; y < m; y++) {
        for (int x = 0; x < n; x++) {
            if (!map[y][x]) {
                area = 0;
                DFS(x, y);
                cnt++;
                areas.push_back(area);
            }
        }
    }

    sort(areas.begin(), areas.end());

    cout << cnt << '\n';

    for (int i = 0; i < cnt; i++)
        cout << areas[i] << ' ';

    return 0;
}
