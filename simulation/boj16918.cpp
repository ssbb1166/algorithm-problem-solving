#include <iostream>
using namespace std;


int r, c, n;
int timer[200][200];
bool board[200][200];


int dx[] = { 0, 0, 0, -1, 1 };
int dy[] = { 0, -1, 1, 0, 0 };


void Install()
{
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            if (!board[y][x]) {
                timer[y][x] = 4;
                board[y][x] = true;
            }
        }
    }
}


void Explode(int x, int y)
{
    for (int i = 0; i <= 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 0 || nx > c - 1 || ny < 0 || ny > r - 1) continue;
        board[ny][nx] = false;
    }
}


void Decrease()
{
    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++) {
            if (timer[y][x] > 0)
                timer[y][x]--;
            if (timer[y][x] == 0)
                Explode(x, y);
        }
    }

    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            if (!board[y][x])
                timer[y][x] = 0;
}


int main()
{
    cin >> r >> c >> n;

    for (int y = 0; y < r; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < c; x++) {
            if (line[x] == 'O') {
                timer[y][x] = 2;
                board[y][x] = true;
            }
        }
    }

    for (int t = 2; t <= n; t++) {
        Install();
        Decrease();
    }

    for (int y = 0; y < r; y++) {
        for (int x = 0; x < c; x++)
            cout << (board[y][x] ? 'O' : '.');
        cout << '\n';
    }

    return 0;
}
