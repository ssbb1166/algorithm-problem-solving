#include <iostream>
using namespace std;


int t, n, dp[10001][4];


int main()
{
    dp[1][1] = 1;
    dp[1][2] = 0;
    dp[1][3] = 0;

    dp[2][1] = dp[1][1] + dp[1][2] + dp[1][3];
    dp[2][2] = 1;
    dp[2][3] = 0;

    dp[3][1] = dp[2][1] + dp[2][2] + dp[2][3];
    dp[3][2] = dp[1][2] + dp[1][3];
    dp[3][3] = 1;

    for (int i = 4; i <= 10000; i++)
        for (int j = 1; j <= 3; j++)
            for (int k = j; k <= 3; k++)
                dp[i][j] += dp[i - j][k];

    cin >> t;

    while (t--) {
        cin >> n;
        cout << dp[n][1] + dp[n][2] + dp[n][3] << '\n';
    }

    return 0;
}
