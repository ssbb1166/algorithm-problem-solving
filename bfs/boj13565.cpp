#include <iostream>
#include <string>
#include <queue>
using namespace std;


int m, n, map[1001][1001];
queue<pair<int, int>> q;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void BFS()
{
    for (int x = 0; x < n; x++) {
        if (map[0][x] == 0) {
            q.push({ x, 0 });
            map[0][x] = -1;
        }
    }

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (map[ny][nx] == 0) {
                q.push({ nx, ny });
                map[ny][nx] = -1;
            }
        }
    }
}


bool CanPassDown()
{
    for (int x = 0; x < n; x++)
        if (map[m - 1][x] == -1)
            return true;

    return false;
}


int main()
{
    cin >> m >> n;

    for (int y = 0; y < m; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < n; x++)
            map[y][x] = line[x] - '0';
    }

    BFS();

    if (CanPassDown())
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
