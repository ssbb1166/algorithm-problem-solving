#include <iostream>
using namespace std;


int t, h, w, n, x, y;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;

        y = (n - 1) % h + 1;
        x = (n - 1) / h + 1;

        cout << y;
        cout.width(2);
        cout.fill('0');
        cout << x << '\n';
    }

    return 0;
}
