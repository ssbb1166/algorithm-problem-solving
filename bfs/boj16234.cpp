#include <cstdlib>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, l, r, day, a[50][50];
bool moved, united[50][50];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void Initialize()
{
    moved = false;
    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            united[y][x] = false;
}


void Unite(int x, int y)
{
    int total = 0;
    queue<pair<int, int>> q;
    vector<pair<int, int>> un;

    q.push({ x, y });
    united[y][x] = true;
    un.push_back({ x, y });
    total += a[y][x];

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;

            if (united[ny][nx])
                continue;

            int diff = abs(a[y][x] - a[ny][nx]);
            if (diff >= l && diff <= r) {
                q.push({ nx, ny });
                united[ny][nx] = true;
                un.push_back({ nx, ny });
                total += a[ny][nx];
            }
        }
    }

    int population = total / un.size();
    for (pair<int, int> land : un) {
        int x = land.first;
        int y = land.second;
        a[y][x] = population;
    }

    if (un.size() > 1)
        moved = true;
}


int main()
{
    cin >> n >> l >> r;

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            cin >> a[y][x];

    while (true) {
        Initialize();

        for (int y = 0; y < n; y++)
            for (int x = 0; x < n; x++)
                if (!united[y][x])
                    Unite(x, y);

        if (!moved) break;

        day++;
    }

    cout << day;

    return 0;
}
