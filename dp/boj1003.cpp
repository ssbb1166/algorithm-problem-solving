#include <iostream>
using namespace std;


int t, n, dp[2][41] = { {1, 0}, {0, 1} };


int main()
{
    cin >> t;

    for (int i = 2; i <= 40; i++) {
        dp[0][i] = dp[0][i - 1] + dp[0][i - 2];
        dp[1][i] = dp[1][i - 1] + dp[1][i - 2];
    }

    for (int i = 0; i < t; i++) {
        cin >> n;
        cout << dp[0][n] << ' ' << dp[1][n] << '\n';
    }

    return 0;
}
