#include <iostream>
using namespace std;


int n, lx, ly, cnt, res;
bool paper[100][100];


int dx[] = { 0, 0, -1, 1 };
int dy[] = { -1, 1, 0, 0 };


int main()
{
    cin >> n;

    while (n--) {
        cin >> lx >> ly;
        for (int y = 0; y < 10; y++)
            for (int x = 0; x < 10; x++)
                paper[ly + y][lx + x] = true;
    }

    for (int y = 0; y < 100; y++) {
        for (int x = 0; x < 100; x++) {
            if (paper[y][x]) {
                cnt = 4;
                for (int i = 0; i < 4; i++) {
                    int nx = x + dx[i];
                    int ny = y + dy[i];
                    if (nx < 0 || nx > 99 || ny < 0 || ny > 99) continue;
                    if (paper[ny][nx]) cnt--;
                }
                res += cnt;
            }
        }
    }

    cout << res;

    return 0;
}
