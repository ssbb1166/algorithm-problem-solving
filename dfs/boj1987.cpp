#include <iostream>
#include <string>
using namespace std;


int r, c, cnt, max_cnt;
char map[20][20];
bool visited[26];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void DFS(int x, int y, int cnt)
{
    visited[map[y][x] - 'A'] = true;

    if (cnt > max_cnt)
        max_cnt = cnt;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= c || ny < 0 || ny >= r)
            continue;

        if (!visited[map[ny][nx] - 'A'])
            DFS(nx, ny, cnt + 1);
    }

    visited[map[y][x] - 'A'] = false;
}


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < c; x++)
            map[y][x] = line[x];
    }

    DFS(0, 0, 1);

    cout << max_cnt << '\n';

    return 0;
}
