#include <iostream>
#include <queue>
#define INF 1e9
using namespace std;


int r, c, day, map[1500][1500], parent[1500 * 1500];
vector<pair<int, int>> swan;
queue<pair<int, int>> q;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


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


void BFS()
{
    while (!q.empty()) {
        int size = q.size();

        for (int i = 0; i < size; i++) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            for (int j = 0; j < 4; j++) {
                int nx = x + dx[j];
                int ny = y + dy[j];

                if (nx < 0 || nx >= c || ny < 0 || ny >= r)
                    continue;

                if (map[ny][nx] <= day)
                    Union(x + y * c, nx + ny * c);

                if (map[ny][nx] == INF) {
                    q.push({ nx, ny });
                    map[ny][nx] = map[y][x] + 1;
                }
            }
        }

        if (Find(swan[0].first + swan[0].second * c) ==
            Find(swan[1].first + swan[1].second * c))
            break;

        day++;
    }
}


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < c; x++) {
            parent[x + y * c] = x + y * c;
            if (line[x] == 'L') {
                map[y][x] = 0;
                q.push({ x, y });
                swan.push_back({ x, y });
            }
            if (line[x] == '.') {
                map[y][x] = 0;
                q.push({ x, y });
            }
            if (line[x] == 'X') {
                map[y][x] = INF;
            }
        }
    }

    BFS();

    cout << day << '\n';

    return 0;
}
