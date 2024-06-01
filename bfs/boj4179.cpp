#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>
#define INF 1000000
using namespace std;


int r, c, map[1000][1000];
queue<pair<int, int>> j, f;
vector<int> times;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


bool CheckEdge(int x, int y)
{
    if (x == 0 || x == c - 1 || y == 0 || y == r - 1)
        return true;
    return false;
}


void Escape()
{
    int j_size = j.size();
    while (j_size--) {
        int x = j.front().first;
        int y = j.front().second;
        j.pop();

        if (map[y][x] > 0 && CheckEdge(x, y))
            times.push_back(map[y][x]);

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= c || ny < 0 || ny >= r)
                continue;

            if (map[ny][nx] == 0) {
                j.push({ nx, ny });
                map[ny][nx] = map[y][x] + 1;
            }
        }
    }

    int f_size = f.size();
    while (f_size--) {
        int x = f.front().first;
        int y = f.front().second;
        f.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= c || ny < 0 || ny >= r)
                continue;

            if (map[ny][nx] != -1) {
                f.push({ nx, ny });
                map[ny][nx] = -1;
            }
        }
    }
}


int GetMinimumEscapeTime()
{
    while (!j.empty())
        Escape();

    sort(times.begin(), times.end());

    if (times.empty())
        return INF;

    return times[0];
}


int main()
{
    cin >> r >> c;

    for (int y = 0; y < r; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < c; x++) {
            if (line[x] == '#')
                map[y][x] = -1;
            if (line[x] == '.')
                map[y][x] = 0;
            if (line[x] == 'J') {
                map[y][x] = 1;
                j.push({ x, y });
            }
            if (line[x] == 'F') {
                map[y][x] = -1;
                f.push({ x, y });
            }
        }
    }

    if (GetMinimumEscapeTime() != INF)
        cout << GetMinimumEscapeTime();
    else
        cout << "IMPOSSIBLE";

    return 0;
}
