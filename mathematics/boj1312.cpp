#include <iostream>
using namespace std;


int a, b, n, res;


int main()
{
    cin >> a >> b >> n;

    while (n--) {
        a %= b;
        a *= 10;
        res = a / b;
    }

    cout << res;

    return 0;
}
