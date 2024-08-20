#include <iostream>
using namespace std;


int n, num, x, y, idx = 1, turn = 2, table[1000][1000];
pair<int, int> pos[1000000];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> num;

    x = y = n / 2 + 1;
    table[y][x] = idx;
    pos[idx++] = { y--, x };

    while (idx < n * n) {
        for (int i = 0; i < turn; i++) {
            table[y][x] = idx;
            pos[idx++] = { y, x++ };
        }
        x--, y++;
        for (int i = 0; i < turn; i++) {
            table[y][x] = idx;
            pos[idx++] = { y++, x };
        }
        y--, x--;
        for (int i = 0; i < turn; i++) {
            table[y][x] = idx;
            pos[idx++] = { y, x-- };
        }
        x++, y--;
        for (int i = 0; i < turn; i++) {
            table[y][x] = idx;
            pos[idx++] = { y--, x };
        }
        turn += 2;
    }

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= n; x++)
            cout << table[y][x] << ' ';
        cout << '\n';
    }

    cout << pos[num].first << ' ' << pos[num].second;

    return 0;
}
