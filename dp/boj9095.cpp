#include <iostream>
using namespace std;


int t, n, dp[11];


int main()
{
    dp[1] = 1;
    dp[2] = dp[1] + 1;
    dp[3] = dp[2] + dp[1] + 1;

    for (int i = 4; i <= 10; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    cin >> t;

    while (t--) {
        cin >> n;
        cout << dp[n] << '\n';
    }

    return 0;
}
