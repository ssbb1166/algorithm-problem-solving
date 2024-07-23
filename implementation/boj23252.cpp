#include <iostream>
using namespace std;


int t, a, b, c;


int main()
{
    cin >> t;

    while (t--) {
        cin >> a >> b >> c;
        if (a >= c && (a - c) % 2 == 0 && b % 2 == 0)
            cout << "Yes" << '\n';
        else if (a >= c && (a - c) % 2 == 0 && a > 0 && b % 2 == 1)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }

    return 0;
}
