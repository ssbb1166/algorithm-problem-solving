#include <iostream>
using namespace std;


int t, n;
long long dp[100001][2];


int main()
{
    dp[1][1] = 1;
    dp[2][0] = dp[1][1];
    dp[2][1] = 1;
    dp[3][0] = dp[2][1] + dp[1][1];
    dp[3][1] = dp[2][0] + dp[1][0] + 1;

    for (int i = 4; i <= 100000; i++) {
        dp[i][0] = (dp[i - 1][1] + dp[i - 2][1] + dp[i - 3][1]) % 1000000009;
        dp[i][1] = (dp[i - 1][0] + dp[i - 2][0] + dp[i - 3][0]) % 1000000009;
    }

    cin >> t;

    while (t--) {
        cin >> n;
        cout << dp[n][1] << ' ' << dp[n][0] << '\n';
    }

    return 0;
}
