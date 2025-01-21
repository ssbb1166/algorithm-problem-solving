#include <iostream>
using namespace std;


int n, a, b, w, h, plane[1001][1001], cnt[101];


int main()
{
    cin >> n;

    for (int color = 1; color <= n; color++) {
        cin >> a >> b >> w >> h;
        for (int x = a; x < a + w; x++)
            for (int y = b; y < b + h; y++)
                plane[x][y] = color;
    }

    for (int x = 0; x <= 1000; x++)
        for (int y = 0; y <= 1000; y++)
            if (plane[x][y]) cnt[plane[x][y]]++;

    for (int color = 1; color <= n; color++)
        cout << cnt[color] << '\n';

    return 0;
}
