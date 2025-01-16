#include <algorithm>
#include <iostream>
using namespace std;


int n;
double x, y, res;


int main()
{
    cin >> x >> y >> n;

    res = x / y * 1000;

    while (n--) {
        cin >> x >> y;
        res = min(res, x / y * 1000);
    }

    cout << fixed;
    cout.precision(2);
    cout << res;

    return 0;
}
