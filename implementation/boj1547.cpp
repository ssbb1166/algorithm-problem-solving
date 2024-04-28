#include <iostream>
using namespace std;


int m, x, y, res = 1;


int main()
{
    cin >> m;

    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (x == res)
            res = y;
        else if (y == res)
            res = x;
    }

    cout << res << '\n';

    return 0;
}
