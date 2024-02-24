#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int i = 0; i < n - 1; i++)
        cout << ' ';
    cout << '*';
    cout << '\n';

    for (int line = 1; line < n; line++) {
        for (int i = n - line; i > 1; i--)
            cout << ' ';
        cout << '*';
        for (int i = line * 2; i > 1; i--)
            cout << ' ';
        cout << '*';
        cout << '\n';
    }

    return 0;
}
