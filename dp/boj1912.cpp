#include <algorithm>
#include <iostream>
using namespace std;


int n, res, dp[100000];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> dp[i];

    res = dp[0];
    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i], dp[i - 1] + dp[i]);
        res = max(res, dp[i]);
    }

    cout << res << '\n';

    return 0;
}
