#include <iostream>
#include <string>
using namespace std;


string x;
int y, tmp, cnt = 1;


int main()
{
    cin >> x;

    for (int i = 0; i < x.length(); i++)
        y += (x[i] - '0');

    while (y >= 10) {
        tmp = y;
        y = 0;

        while (tmp) {
            y += tmp % 10;
            tmp = tmp / 10;
        }

        cnt++;
    }

    if (x.length() > 1)
        cout << cnt << '\n';
    else
        cout << 0 << '\n';

    if (y % 3 == 0)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}
