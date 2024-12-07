#include <iostream>
using namespace std;


int n, l, d, r, g, t, pos, cnt;


int main()
{
    cin >> n >> l;

    while (n--) {
        cin >> d >> r >> g;

        t += d - pos;
        cnt = t % (r + g);
        if (cnt < r) t += r - cnt;

        pos = d;
    }

    t += l - pos;

    cout << t;

    return 0;
}
