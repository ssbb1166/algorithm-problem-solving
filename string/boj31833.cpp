#include <iostream>
#include <string>
using namespace std;


int n;
string a, b, x, y;


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a;
        x += a;
    }

    for (int i = 0; i < n; i++) {
        cin >> b;
        y += b;
    }

    if (x.length() < y.length()) {
        cout << x << '\n';
    }
    else if (x.length() > y.length()) {
        cout << y << '\n';
    }
    else {
        for (int i = 0; i < x.length(); i++) {
            if (x[i] < y[i]) {
                cout << x << '\n';
                return 0;
            }
            if (x[i] > y[i]) {
                cout << y << '\n';
                return 0;
            }
        }
        cout << x << '\n';
    }

    return 0;
}
