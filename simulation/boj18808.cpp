#include <algorithm>
#include <iostream>
using namespace std;


int n, m, k, r, c, cnt, notebook[40][40], sticker[10][10];


bool CanPaste(int sx, int sy)
{
    // 해당 영역에 스티커를 붙일 수 있는지 확인한다.
    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            if (notebook[sy + y][sx + x] == 1 && sticker[y][x] == 1)
                return false;

    // 해당 영역에 스티커를 붙인다.
    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            if (sticker[y][x] == 1)
                notebook[sy + y][sx + x] = 1;

    return true;
}


void Rotate()
{
    int tmp[10][10];

    for (int y = 0; y < r; y++)
        for (int x = 0; x < c; x++)
            tmp[y][x] = sticker[y][x];

    for (int y = 0; y < c; y++)
        for (int x = 0; x < r; x++)
            sticker[y][x] = tmp[r - x - 1][y];

    swap(r, c);
}


void Paste()
{
    // 스티커를 붙일 수 있으면 붙인다.
    for (int d = 0; d < 4; d++) {
        for (int sy = 0; sy <= n - r; sy++)
            for (int sx = 0; sx <= m - c; sx++)
                if (CanPaste(sx, sy))
                    return;

        // 스티커를 90도 회전시킨다.
        Rotate();
    }
}


int main()
{
    cin >> n >> m >> k;

    for (int i = 0; i < k; i++) {
        cin >> r >> c;

        for (int y = 0; y < r; y++)
            for (int x = 0; x < c; x++)
                cin >> sticker[y][x];

        Paste();
    }

    for (int y = 0; y < n; y++)
        for (int x = 0; x < m; x++)
            if (notebook[y][x] == 1)
                cnt++;

    cout << cnt << '\n';

    return 0;
}
