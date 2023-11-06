#include <iostream>
using namespace std;


int t, x, y;


int main()
{
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        cout << x + y << '\n';
    }

    return 0;
}
