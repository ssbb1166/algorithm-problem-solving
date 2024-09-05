#include <iostream>
using namespace std;


int n, m, k, kx, ky;
long long dp[16][16];


int main()
{
    cin >> n >> m >> k;

    ky = (k + m - 1) / m;
    kx = (k + m - 1) % m + 1;

    dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];

    if (k == 0)
        cout << dp[n][m];
    else
        cout << dp[ky][kx] * dp[n - ky + 1][m - kx + 1];

    return 0;
}
