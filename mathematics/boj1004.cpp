#include <iostream>
using namespace std;


int t;


int main()
{
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2, n, cx, cy, r, d1, d2, cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2 >> n;

        while (n--) {
            cin >> cx >> cy >> r;
            d1 = (cx - x1) * (cx - x1) + (cy - y1) * (cy - y1);
            d2 = (cx - x2) * (cx - x2) + (cy - y2) * (cy - y2);
            cnt += (d1 < r* r) ^ (d2 < r* r);
        }

        cout << cnt << '\n';
    }

    return 0;
}
