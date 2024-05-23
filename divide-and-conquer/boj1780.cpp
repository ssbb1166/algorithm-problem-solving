#include <iostream>
using namespace std;


int n, paper[2187][2187], cnt[3];


void CountPaper(int sx, int sy, int n)
{
    int minus = 0, zero = 0, plus = 0;
    for (int y = sy; y < sy + n; y++) {
        for (int x = sx; x < sx + n; x++) {
            if (paper[y][x] == -1)
                minus++;
            else if (paper[y][x] == 0)
                zero++;
            else
                plus++;
        }
    }

    if (minus == n * n) {
        cnt[0]++;
        return;
    }
    
    if (zero == n * n) {
        cnt[1]++;
        return;
    }

    if (plus == n * n) {
        cnt[2]++;
        return;
    }

    for (int dy = 0; dy < n; dy += n / 3)
        for (int dx = 0; dx < n; dx += n / 3)
            CountPaper(sx + dx, sy + dy, n / 3);
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
    cout << cnt[2] << '\n';

    return 0;
}
