#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int n, m, a, b, c, num, res, map[10][10], parent[7];
vector<pair<int, pair<int, int>>> edge;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void DFS(int x, int y)
{
    map[y][x] = num;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= m || ny < 0 || ny >= n)
            continue;

        if (map[ny][nx] == -1)
            DFS(nx, ny);
    }
}


int Find(int x)
{
    if (x == parent[x]) return x;
    return parent[x] = Find(parent[x]);
}


void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> map[y][x];
            if (map[y][x] == 1)
                map[y][x] = -1;
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (map[y][x] == -1) {
                num++;
                DFS(x, y);
            }
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (map[y][x]) {
                a = 0, b = 0, c = 0;

                a = map[y][x];
                while (x + 1 < m && !map[y][x + 1]) {
                    x++;
                    c++;
                }

                if (x + 1 < m)
                    b = map[y][x + 1];

                if (b > 0 && c > 1)
                    edge.push_back({ c, { a, b } });
            }
        }
    }

    for (int x = 0; x < m; x++) {
        for (int y = 0; y < n; y++) {
            if (map[y][x]) {
                a = 0, b = 0, c = 0;

                a = map[y][x];
                while (y + 1 < n && !map[y + 1][x]) {
                    y++;
                    c++;
                }

                if (y + 1 < n)
                    b = map[y + 1][x];

                if (b > 0 && c > 1)
                    edge.push_back({ c, { a, b } });
            }
        }
    }

    sort(edge.begin(), edge.end());

    for (int i = 1; i <= num; i++)
        parent[i] = i;

    for (int i = 0; i < edge.size(); i++) {
        a = edge[i].second.first;
        b = edge[i].second.second;
        c = edge[i].first;

        if (Find(a) != Find(b)) {
            Union(a, b);
            res += c;
        }
    }

    int group = Find(1);
    for (int i = 2; i <= num; i++)
        if (Find(i) != group)
            res = -1;

    cout << res << '\n';

    return 0;
}
