#include <algorithm>
#include <iostream>
using namespace std;


long long n, m, d, h[1000][1000];
bool possible = true;


int main()
{
    cin >> n >> m >> d;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> h[i][j];
            h[i][j] += d * i;
        }
        sort(h[i], h[i] + m);
    }

    for (int i = 1; i < n; i++)
        for (int j = 0; j < m; j++)
            if (h[i][j] <= h[i - 1][j])
                possible = false;

    cout << (possible ? "YES" : "NO");

    return 0;
}
