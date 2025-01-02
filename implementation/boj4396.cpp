#include <iostream>
#include <string>
using namespace std;


int n, cnt;
bool over;
string mine[10], board[10];


int dx[] = { 0, 1, 1, 1, 0, -1, -1, -1 };
int dy[] = { -1, -1, 0, 1, 1, 1, 0, -1 };


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        cin >> mine[y];

    for (int y = 0; y < n; y++) {
        cin >> board[y];
        for (int x = 0; x < n; x++)
            if (mine[y][x] == '*' && board[y][x] == 'x')
                over = true;
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            if (board[y][x] == 'x') {
                cnt = 0;
                for (int i = 0; i < 8; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if (nx < 0 || nx > n - 1 || ny < 0 || ny > n - 1) continue;
                    if (mine[ny][nx] == '*') cnt++;
                }
                board[y][x] = cnt + '0';
            }

            if (mine[y][x] == '*' && over)
                board[y][x] = '*';
        }
    }

    for (int y = 0; y < n; y++)
        cout << board[y] << '\n';

    return 0;
}
