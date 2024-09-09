#include <iostream>
using namespace std;


int w, h, p, q, t, x, y;


int main()
{
    cin >> w >> h >> p >> q >> t;

    x = (p + t) % (w * 2);
    y = (q + t) % (h * 2);

    if (x > w) x = w * 2 - x;
    if (y > h) y = h * 2 - y;

    cout << x << ' ' << y;

    return 0;
}
