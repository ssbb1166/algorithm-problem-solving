#include <iostream>
using namespace std;


int t;


int main()
{
    cin >> t;

    while (t--) {
        int x1, y1, r1, x2, y2, r2, dist;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);

        if (dist == 0 && r1 == r2)
            cout << -1 << '\n';
        else if (dist > (r2 - r1) * (r2 - r1) && dist < (r1 + r2) * (r1 + r2))
            cout << 2 << '\n';
        else if (dist == (r2 - r1) * (r2 - r1) || dist == (r1 + r2) * (r1 + r2))
            cout << 1 << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}
