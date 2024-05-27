#include <iostream>
#include <string>
using namespace std;


int n, cnt;
char board[100][100];


int dx[] = { -1, 0, 1, 1, 1, 0, -1, -1 };
int dy[] = { -1, -1, -1, 0, 1, 1, 1, 0 };
char word[] = { 'M', 'O', 'B', 'I', 'S' };


void CountWord(int x, int y)
{
    for (int d = 0; d < 8; d++) {
        int idx, cx = x, cy = y;
        for (idx = 1; idx < 5; idx++) {
            cx += dx[d];
            cy += dy[d];
            if (cx < 0 || cx >= n || cy < 0 || cy >= n) break;
            if (board[cy][cx] != word[idx]) break;
        }
        if (idx == 5) cnt++;
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++) {
        string line;
        cin >> line;
        for (int x = 0; x < n; x++)
            board[y][x] = line[x];
    }

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            if (board[y][x] == 'M')
                CountWord(x, y);

    cout << cnt;

    return 0;
}
