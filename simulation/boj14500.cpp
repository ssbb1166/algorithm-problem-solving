#include <algorithm>
#include <iostream>
using namespace std;


int n, m, sum, res, map[502][502];
bool visited[502][502];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Check(int x, int y, int cnt, int sum)
{
    if (cnt == 4) {
        res = max(sum, res);
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx <= 0 || nx > m || ny <= 0 || ny > n)
            continue;

        if (!visited[ny][nx]) {
            visited[ny][nx] = true;
            Check(nx, ny, cnt + 1, sum + map[ny][nx]);
            visited[ny][nx] = false;
        }
    }

    sum = map[y][x];

    int min_num = 1000;
    min_num = min(map[y - 1][x], min_num);
    min_num = min(map[y + 1][x], min_num);
    min_num = min(map[y][x - 1], min_num);
    min_num = min(map[y][x + 1], min_num);

    sum += map[y - 1][x] + map[y + 1][x] + map[y][x - 1] + map[y][x + 1];
    sum -= min_num;
    res = max(sum, res);
}


int main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> map[i][j];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            visited[i][j] = true;
            Check(j, i, 1, map[i][j]);
            visited[i][j] = false;
        }
    }

    cout << res << '\n';

    return 0;
}
