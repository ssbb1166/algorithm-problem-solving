#include <iostream>
using namespace std;


int n, m, k, num, dp[301][301];


int main()
{
    cin >> n >> m;

    for (int row = 1; row <= n; row++) {
        for (int col = 1; col <= m; col++) {
            cin >> num;
            dp[row][col] = dp[row - 1][col] + dp[row][col - 1] - dp[row - 1][col - 1] + num;
        }
    }

    cin >> k;

    for (int t = 0; t < k; t++) {
        int i, j, x, y;
        cin >> i >> j >> x >> y;
        cout << dp[x][y] - dp[i - 1][y] - dp[x][j - 1] + dp[i - 1][j - 1] << '\n';
    }

    return 0;
}
