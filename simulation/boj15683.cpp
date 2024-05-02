#include <iostream>
#include <vector>
using namespace std;


int n, m, cnt, res, map[8][8], tmp[8][8];
vector<pair<int, int>> cctv;


// CCTV 감시 코드를 예쁘게 작성하기 위해
// 방향 순서를 '동, 북, 서, 남'으로 정했다.
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, -1, 0, 1 };


void Monitor(int x, int y, int dir)
{
    // 4 이상의 방향이 들어오면 4 미만으로 바꾼다.
    dir %= 4;

    while (true) {
        x += dx[dir];
        y += dy[dir];

        // 해당 방향 끝까지 다 확인하면 멈춘다.
        if (x < 0 || x >= m || y < 0 || y >= n)
            break;

        // 벽을 마주치면 멈춘다.
        if (tmp[y][x] == 6)
            break;

        // 감시 영역을 표시한다.
        if (tmp[y][x] == 0)
            tmp[y][x] = '#';
    }
}


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> map[y][x];
            if (map[y][x] == 0) res++;
            if (map[y][x] >= 1 && map[y][x] <= 5) cctv.push_back({ x, y });
        }
    }

    // 모든 CCTV 방향 경우의 수: 4^(CCTV 개수)
    for (int info = 0; info < (1 << (2 * cctv.size())); info++) {
        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                tmp[y][x] = map[y][x];

        int dirs = info;
        for (int i = 0; i < cctv.size(); i++) {
            // CCTV 정보에서 i번째 CCTV 좌표를 가져온다.
            // 방향 정보에서 i번째 CCTV 방향을 가져온다.
            int x = cctv[i].first;
            int y = cctv[i].second;
            int dir = dirs % 4;

            dirs /= 4;

            // 방향 정보대로 CCTV가 해당 방향을 감시한다.
            // 방향은 'dir + 반시계 방향 회전 횟수'이므로
            // 함수로 4 이상의 방향 값이 전달될 수도 있다.
            if (map[y][x] == 1) {
                Monitor(x, y, dir);
            }
            else if (map[y][x] == 2) {
                Monitor(x, y, dir);
                Monitor(x, y, dir + 2);
            }
            else if (map[y][x] == 3) {
                Monitor(x, y, dir);
                Monitor(x, y, dir + 1);
            }
            else if (map[y][x] == 4) {
                Monitor(x, y, dir);
                Monitor(x, y, dir + 1);
                Monitor(x, y, dir + 2);
            }
            else {
                Monitor(x, y, dir);
                Monitor(x, y, dir + 1);
                Monitor(x, y, dir + 2);
                Monitor(x, y, dir + 3);
            }
        }

        // CCTV 사각 지대 개수를 센다.
        cnt = 0;
        for (int y = 0; y < n; y++)
            for (int x = 0; x < m; x++)
                if (tmp[y][x] == 0)
                    cnt++;

        if (cnt < res)
            res = cnt;
    }

    cout << res << '\n';

    return 0;
}
