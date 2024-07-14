#include <iostream>
using namespace std;


int t, n, m, i, j, seats[20][20];


int main()
{
    cin >> t;

    while (t--) {
        cin >> n >> m;

        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                seats[i][j] = 0;

        i = 0, j = 0;
        for (int importance = n * m; importance > 0; importance--) {
            seats[i][j] = importance;
            if (i == 0 || j == m - 1) {
                i = n - 1, j = 0;
                if (seats[i][j])
                    while (seats[i][j]) j++;
                else
                    while (!seats[i - 1][j]) i--;
            }
            else {
                i--;
                j++;
            }
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++)
                cout << seats[i][j] << ' ';
            cout << '\n';
        }
    }

    return 0;
}
