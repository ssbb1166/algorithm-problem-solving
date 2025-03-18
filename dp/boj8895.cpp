#include <iostream>
using namespace std;


int t, n, l, r;
long long dp[21][21][21];


int main()
{
    cin >> t;

    dp[1][1][1] = 1;
    for (int n = 2; n <= 20; n++)
        for (int l = 1; l <= n; l++)
            for (int r = 1; r <= n; r++)
                dp[n][l][r] = dp[n - 1][l - 1][r] + dp[n - 1][l][r - 1] + dp[n - 1][l][r] * (n - 2);

    while (t--)    {
        cin >> n >> l >> r;
        cout << dp[n][l][r] << '\n';
    }

    return 0;
}
