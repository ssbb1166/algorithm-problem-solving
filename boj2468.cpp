#include <iostream>
using namespace std;


int n, max_h, cnt, max_cnt;
int map[100][100], tmp[100][100];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void DFS(int x, int y)
{
    tmp[y][x] = 0;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= n || ny < 0 || ny >= n)
            continue;

        if (tmp[ny][nx] == 0)
            continue;

        DFS(nx, ny);
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            cin >> map[y][x];
            if (map[y][x] > max_h)
                max_h = map[y][x];
        }
    }

    for (int h = 0; h <= max_h; h++) {
        for (int y = 0; y < n; y++)
            for (int x = 0; x < n; x++)
                if (map[y][x] > h)
                    tmp[y][x] = 1;
                else
                    tmp[y][x] = 0;

        cnt = 0;
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++) {
                if (tmp[y][x]) {
                    DFS(x, y);
                    cnt++;
                }
            }
        }

        if (cnt > max_cnt)
            max_cnt = cnt;
    }

    cout << max_cnt << '\n';

    return 0;
}
