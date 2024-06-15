#include <iostream>
using namespace std;


int t, n, m;
long long dp[1001][1001];


int main()
{
    dp[1][1] = 1;
    dp[2][1] = 1;
    dp[2][2] = dp[1][1];
    dp[3][1] = 1;
    dp[3][2] = dp[2][1] + dp[1][1];
    dp[3][3] = dp[2][2] + dp[1][2];

    for (int i = 4; i <= 1000; i++)
        for (int j = 2; j <= 1000; j++)
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 2][j - 1] + dp[i - 3][j - 1]) % 1000000009;

    cin >> t;

    while (t--) {
        cin >> n >> m;

        long long cnt = 0;
        for (int i = 1; i <= m; i++) {
            cnt += dp[n][i];
            cnt %= 1000000009;
        }

        cout << cnt << '\n';
    }

    return 0;
}
