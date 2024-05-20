#include <iostream>
using namespace std;


int t, cnt;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        int x1, y1, x2, y2, n, cx, cy, r, d1, d2;

        cin >> x1 >> y1 >> x2 >> y2 >> n;

        cnt = 0;
        for (int j = 0; j < n; j++) {
            cin >> cx >> cy >> r;

            d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);

            if ((d1 < r * r) ^ (d2 < r * r)) cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
