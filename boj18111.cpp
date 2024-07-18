#include <iostream>
using namespace std;


int n, m, b, min_t = 1e9, max_h, height[500][500];


int main()
{
    cin >> n >> m >> b;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> height[i][j];

    for (int h = 0; h <= 256; h++) {
        int t = 0, inventory = b;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (height[i][j] > h) {
                    t += (height[i][j] - h) * 2;
                    inventory += height[i][j] - h;
                }
                else {
                    t += h - height[i][j];
                    inventory -= h - height[i][j];
                }
            }
        }

        if (inventory < 0)
            continue;

        if (t == min_t && h > max_h)
            max_h = h;

        if (t < min_t) {
            min_t = t;
            max_h = h;
        }
    }

    cout << min_t << ' ' << max_h;

    return 0;
}
