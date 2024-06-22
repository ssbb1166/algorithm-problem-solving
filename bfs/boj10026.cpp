#include <iostream>
#include <queue>
#include <string>
using namespace std;


int n, cnt[2];
bool visited[100][100];
string paint[100];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void CountZone(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    visited[y][x] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 0 || nx > n - 1 || ny < 0 || ny > n - 1)
                continue;

            if (!visited[ny][nx] && paint[ny][nx] == paint[y][x]) {
                q.push({ nx, ny });
                visited[ny][nx] = true;
            }
        }
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        cin >> paint[y];

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (!visited[y][x]) {
                CountZone(x, y);
                cnt[0]++;
            }
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            visited[y][x] = false;
            if (paint[y][x] == 'G')
                paint[y][x] = 'R';
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (!visited[y][x]) {
                CountZone(x, y);
                cnt[1]++;
            }
        }
    }

    cout << cnt[0] << ' ' << cnt[1];

    return 0;
}
