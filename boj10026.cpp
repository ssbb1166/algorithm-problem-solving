#include <iostream>
#include <string>
using namespace std;


int n, cnt[2];
char map[100][100];
bool visited[100][100];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void DFS(int x, int y)
{
    visited[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;

        if (map[ny][nx] != map[y][x])
            continue;

        if (!visited[ny][nx])
            DFS(nx, ny);
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < n; x++)
            map[y][x] = line[x];
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (!visited[y][x]) {
                DFS(x, y);
                cnt[0]++;
            }
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            visited[y][x] = false;
            if (map[y][x] == 'R')
                map[y][x] = 'G';
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (!visited[y][x]) {
                DFS(x, y);
                cnt[1]++;
            }
        }
    }

    cout << cnt[0] << ' ' << cnt[1] << '\n';

    return 0;
}
