#include <iostream>
using namespace std;


int n, x, y, v[4] = { 10000, 10000, -10000, -10000 };


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (x < v[0]) v[0] = x;
        if (y < v[1]) v[1] = y;
        if (x > v[2]) v[2] = x;
        if (y > v[3]) v[3] = y;
    }

    cout << (v[2] - v[0]) * (v[3] - v[1]) << '\n';

    return 0;
}
