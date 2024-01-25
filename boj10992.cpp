#include <iostream>
using namespace std;


int n;


int main()
{
    cin >> n;

    for (int j = 1; j < n; j++)
        cout << ' ';
    cout << '*';
    cout << '\n';

    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - i; j++)
            cout << ' ';
        cout << '*';
        for (int j = 1; j < i * 2; j++)
            cout << ' ';
        cout << '*';
        cout << '\n';
    }

    if (n > 1)
        for (int j = 1; j < n * 2; j++)
            cout << '*';

    return 0;
}
