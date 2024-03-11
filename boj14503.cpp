#include <iostream>
using namespace std;


int n, m, r, c, d, cnt, room[50][50];


bool IsDirty(int r, int c)
{
    if (room[r - 1][c] == 0 ||
        room[r + 1][c] == 0 ||
        room[r][c - 1] == 0 ||
        room[r][c + 1] == 0)
        return true;
    else
        return false;
}


void CleanRoom(int r, int c)
{
    if (room[r][c] == 0) {
        room[r][c] = -1;
        cnt++;
    }

    if (IsDirty(r, c)) {
        d = (d + 3) % 4;
        switch (d) {
        case 0:
            if (room[r - 1][c] == 0) r--;
            CleanRoom(r, c);
            break;
        case 1:
            if (room[r][c + 1] == 0) c++;
            CleanRoom(r, c);
            break;
        case 2:
            if (room[r + 1][c] == 0) r++;
            CleanRoom(r, c);
            break;
        case 3:
            if (room[r][c - 1] == 0) c--;
            CleanRoom(r, c);
            break;
        }
    }
    else {
        switch (d) {
        case 0:
            if (room[r + 1][c] != 1) {
                r++;
                CleanRoom(r, c);
            }
            break;
        case 1:
            if (room[r][c - 1] != 1) {
                c--;
                CleanRoom(r, c);
            }
            break;
        case 2:
            if (room[r - 1][c] != 1) {
                r--;
                CleanRoom(r, c);
            }
            break;
        case 3:
            if (room[r][c + 1] != 1) {
                c++;
                CleanRoom(r, c);
            }
            break;
        }
    }
}


int main()
{
    cin >> n >> m >> r >> c >> d;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> room[i][j];

    CleanRoom(r, c);

    cout << cnt << '\n';

    return 0;
}
