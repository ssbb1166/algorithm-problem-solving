#include <iostream>
using namespace std;


int n, res, initial_board[20][20], board[20][20];


void Rotate()
{
    int tmp[20][20];

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            tmp[y][x] = board[y][x];

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            board[y][x] = tmp[n - x - 1][y];
}


void Move(int dir)
{
    // 어느 방향으로 이동할지 정한다.
    for (int i = 0; i < dir; i++)
        Rotate();

    // 해당 방향으로 블록을 이동한다.
    for (int y = 0; y < n; y++) {
        int col[21] = { 0 };
        int idx = 0;

        for (int x = 0; x < n; x++) {
            // 빈 칸이면 넘어간다.
            if (board[y][x] == 0)
                continue;

            // 같은 값을 갖는 두 블록이 충돌하면 합친다.
            if (col[idx] == board[y][x])
                col[idx++] <<= 1;
            else
                col[++idx] = board[y][x];
        }

        // 블록을 합친 결과를 보드에 기록한다.
        for (int x = 0; x < n; x++)
            board[y][x] = col[x + 1];
    }
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            cin >> initial_board[y][x];

    // 모든 방향 경우의 수: 4^5(최대 이동 횟수)
    for (int info = 0; info < 1024; info++) {
        for (int y = 0; y < n; y++)
            for (int x = 0; x < n; x++)
                board[y][x] = initial_board[y][x];

        int dirs = info;
        for (int i = 0; i < 5; i++) {
            // 방향 정보에서 i번째 방향을 가져온다.
            int dir = dirs % 4;
            dirs /= 4;
            Move(dir);
        }

        // 가장 큰 블록을 확인한다.
        for (int y = 0; y < n; y++)
            for (int x = 0; x < n; x++)
                if (board[y][x] > res)
                    res = board[y][x];
    }

    cout << res << '\n';

    return 0;
}
