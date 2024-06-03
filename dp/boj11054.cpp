#include <algorithm>
#include <iostream>
using namespace std;


int n, res, a[1000], dp[1000][2];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        dp[i][0] = 1;

        for (int j = 0; j < i; j++)
            if (a[i] > a[j])
                dp[i][0] = max(dp[i][0], dp[j][0] + 1);
    }

    for (int i = n - 1; i >= 0; i--) {
        dp[i][1] = 1;

        for (int j = n - 1; j > i; j--)
            if (a[i] > a[j])
                dp[i][1] = max(dp[i][1], dp[j][1] + 1);
    }

    for (int i = 0; i < n; i++)
        res = max(res, dp[i][0] + dp[i][1] - 1);

    cout << res;

    return 0;
}
