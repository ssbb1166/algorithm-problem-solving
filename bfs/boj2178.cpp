#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, m;
int map[100][100];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };


int BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == n - 1 && y == m - 1) break;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;

            if (map[nx][ny] == 1) {
                q.push({ nx, ny });
                map[nx][ny] = map[x][y] + 1;
            }
        }
    }

    return map[n - 1][m - 1];
}


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++)
            map[i][j] = line[j] - '0';
    }

    cout << BFS(0, 0) << '\n';

    return 0;
}
