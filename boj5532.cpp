#include <iostream>
using namespace std;


int l, a, b, c, d, day1, day2;


int main()
{
    cin >> l >> a >> b >> c >> d;

    if (a % c)
        day1 = a / c + 1;
    else
        day1 = a / c;

    if (b % d)
        day2 = b / d + 1;
    else
        day2 = b / d;

    cout << l - (day1 > day2 ? day1 : day2) << '\n';

    return 0;
}
