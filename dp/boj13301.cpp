#include <iostream>
using namespace std;


int n;
long long dp[81][2];


int main()
{
    cin >> n;

    dp[1][0] = dp[1][1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][1] = dp[i - 1][0] + dp[i - 1][1];
    }

    cout << dp[n][0] * 2 + dp[n][1] * 2;

    return 0;
}
