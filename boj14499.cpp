#include <iostream>
using namespace std;


// dice = { top, up, right, left, down, bottom }
int n, m, x, y, k, cmd, dice[6], map[20][20];


bool IsPossible(int dir)
{
    if (dir == 1 && y + 1 >= m ||
        dir == 2 && y - 1 < 0 ||
        dir == 3 && x - 1 < 0 ||
        dir == 4 && x + 1 >= n)
        return false;
    return true;
}


void Move(int dir)
{
    if (!IsPossible(dir))
        return;

    int tmp = dice[0];
    switch (dir) {
    case 1:
        y++;
        dice[0] = dice[3];
        dice[3] = dice[5];
        dice[5] = dice[2];
        dice[2] = tmp;
        break;
    case 2:
        y--;
        dice[0] = dice[2];
        dice[2] = dice[5];
        dice[5] = dice[3];
        dice[3] = tmp;
        break;
    case 3:
        x--;
        dice[0] = dice[4];
        dice[4] = dice[5];
        dice[5] = dice[1];
        dice[1] = tmp;
        break;
    case 4:
        x++;
        dice[0] = dice[1];
        dice[1] = dice[5];
        dice[5] = dice[4];
        dice[4] = tmp;
        break;
    }

    if (map[x][y] == 0) {
        map[x][y] = dice[5];
    }
    else {
        dice[5] = map[x][y];
        map[x][y] = 0;
    }

    cout << dice[0] << '\n';
}


int main()
{
    cin >> n >> m >> x >> y >> k;

    for (int r = 0; r < n; r++)
        for (int c = 0; c < m; c++)
            cin >> map[r][c];

    for (int i = 0; i < k; i++) {
        cin >> cmd;
        Move(cmd);
    }

    return 0;
}
