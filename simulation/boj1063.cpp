#include <iostream>
#include <string>
using namespace std;


int n, kx, ky, sx, sy, nkx, nky, nsx, nsy, mx, my;
string kpos, spos, mv;


int dx[] = { 1, -1, 0, 0, 1, -1, 1, -1 };
int dy[] = { 0, 0, -1, 1, 1, 1, -1, -1 };


int GetIndex(string mv)
{
    if (mv == "R")
        return 0;
    if (mv == "L")
        return 1;
    if (mv == "B")
        return 2;
    if (mv == "T")
        return 3;
    if (mv == "RT")
        return 4;
    if (mv == "LT")
        return 5;
    if (mv == "RB")
        return 6;
    return 7;
}


bool OutOfChessboard(int x, int y)
{
    if (x < 0 || x > 7 || y < 0 || y > 7)
        return true;
    return false;
}


int main()
{
    cin >> kpos >> spos >> n;

    kx = kpos[0] - 'A';
    ky = kpos[1] - '1';
    sx = spos[0] - 'A';
    sy = spos[1] - '1';

    while (n--) {
        cin >> mv;

        mx = dx[GetIndex(mv)];
        my = dy[GetIndex(mv)];
        
        nkx = kx + mx;
        nky = ky + my;

        if (OutOfChessboard(nkx, nky)) continue;

        if (nkx == sx && nky == sy) {
            nsx = sx + mx;
            nsy = sy + my;

            if (OutOfChessboard(nsx, nsy)) continue;

            sx = nsx;
            sy = nsy;
        }

        kx = nkx;
        ky = nky;
    }

    cout << char(kx + 'A') << char(ky + '1') << '\n';
    cout << char(sx + 'A') << char(sy + '1') << '\n';

    return 0;
}
