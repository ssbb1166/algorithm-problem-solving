#include <iostream>
#include <queue>
#define INF 101
using namespace std;


int r, c, gr, gc, lr, lc, board[101][101];


int dx[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int dy[] = { -2, -1, 1, 2, 2, 1, -1, -2 };


void Initialize()
{
    for (int y = 1; y <= r; y++)
        for (int x = 1; x <= c; x++)
            board[y][x] = INF;
}


void BFS()
{
    queue<pair<int, int>> q;
    q.push({ gc, gr });
    board[gr][gc] = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (x == lc && y == lr) {
            cout << board[y][x] << '\n';
            return;
        }

        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 1 || nx > c || ny < 1 || ny > r)
                continue;

            if (board[y][x] + 1 < board[ny][nx]) {
                q.push({ nx, ny });
                board[ny][nx] = board[y][x] + 1;
            }
        }
    }

    cout << "impossible" << '\n';
}


int main()
{
    while (cin >> r >> c >> gr >> gc >> lr >> lc) {
        Initialize();
        BFS();
    }

    return 0;
}
