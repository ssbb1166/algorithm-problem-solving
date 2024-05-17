#include <iostream>
using namespace std;


string a, b;
int n, m, idx_a, idx_b;
bool found;


int main()
{
    cin >> a >> b;

    n = a.length();
    m = b.length();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i] == b[j]) {
                idx_a = i;
                idx_b = j;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    for (int y = 0; y < m; y++) {
        if (y == idx_b) {
            cout << a << '\n';
        }
        else {
            for (int x = 0; x < n; x++) {
                if (x == idx_a)
                    cout << b[y];
                else
                    cout << '.';
            }
            cout << '\n';
        }
    }

    return 0;
}
