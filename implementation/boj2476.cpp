#include <iostream>
using namespace std;


int n, a, b, c, money, max_money;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b >> c;

        if (a == b && b == c && c == a) {
            money = 10000 + a * 1000;
        }
        else if (a == b) {
            money = 1000 + a * 100;
        }
        else if (b == c) {
            money = 1000 + b * 100;
        }
        else if (c == a) {
            money = 1000 + c * 100;
        }
        else {
            if (a >= b && a >= c)
                money = a * 100;
            if (b >= a && b >= c)
                money = b * 100;
            if (c >= a && c >= b)
                money = c * 100;
        }

        if (money > max_money)
            max_money = money;
    }

    cout << max_money << '\n';

    return 0;
}
