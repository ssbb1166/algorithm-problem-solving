#include <iostream>
using namespace std;


int n, m, r, c, d, cnt, room[50][50];


int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };


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
        int nr = r + dy[d];
        int nc = c + dx[d];
        if (room[nr][nc] == 0) {
            r = nr;
            c = nc;
        }
        CleanRoom(r, c);
    }
    else {
        int nr = r + dy[(d + 2) % 4];
        int nc = c + dx[(d + 2) % 4];
        if (room[nr][nc] != 1) {
            r = nr;
            c = nc;
            CleanRoom(r, c);
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
