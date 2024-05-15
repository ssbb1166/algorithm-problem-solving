#include <iostream>
using namespace std;


int n, min_m, max_m, t, r, x, cnt;


int main()
{
    cin >> n >> min_m >> max_m >> t >> r;

    if (min_m + t > max_m) {
        cout << -1 << '\n';
        return 0;
    }

    x = min_m;
    for (int i = 0; i < n; i++) {
        while (x + t > max_m) {
            x -= r;
            cnt++;
            if (x < min_m)
                x = min_m;
        }
        x += t;
    }

    cout << n + cnt << '\n';

    return 0;
}
