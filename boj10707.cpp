#include <algorithm>
#include <iostream>
using namespace std;


int a, b, c, d, p, x, y;


int main()
{
    cin >> a >> b >> c >> d >> p;

    x = p * a;
    y = (p <= c) ? b : b + (p - c) * d;

    cout << min(x, y) << '\n';

    return 0;
}
