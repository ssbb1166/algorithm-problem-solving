#include <queue>
#include <vector>

using namespace std;

int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };

int BFS(vector<vector<int>> &maps)
{
    int n = maps.size();
    int m = maps[0].size();

    queue<pair<int, int>> q;
    q.push({ 0, 0 });

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= m || ny < 0 || ny >= n)
                continue;

            if (maps[ny][nx] == 1) {
                maps[ny][nx] = maps[y][x] + 1;
                q.push({ nx, ny });
            }
        }
    }

    return maps[n - 1][m - 1];
}


int solution(vector<vector<int>> maps)
{
    int answer = BFS(maps);

    if (answer == 1)
        answer = -1;

    return answer;
}
