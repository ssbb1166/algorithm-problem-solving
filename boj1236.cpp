#include <algorithm>
#include <iostream>
using namespace std;


int n, m, cnt[2];
char state[50][50];
bool in_x[50], in_y[50];


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            cin >> state[y][x];
            if (state[y][x] == 'X') {
                in_x[x] = true;
                in_y[y] = true;
            }
        }
    }

    for (int x = 0; x < m; x++)
        if (!in_x[x]) cnt[0]++;

    for (int y = 0; y < n; y++)
        if (!in_y[y]) cnt[1]++;

    cout << max(cnt[0], cnt[1]) << '\n';

    return 0;
}
