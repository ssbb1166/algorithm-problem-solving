#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            cout << '*';
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << '\n';
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++)
            cout << '*';
        for (int j = 1; j <= (n - i) * 2; j++)
            cout << ' ';
        for (int j = 1; j <= i; j++)
            cout << '*';
        cout << '\n';
    }

    return 0;
}
