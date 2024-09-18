#include <iostream>
using namespace std;


int n, m, j, l, r, pos, dist;


int main()
{
    cin >> n >> m >> j;

    l = 1;
    r = m;

    while (j--) {
        cin >> pos;
        if (pos < l) {
            dist += l - pos;
            l = pos;
            r = pos + m - 1;
        }
        if (pos > r) {
            dist += pos - r;
            l = pos - m + 1;
            r = pos;
        }
    }

    cout << dist;

    return 0;
}
