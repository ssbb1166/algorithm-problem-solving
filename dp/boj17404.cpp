#include <algorithm>
#include <iostream>
using namespace std;


int n, res = 1e9, cost[1001][3], dp[1002][3];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];

    // 1번 R, N번 G
    // 1번 R, N번 B
    // 1번 G, N번 R
    // 1번 G, N번 B
    // 1번 B, N번 R
    // 1번 B, N번 G

    dp[1][0] = cost[1][0];
    dp[1][1] = 1e9;
    dp[1][2] = 1e9;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
    }
    res = min(res, dp[n][1]);
    res = min(res, dp[n][2]);

    dp[1][0] = 1e9;
    dp[1][1] = cost[1][1];
    dp[1][2] = 1e9;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
    }
    res = min(res, dp[n][0]);
    res = min(res, dp[n][2]);

    dp[1][0] = 1e9;
    dp[1][1] = 1e9;
    dp[1][2] = cost[1][2];
    for (int i = 2; i <= n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + cost[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + cost[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + cost[i][2];
    }
    res = min(res, dp[n][0]);
    res = min(res, dp[n][1]);

    cout << res;

    return 0;
}
