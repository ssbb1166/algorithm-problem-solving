#include <algorithm>
#include <iostream>
#define INF 5000
using namespace std;


int n, dp[5001];


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        dp[i] = INF;

    dp[3] = dp[5] = 1;

    for (int i = 6; i <= n; i++) {
        if (dp[i - 3] != INF)
            dp[i] = min(dp[i], dp[i - 3] + 1);
        if (dp[i - 5] != INF)
            dp[i] = min(dp[i], dp[i - 5] + 1);
    }

    if (dp[n] == INF)
        cout << -1 << '\n';
    else
        cout << dp[n] << '\n';

    return 0;
}
