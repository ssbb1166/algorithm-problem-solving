#include <queue>
#include <vector>
#define INF 1e9
using namespace std;


int n, map[101][101], t[101][101][2];


int dx[] = { 0, 0, -1, 1, -1, 0, -1, 0 };
int dy[] = { -1, 1, 0, 0, 0, 0, 1, 1 };
int dd[] = { 0, 0, 0, 0, 1, 1, 1, 1 };
int check_dx[] = { 0, 0, -1, 1, 0, 0, 0, 0 };
int check_dy[] = { -1, 1, 0, 0, -1, -1, 1, 1 };


bool CanMove(int x, int y, int d)
{
    if (x < 1 || x > n || y < 1 || y > n || map[y][x] == 1)
        return false;

    x = d ? x : x - 1;
    y = d ? y - 1 : y;

    if (x < 1 || x > n || y < 1 || y > n || map[y][x] == 1)
        return false;

    return true;
}


int GetMinTime()
{
    queue<pair<pair<int, int>, int>> q;
    q.push({{2, 1}, 0});
    t[1][2][0] = 0;

    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int d = q.front().second;
        q.pop();

        if (x == n && y == n)
            return t[y][x][d];

        for (int i = 0; i < 8; i++) {
            int nx = x + (d ? dy[i] : dx[i]);
            int ny = y + (d ? dx[i] : dy[i]);
            int nd = (d ? 1 - dd[i] : dd[i]);
            int check_x = x + (d ? check_dy[i] : check_dx[i]);
            int check_y = y + (d ? check_dx[i] : check_dy[i]);

            if (!CanMove(check_x, check_y, d))
                continue;

            if (t[ny][nx][nd] == 0) {
                q.push({{nx, ny}, nd});
                t[ny][nx][nd] = t[y][x][d] + 1;
            }
        }
    }

    return INF;
}


int solution(vector<vector<int>> board)
{
    n = board.size();

    for (int y = 1; y <= n; y++)
        for (int x = 1; x <= n; x++)
            map[y][x] = board[y - 1][x - 1];

    return GetMinTime();
}
