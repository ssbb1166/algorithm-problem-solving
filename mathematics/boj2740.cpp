#include <iostream>
using namespace std;


int n, m, k, c, a[100][100], b[100][100];


int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cin >> m >> k;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < k; j++)
            cin >> b[i][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            c = 0;
            for (int x = 0; x < m; x++)
                c += a[i][x] * b[x][j];
            cout << c << ' ';
        }
        cout << '\n';
    }

    return 0;
}
