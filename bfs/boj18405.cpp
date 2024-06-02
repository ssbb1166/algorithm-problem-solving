#include <iostream>
#include <queue>
using namespace std;


int n, k, s, x, y, map[201][201], virus[201][201];
queue<pair<int, int>> q, vq;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


int BFS(int t)
{
    int q_size = q.size();

    while (q_size--) {
        int x = q.front().first;
        int y = q.front().second;
        vq.push({ x, y });
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx <= 0 || nx > n || ny <= 0 || ny > n)
                continue;

            if (map[nx][ny] == 0) {
                q.push({ nx, ny });
                map[nx][ny] = t + 1;
            }
        }
    }

    return t + 1;
}


void SpreadVirus(int t)
{
    int q_size = vq.size();

    while (q_size--) {
        int x = vq.front().first;
        int y = vq.front().second;
        vq.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx <= 0 || nx > n || ny <= 0 || ny > n)
                continue;

            if (map[nx][ny] == t && virus[nx][ny] > virus[x][y] || !virus[nx][ny])
                virus[nx][ny] = virus[x][y];
        }
    }
}


int main()
{
    cin >> n >> k;

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            cin >> virus[x][y];
            if (virus[x][y]) {
                map[x][y] = 1;
                q.push({ x, y });
            }
        }
    }

    cin >> s >> x >> y;

    for (int t = 1; t <= s; t++)
        SpreadVirus(BFS(t));

    cout << virus[x][y];

    return 0;
}
