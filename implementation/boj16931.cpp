#include <iostream>
using namespace std;


int n, m, res, cnt[101][101];


int main()
{
    cin >> n >> m;

    for (int y = 1; y <= n; y++)
        for (int x = 1; x <= m; x++)
            cin >> cnt[y][x];

    res = n * m;

    for (int y = n; y > 0; y--)
        for (int x = m; x > 0; x--)
            if (cnt[y][x] > cnt[y][x - 1])
                res += cnt[y][x] - cnt[y][x - 1];

    for (int x = m; x > 0; x--)
        for (int y = n; y > 0; y--)
            if (cnt[y][x] > cnt[y - 1][x])
                res += cnt[y][x] - cnt[y - 1][x];

    cout << res * 2;

    return 0;
}
