#include <iostream>
using namespace std;


int t, n, score[2][100000], dp[2][100000];


int main()
{
    cin >> t;

    while (t--) {
        cin >> n;

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < n; j++) {
                cin >> score[i][j];
                dp[i][j] = 0;
            }
        }

        dp[0][0] = score[0][0];
        dp[1][0] = score[1][0];
        for (int i = 1; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + score[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + score[1][i];
        }

        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }

    return 0;
}
