#include <iostream>
using namespace std;


int n, d, a[100000];
bool exist = true;


int main()
{
    cin >> n >> a[0];

    if (n > 1) {
        cin >> a[1];
        d = a[1] - a[0];
        for (int i = 2; i < n; i++) {
            cin >> a[i];
            if (a[i] - a[i - 1] != d)
                exist = false;
        }
    }

    if (exist) {
        cout << "YES" << '\n';
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        cout << '\n';
        for (int i = 0; i < n; i++)
            cout << 0 << ' ';
        cout << '\n';
    }
    else {
        cout << "NO" << '\n';
    }

    return 0;
}
