#include <iostream>
using namespace std;


int n, cnt, dp[1001][10];


int main()
{
    cin >> n;

    for (int last = 0; last <= 9; last++)
        dp[1][last] = 1;

    for (int digit = 2; digit <= n; digit++) {
        for (int last = 0; last <= 9; last++) {
            if (last == 0) {
                dp[digit][last] = 1;
                continue;
            }
            dp[digit][last] = (dp[digit - 1][last] + dp[digit][last - 1]) % 10007;
        }
    }

    for (int last = 0; last <= 9; last++)
        cnt += dp[n][last];

    cout << cnt % 10007 << '\n';

    return 0;
}
