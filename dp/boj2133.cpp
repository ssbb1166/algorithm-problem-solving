#include <iostream>
using namespace std;


int n, dp[31][3];


int main()
{
    cin >> n;

    dp[2][0] = dp[2][1] = dp[2][2] = 1;
    for (int i = 4; i <= n; i += 2) {
        dp[i][0] = dp[i - 2][0] * 2 + dp[i - 2][1] + dp[i - 2][2];
        dp[i][1] = dp[i - 2][0] + dp[i - 2][1] * 2 + dp[i - 2][2];
        dp[i][2] = dp[i - 2][0] + dp[i - 2][1] + dp[i - 2][2];
    }

    cout << dp[n][0] + dp[n][1] + dp[n][2];

    return 0;
}
