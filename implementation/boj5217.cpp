#include <iostream>
using namespace std;


int t, n, cnt;


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        cout << "Pairs for " << n << ":";

        cnt = 0;
        for (int a = 1; a < n; a++) {
            for (int b = 1; b < n; b++) {
                if (a < b && a + b == n) {
                    if (cnt > 0) cout << ',';
                    cout << ' ' << a << ' ' << b;
                    cnt++;
                }
            }
        }

        cout << '\n';
    }

    return 0;
}
