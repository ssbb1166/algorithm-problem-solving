#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int i = 0; i < 2; i++) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < 5 * n; x++)
                cout << '@';
            cout << '\n';
        }

        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++)
                cout << '@';
            cout << '\n';
        }
    }

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < 5 * n; x++)
            cout << '@';
        cout << '\n';
    }

    return 0;
}
