#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, m, cnt, x[2], y[2];
char info[301][301];
bool found, visited[301][301];
queue<pair<int, int>> q, nq;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Jump()
{
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 1 || nx > n || ny < 1 || ny > m || visited[nx][ny])
                continue;

            if (info[nx][ny] == '0')
                q.push({ nx, ny });

            if (info[nx][ny] == '1') {
                nq.push({ nx, ny });
                info[nx][ny] = '0';
            }

            if (info[nx][ny] == '#')
                found = true;

            visited[nx][ny] = true;
        }
    }
}


int main()
{
    cin >> n >> m >> x[0] >> y[0] >> x[1] >> y[1];

    for (int x = 1; x <= n; x++) {
        string line;
        cin >> line;
        for (int y = 1; y <= m; y++)
            info[x][y] = line[y - 1];
    }

    q.push({ x[0], y[0] });
    visited[x[0]][y[0]];

    while (true) {
        Jump();
        cnt++;
        q = nq;
        if (found) break;
    }

    cout << cnt;

    return 0;
}
