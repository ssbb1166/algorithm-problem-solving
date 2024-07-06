#include <deque>
#include <iostream>
using namespace std;


int n, k, l, x, row, col, dir, cnt, map[101][101];
char c;
bool over;
deque<pair<int, int>> body;


int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };


void Move()
{
    int head_x = body.front().first;
    int head_y = body.front().second;
    int nx = head_x + dx[dir];
    int ny = head_y + dy[dir];

    cnt++;

    if (nx < 1 || nx > n || ny < 1 || ny > n || map[ny][nx] == -1) {
        over = true;
        return;
    }

    if (map[ny][nx] == 0) {
        int tail_x = body.back().first;
        int tail_y = body.back().second;
        map[tail_y][tail_x] = 0;
        body.pop_back();
    }

    map[ny][nx] = -1;
    body.push_front({ nx, ny });
}


void Turn()
{
    if (c == 'L') dir = (dir + 3) % 4;
    if (c == 'D') dir = (dir + 1) % 4;
}


int main()
{
    cin >> n >> k;

    while (k--) {
        cin >> row >> col;
        map[row][col] = 1;
    }

    map[1][1] = -1;
    body.push_front({ 1, 1 });

    cin >> l;

    while (l--) {
        cin >> x >> c;
        while (!over && cnt < x) Move();
        Turn();
    }

    while (!over) Move();

    cout << cnt;

    return 0;
}
