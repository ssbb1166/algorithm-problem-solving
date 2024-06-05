#include <iostream>
using namespace std;


int a, b, c, d, e, t;


int main()
{
    cin >> a >> b >> c >> d >> e;

    if (a < 0) {
        t += -a * c;
        a = 0;
    }

    if (a == 0)
        t += d + b * e;

    if (a > 0)
        t += (b - a) * e;

    cout << t;

    return 0;
}
