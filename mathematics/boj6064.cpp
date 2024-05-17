#include <iostream>
using namespace std;


int t, m, n, x, y, k;


int Year()
{
    k = x;

    while (k <= m * n) {
        if ((k - x) % m == 0 && (k - y) % n == 0)
            return k;

        k += m;
    }

    return -1;
}


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> m >> n >> x >> y;
        cout << Year() << '\n';
    }

    return 0;
}
