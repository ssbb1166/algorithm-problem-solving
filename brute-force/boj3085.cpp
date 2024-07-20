#include <algorithm>
#include <iostream>
#include <string>
using namespace std;


int n, res;
string board[51];


void CalculateMaxCount()
{
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            int color = board[y][x], cnt = 0;
            while (x < n && board[y][x] == color) {
                cnt++;
                x++;
            }
            res = max(res, cnt);
            x--;
        }
    }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n; y++) {
            int color = board[y][x], cnt = 0;
            while (y < n && board[y][x] == color) {
                cnt++;
                y++;
            }
            res = max(res, cnt);
            y--;
        }
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        cin >> board[y];

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n - 1; x++) {
            if (board[y][x] != board[y][x + 1]) {
                swap(board[y][x], board[y][x + 1]);
                CalculateMaxCount();
                swap(board[y][x], board[y][x + 1]);
            }
        }
    }

    for (int x = 0; x < n; x++) {
        for (int y = 0; y < n - 1; y++) {
            if (board[y][x] != board[y + 1][x]) {
                swap(board[y][x], board[y + 1][x]);
                CalculateMaxCount();
                swap(board[y][x], board[y + 1][x]);
            }
        }
    }

    cout << res;

    return 0;
}
