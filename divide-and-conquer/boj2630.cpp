#include <iostream>
using namespace std;


int n, cnt[2], paper[128][128];


void CountPaper(int sx, int sy, int n)
{
    int white = 0, blue = 0;
    for (int y = sy; y < sy + n; y++) {
        for (int x = sx; x < sx + n; x++) {
            if (paper[y][x] == 0)
                white++;
            else
                blue++;
        }
    }

    if (blue == 0) {
        cnt[0]++;
        return;
    }

    if (white == 0) {
        cnt[1]++;
        return;
    }

    CountPaper(sx, sy, n / 2);
    CountPaper(sx + n / 2, sy, n / 2);
    CountPaper(sx, sy + n / 2, n / 2);
    CountPaper(sx + n / 2, sy + n / 2, n / 2);
}


int main()
{
    cin >> n;

    for (int y = 0; y < n; y++)
        for (int x = 0; x < n; x++)
            cin >> paper[y][x];

    CountPaper(0, 0, n);

    cout << cnt[0] << '\n';
    cout << cnt[1] << '\n';

    return 0;
}
