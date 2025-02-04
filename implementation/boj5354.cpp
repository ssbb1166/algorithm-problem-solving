#include <iostream>
using namespace std;


int t, n;


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++)
                cout << (x == 0 || x == n - 1 || y == 0 || y == n - 1 ? '#' : 'J');
            cout << '\n';
        }

        cout << '\n';
    }

    return 0;
}
