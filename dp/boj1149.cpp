#include <algorithm>
#include <iostream>
using namespace std;


int n, res = 1000000, dp[1001][3];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> dp[i][0] >> dp[i][1] >> dp[i][2];

    for (int i = 1; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + dp[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + dp[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + dp[i][2];
    }

    for (int i = 0; i < 3; i++)
        if (dp[n][i] < res)
            res = dp[n][i];

    cout << res << '\n';

    return 0;
}
