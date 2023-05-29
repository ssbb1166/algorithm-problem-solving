#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;


int n, cnt, complex;
int map[25][25];
vector<int> house;


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


void BFS(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({ x, y });
    map[y][x] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        cnt++;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= n)
                continue;

            if (map[ny][nx] == 1) {
                q.push({ nx, ny });
                map[ny][nx] = 0;
            }
        }
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < n; x++)
            map[y][x] = line[x] - '0';
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (map[y][x] == 1) {
                cnt = 0;
                BFS(x, y);
                complex++;
                house.push_back(cnt);
            }
        }
    }

    sort(house.begin(), house.end());

    cout << complex << '\n';

    for (int i = 0; i < complex; i++)
        cout << house[i] << '\n';

    return 0;
}
