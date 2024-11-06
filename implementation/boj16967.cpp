#include <iostream>
using namespace std;


int h, w, x, y, sx, sy, a[300][300], b[600][600];


int main()
{
    cin >> h >> w >> x >> y;

    for (int i = 0; i < h + x; i++) {
        for (int j = 0; j < w + y; j++) {
            cin >> b[i][j];
            if (i < h && j < w)
                a[i][j] = b[i][j];
        }
    }

    sx = x, sy = y;
    while (sx < h || sy < w) {
        for (int i = sx; i < sx * 2 && i < h; i++)
            for (int j = sy; j < w; j++)
                a[i][j] -= a[i - x][j - y];

        for (int i = sx * 2; i < h; i++)
            for (int j = sy; j < sy * 2 && j < w; j++)
                a[i][j] -= a[i - x][j - y];

        sx *= 2;
        sy *= 2;
    }

    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
