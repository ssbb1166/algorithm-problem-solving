#include <iostream>
using namespace std;


int n;
long long cnt, dp[100001][10];


int main()
{
    cin >> n;

    for (int last = 1; last <= 9; last++)
        dp[1][last] = 1;

    for (int i = 2; i <= n; i++) {
        for (int last = 1; last <= 9; last++) {
            for (int d = -2; d <= 2; d++) {
                if (last + d >= 1 && last + d <= 9) {
                    dp[i][last] += dp[i - 1][last + d];
                    dp[i][last] %= 987654321;
                }
            }
        }
    }

    for (int last = 1; last <= 9; last++) {
        cnt += dp[n][last];
        cnt %= 987654321;
    }

    cout << cnt;

    return 0;
}
