#include <iostream>
using namespace std;


int n, m, color, prev_color, cnt, paint;


int main()
{
    cin >> n >> m;

    for (int y = 0; y < n; y++) {
        prev_color = cnt = 0;
        for (int x = 0; x < m; x++) {
            cin >> color;
            if (color && (color != prev_color)) cnt++;
            if (color == 0 || x == m - 1) {
                if (cnt) paint += cnt / 2 + 1;
                cnt = 0;
            }
            prev_color = color;
        }
    }

    cout << paint << '\n';

    return 0;
}
