#include <iostream>
using namespace std;


int n, m, lx, ly, rx, ry, cnt, screen[101][101];


int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> lx >> ly >> rx >> ry;
        for (int y = ly; y <= ry; y++)
            for (int x = lx; x <= rx; x++)
                screen[y][x]++;
    }

    for (int y = 1; y <= 100; y++)
        for (int x = 1; x <= 100; x++)
            if (screen[y][x] > m) cnt++;

    cout << cnt;

    return 0;
}
