#include <deque>
#include <iostream>
using namespace std;


int n, k, l, x, row, col, cnt, dir = 1, map[101][101];
char c;
bool stop;
deque<pair<int, int>> body;


int dx[] = { 0, 1, 0, -1 };
int dy[] = { -1, 0, 1, 0 };


void Move()
{
    while (1) {
        cnt++;

        int head_x = body.front().first;
        int head_y = body.front().second;

        int nx = head_x + dx[dir];
        int ny = head_y + dy[dir];

        // 벽에 부딪히면 게임 끝
        // 몸과 부딪히면 게임 끝
        if (nx <= 0 || nx > n || ny <= 0 || ny > n || map[ny][nx] == 1) {
            stop = true;
            break;
        }

        // 사과 없으면 꼬리 줄어듦
        if (map[ny][nx] == 0) {
            int tail_x = body.back().first;
            int tail_y = body.back().second;
            map[tail_y][tail_x] = 0;
            body.pop_back();
        }

        map[ny][nx] = 1;
        body.push_front({ nx, ny });

        if (cnt == x)
            break;
    }
}


int main()
{
    cin >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> row >> col;
        map[row][col] = -1;
    }

    map[1][1] = 1;
    body.push_front({ 1, 1 });

    cin >> l;

    for (int i = 0; i < l; i++) {
        cin >> x >> c;
        if (!stop) Move();
        if (c == 'L') dir = (dir + 3) % 4;
        if (c == 'D') dir = (dir + 1) % 4;
    }

    if (!stop)
        Move();

    cout << cnt << '\n';

    return 0;
}
