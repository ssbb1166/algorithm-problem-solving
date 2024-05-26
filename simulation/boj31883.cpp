#include <iostream>
using namespace std;


int n, a, b, c, d, t;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c >> d;

        int tmp = t % (c + d);
        if (tmp >= c)
            a += (c + d) - tmp;

        t += (a < b ? a : b);
    }

    cout << t << '\n';

    return 0;
}
