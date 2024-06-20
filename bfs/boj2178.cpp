#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, m, map[101][101];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void SearchShortestDistance()
{
    queue<pair<int, int>> q;
    q.push({ 1, 1 });
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 1 || nx > m || ny < 1 || ny > n)
                continue;

            if (map[ny][nx] == 1) {
                q.push({ nx, ny });
                map[ny][nx] = map[y][x] + 1;
            }
        }
    }
}


int main()
{
    cin >> n >> m;

    for (int y = 1; y <= n; y++) {
        string line;
        cin >> line;
        for (int x = 1; x <= m; x++)
            map[y][x] = line[x - 1] - '0';
    }

    SearchShortestDistance();

    cout << map[n][m];

    return 0;
}
