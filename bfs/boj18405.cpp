#include <iostream>
#include <queue>
using namespace std;


int n, k, s, x, y, map[201][201], t[201][201];
queue<pair<int, int>> q;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Spread()
{
    int q_size = q.size();
    for (int i = 0; i < q_size; i++) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 1 || nx > n || ny < 1 || ny > n)
                continue;

            if (map[nx][ny] == 0 || (map[nx][ny] > map[x][y] && t[nx][ny] == t[x][y] + 1)) {
                q.push({ nx, ny });
                map[nx][ny] = map[x][y];
                t[nx][ny] = t[x][y] + 1;
            }
        }
    }
}


int main()
{
    cin >> n >> k;

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= n; y++) {
            cin >> map[x][y];
            if (map[x][y] > 0)
                q.push({ x, y });
        }
    }

    cin >> s >> x >> y;

    for (int t = 0; t < s; t++)
        Spread();

    cout << map[x][y];

    return 0;
}
