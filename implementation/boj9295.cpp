#include <iostream>
using namespace std;


int t, x, y;


int main()
{
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cin >> x >> y;
        cout << "Case " << i << ": " << x + y << '\n';
    }

    return 0;
}
