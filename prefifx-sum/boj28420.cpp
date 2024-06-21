#include <algorithm>
#include <iostream>
using namespace std;


int n, m, a, b, c, level[301][301], total[301][301][2];


int main()
{
    cin >> n >> m >> a >> b >> c;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> level[i][j];

    for (int j = 1; j <= m - a + 1; j++) {
        for (int i = 1; i <= n; i++) {
            total[i][j][1] = total[i - 1][j][1];
            for (int x = j; x < j + a; x++)
                total[i][j][1] += level[i][x];
        }
    }

    for (int i = 1; i <= n - a + 1; i++) {
        for (int j = 1; j <= m; j++) {
            total[i][j][0] = total[i][j - 1][0];
            for (int y = i; y < i + a; y++)
                total[i][j][0] += level[y][j];
        }
    }

    int res = 1e9;
    for (int i = 1; i <= n - (a) + 1; i++) {
        for (int j = 1; j <= m - (b + c) + 1; j++) {
            int tmp = 0;
            tmp += total[i][j + b - 1][0] - total[i][j - 1][0];
            tmp += total[i][j + b + c - 1][0] - total[i][j + b - 1][0];
            res = min(res, tmp);
        }
    }

    for (int i = 1; i <= n - (a + b) + 1; i++) {
        for (int j = 1; j <= m - (a + c) + 1; j++) {
            int tmp = 0;
            tmp += total[i][j + c - 1][0] - total[i][j - 1][0];
            tmp += total[i + a + b - 1][j + c][1] - total[i + a - 1][j + c][1];
            res = min(res, tmp);
        }
    }

    for (int i = 1; i <= n - (a + c) + 1; i++) {
        for (int j = 1; j <= m - (a + b) + 1; j++) {
            int tmp = 0;
            tmp += total[i][j + b - 1][0] - total[i][j - 1][0];
            tmp += total[i + a + c - 1][j + b][1] - total[i + a - 1][j + b][1];
            res = min(res, tmp);
        }
    }

    cout << res;

    return 0;
}
