#include <iostream>
using namespace std;


int n, dp[1000001], before[1000001];


int main()
{
    cin >> n;

    for (int x = 2; x <= n; x++) {
        dp[x] = dp[x - 1] + 1;
        before[x] = x - 1;
        if (x % 3 == 0 && dp[x / 3] + 1 < dp[x]) {
            dp[x] = dp[x / 3] + 1;
            before[x] = x / 3;
        }
        if (x % 2 == 0 && dp[x / 2] + 1 < dp[x]) {
            dp[x] = dp[x / 2] + 1;
            before[x] = x / 2;
        }
    }

    cout << dp[n] << '\n';

    while (n > 0) {
        cout << n << ' ';
        n = before[n];
    }

    return 0;
}
