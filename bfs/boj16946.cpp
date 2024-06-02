#include <iostream>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;


int n, m, idx = 1, map[1000][1000], group_cnt[1000000];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    map[y][x] = idx;

    int cnt = 1;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (map[ny][nx] == 0) {
                q.push({ nx, ny });
                map[ny][nx] = idx;
                cnt++;
            }
        }
    }

    group_cnt[idx++] = cnt;
}


int CountSpace(int x, int y)
{
    set<int> s;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
            continue;

        if (map[ny][nx] > 0)
            s.insert(map[ny][nx]);
    }

    int cnt = 1;
    for (int idx : s)
        cnt += group_cnt[idx];

    return cnt % 10;
}


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < m; x++) {
            if (line[x] == '0')
                map[y][x] = 0;
            else
                map[y][x] = -1;
        }
    }

    for (int y = 0; y < n; y++)
        for (int x = 0; x < m; x++)
            if (map[y][x] == 0)
                BFS(x, y);

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (map[y][x] == -1)
                cout << CountSpace(x, y);
            else
                cout << 0;
        }
        cout << '\n';
    }

    return 0;
}
