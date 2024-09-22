#include <iostream>
using namespace std;


int board[20][20];
pair<int, pair<int, int>> winner;


int dx[] = { 0, 1, 1, 1 };
int dy[] = { 1, 1, 0, -1 };


pair<int, pair<int, int>> GetWinner()
{
    for (int y = 1; y <= 19; y++) {
        for (int x = 1; x <= 19; x++) {
            if (board[y][x] == 0) continue;

            int team = board[y][x];
            for (int i = 0; i < 4; i++) {
                int rcnt = 1;
                while (rcnt < 6) {
                    int nx = x + dx[i] * rcnt;
                    int ny = y + dy[i] * rcnt;

                    if (nx < 1 || nx > 19 || ny < 1 || ny > 19) break;

                    if (board[ny][nx] == team)
                        rcnt++;
                    else
                        break;
                }

                int lx = x;
                int ly = y;
                int lcnt = 1;
                while (lcnt < 6) {
                    int nx = x - dx[i] * lcnt;
                    int ny = y - dy[i] * lcnt;

                    if (nx < 1 || nx > 19 || ny < 1 || ny > 19) break;

                    if (board[ny][nx] == team) {
                        lx = nx;
                        ly = ny;
                        lcnt++;
                    }
                    else
                        break;
                }

                if (rcnt + lcnt == 6) return { team, {ly, lx} };
            }
        }
    }

    return { 0, {-1, -1} };
}


int main()
{
    for (int y = 1; y <= 19; y++)
        for (int x = 1; x <= 19; x++)
            cin >> board[y][x];

    winner = GetWinner();

    cout << winner.first << '\n';
    if (winner.first > 0)
        cout << winner.second.first << ' ' << winner.second.second;

    return 0;
}
